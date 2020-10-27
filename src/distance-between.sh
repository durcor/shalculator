#!/bin/sh
# shellcheck disable=2086,2046

[ $# != 4 ] && {
	echo "Usage: $0 (<arg 1>, <arg 2>) and (<arg 3>, <arg 4>)"
	exit 1
}

sqrt $(add $(sq $(sub $3 $1)) $(sq $(sub $4 $2)))
