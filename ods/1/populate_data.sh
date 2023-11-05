#!/bin/bash

set -e
set -u

populate_1.1.1 () {
	touch ./sample_data_1.1.1.txt
	for value in {1..50}
	do
		echo "line $value" >> ./sample_data_1.1.1.txt
	done
}

populate_1.1.2 () {
	touch ./sample_data_1.1.2.txt
	for value in {1..103}
	do
		echo "line $value" >> ./sample_data_1.1.2.txt
	done
}

populate_1.1.1
populate_1.1.2

