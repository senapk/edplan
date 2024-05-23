{ pkgs }: {
	deps = [
   pkgs.plantuml
		pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}