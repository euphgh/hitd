{
  description = "A shell for HITD";
  inputs.nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
  inputs.flake-utils.url = "github:numtide/flake-utils";
  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = nixpkgs.legacyPackages.${system};
      in
      {
        devShells.default = pkgs.mkShell {
          packages = with pkgs; [
            clang-tools_15
            verilator
            readline
            ncurses
            ccache
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
            export VSRC_HOME=$(pwd)/../build
            export PATH="${pkgs.clang-tools_15}/bin:$PATH"
            ccache --set-config=sloppiness=locale,time_macros
          '';
        };
      });
}
