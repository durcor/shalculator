#!/bin/sh

set -e

install_dir=/bin
CC=gcc
# CXX=g++

# cwd=$0 # (without executable file)

compile()
{
file=$1
libs=$2

	echo "Compiling $file"
	if [ "$2" ]; then
		$CC "src/$file.c" -l"$libs" -o "bin/$file"
	else
		$CC "src/$file.c" -o "bin/$file"
	fi
}

build()
{
	rm -r ./bin
	mkdir ./bin

	compile add
	compile sub
	compile mul
	compile div
	compile rem
	echo "Copying sqrt"
	cp src/sqrt.sh bin/sqrt
	chmod +x bin/sqrt
	compile sq
	compile pow m
	compile pi m
	compile factorial
	compile fibonacci
	echo "Copying distance-between"
	cp src/distance-between.sh bin/distance-between
	chmod +x bin/distance-between
}

case $1 in
	"build")
		build
		;;
	"install")
		build
		sudo cp bin/* $install_dir
		;;
	"uninstall")
		sudo rm /bin/add /bin/sub /bin/mul /bin/div /bin/pow \
			/bin/factorial /bin/fibonacci /bin/rem /bin/sqrt \
			/bin/distance-between
		;;
esac
