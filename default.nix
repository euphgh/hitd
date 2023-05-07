{ pkgs ? import <nixpkgs> { } }:
pkgs.mkShell {
  packages = with pkgs; [
    verilator
    readline
    ncurses
    bison
    flex
    fmt
  ];
  nativeBuildInputs = with pkgs; [
    llvmPackages_15.libllvm
  ];
  shellHook = ''
    export HITD_HOME=$(pwd)
    export VSRC_HOME="/home/hgh/workspace/mycpu"
    export NSCSCC_HOME="/home/hgh/nscscc"
  '';
}
