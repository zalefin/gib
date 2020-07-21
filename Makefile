
SRC=./src

build:
	gcc ${SRC}/* -o gib

test: build
	./gib
