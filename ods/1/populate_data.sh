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
	
populate_1.1.3 () {
	touch ./sample_data_1.1.3.txt
	for value in {1..242}
	do
		if [[ $value -eq 42 || $value -eq 142 || $value -eq 242 ]]
		then
			echo >> ./sample_data_1.1.3.txt
		else
			echo "line $value" >> ./sample_data_1.1.3.txt
		fi
	done
	sed -i '' '$d' ./sample_data_1.1.3.txt

}

# populate_1.1.1
# populate_1.1.2
populate_1.1.3

