all:
	g++ main.cpp -std=c++11 -o randname -Wno-writable-strings -O3
release:
	g++ main.cpp -std=c++11 -o randname -Wno-writable-strings -O3
install: release
	mv randname /usr/local/bin