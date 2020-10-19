#!/bin/sh

product=1
for n in "$@"; do
	product=$((product * n))
done

echo $product
