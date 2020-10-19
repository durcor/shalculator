#!/bin/sh

install_dir=/bin
CC=gcc
CXX=g++

# cwd=$0 # (without executable file)
functions="add factorial fibonacci mul pow sub"

for f in $functions; do
	if ls "$f/"*.c; then
		$CC "$f/$f.c" -o "bin/$f"
	elif ls "$f/"*.cpp; then
		$CXX "$f/$f.cpp" -o "bin/$f"
	fi
	cp "$f/$f" "bin/$f"
done

for f in bin/*; do
	sudo cp "$f" $install_dir
done
