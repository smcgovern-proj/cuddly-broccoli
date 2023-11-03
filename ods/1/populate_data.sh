#!/bin/bash

set -e
set -u

touch ./sample_data.txt
for value in {1..50}
	echo "line $value" >> ./sample_data.txt
done

