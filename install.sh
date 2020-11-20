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
	compile factorial
	compile fibonacci
	echo "Copying distance-between"
	cp src/distance-between.sh bin/distance-between
	chmod +x bin/distance-between
	echo "Copying const"
	cp src/const.sh bin/const
	chmod +x bin/const
	echo "Copying E"
	cp src/E.sh bin/E
	chmod +x bin/E
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
			/bin/distance-between /bin/const
		;;
esac
