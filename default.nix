with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "my-app";
  src = ./.;

  buildInputs = [ boost poco ];

  buildPhase = "make";

  installPhase = ''
    mkdir -p $out/bin
    cp C/calendar/calendar $out/bin
    cp C/fahrkartenautomat/fahrkartenautomat $out/bin
    cp C/numerischeDatentypen/numerischeDatentypen $out/bin
  '';
}