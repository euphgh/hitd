import sys
import re
import statistics
import getopt
from tabulate import tabulate # pip3 inst all tabulate!!
# import pdb

def main():
    # default parameters
    inputfile='performance.log'
    sortby=0

    # Parse command line options
    opts, args = getopt.getopt(sys.argv[1:],'hi:s:')
    for opt, arg in opts:
        if opt == '-h':
            print('Examples:')
            print('    parselog.py -i performance.log')
            print('    parselog.py -i performance.log -s 1')
            sys.exit(0)
        elif opt in ('-i', '--ifile'):
           inputfile = arg
        elif opt in ('-s', '--sort'):
           sortby = int(arg)

    # https://docs.python.org/2/howto/regex.html
    # \[ : [ is a meta char and needs to be escaped 
    # (.*?) : match everything in a non-greedy way and capture it.
    expr = re.compile('\[(.*?)\]')

    data = dict()
    for line in open(inputfile, 'r'):
        # print '\n\n-----';
        strings = expr.findall(line)
        # pdb.set_trace()
        assert(len(strings)>1)
        key = strings[0];
        val = strings[1];
        vals = val.partition(' ')
        unit = vals[2]

        # brings everything on the same scale (ms)
        num_ms = float(vals[0])
        if unit=='mis':
            num_ms = num_ms/1000.0    

        # append time to dictionary entry
        if key in data:
            data[key].append(num_ms)
        else:
            data[key] = [num_ms]

    #--- to sort the data
    # import operator
    # for key in sorted(data, key=operator.itemgetter(0), reverse=True):

    #--- create the table
    table = [];
    for key in sorted(data):
        # compute statistics
        _med = statistics.median(data[key])
        _avg = statistics.mean(data[key])
        _sum = sum(data[key])
        _max = max(data[key])
        _num = len(data[key])
        table.append((key, _med, _avg, _max, _num, _sum))

    #--- sort it
    table = sorted(table, key=lambda val: val[sortby], reverse=True)

    #--- create a pretty table
    header= ["Context","median (us)", "mean(us)","max(us)", "number", "sum(us)"]
    header[sortby] = '**'+header[sortby]+'**' 
    # print('Table sorted by: ', header[sortby])
    print( tabulate(table, headers=header, floatfmt=".2f") )

if __name__ == "__main__":
    main()
