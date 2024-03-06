#!/bin/bash

if [ ! -f "tests.txt" ]; then
    echo "Error: tests.txt not found."
    exit 1
fi

while IFS= read -r line || [[ -n "$line" ]]; do
    echo "$line" | ./main
done < "tests.txt"