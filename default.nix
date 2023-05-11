{ pkgs ? import <nixpkgs> { } }:
pkgs.mkShell {
  packages = with pkgs; [
    verilator
    readline
    ncurses
    bison
    flex
    fmt
    fd
  ];
  nativeBuildInputs = with pkgs; [
    llvmPackages_15.libllvm
  ];
  shellHook = ''
    export HITD_HOME=$(pwd)
    export VSRC_HOME="/home/hgh/cpu/cpuref/mycpu"
    export NSCSCC_HOME="/home/hgh/cpu/nscscc2021_group_v0.01"
  '';
}
