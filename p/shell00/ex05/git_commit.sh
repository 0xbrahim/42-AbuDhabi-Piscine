#!/bin/sh

hash=$(git log --pretty=format:"%H" -n 5)

echo "$hash"

