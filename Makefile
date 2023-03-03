dev:
	CC=clang meson compile -j 8 -C build 

release:
	meson setup --reconfigure --buildtype=release  build
	CC=clang meson compile -j 8 -C build 
