#!/bin/sh

for n in "$@"; do
	sum=$((sum + n))
done

echo $sum
