#!/bin/bash

INDIVIDUAL_TESTS=(
	"subject.map" \
	"edge_left.map" \
	"edge_right.map" \
	"edge_down.map" \
	"edge_top.map" \
	"corner_up_left.map" \
	"corner_up_right.map" \
	"corner_down_left.map" \
	"corner_down_right.map"
)

for map in "${INDIVIDUAL_TESTS[@]}"; do
	echo "Testing $map (no output = pass)"
	./bsq maps/$map | diff - tests/outputs/$map
	if [ $? -ne 0 ]; then
		echo "Failed"
		exit 1
	fi
done

for ((argc = 2; argc <= ${#INDIVIDUAL_TESTS[@]}; argc++)); do
	argv=("${INDIVIDUAL_TESTS[@]:0:$argc}")
	echo "Testing argv = ${argv[@]} (no output = pass)"
	diff <(cat ${argv[@]/#/tests/outputs/}) <(./bsq ${argv[@]/#/maps/})
done
