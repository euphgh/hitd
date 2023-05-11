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

# you can write ```export VSRC_HOME="/you/vcode/path"```
# to shellHook for exporting manually every times
  shellHook = ''
    export HITD_HOME=$(pwd)
  '';
}
