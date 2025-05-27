for invalid_map in maps/invalid*.map; do
	echo "Testing invalid map $invalid_map (no output = pass)."
	tests/test_ft_input $invalid_map | diff - maps/map_error
	if [ $? -ne 0 ]; then
		echo "Failed"
		exit 1
	fi
done

for valid_map in $(find maps/*.map -not -name "invalid*"); do
	echo "Testing valid map $valid_map (no output = pass)."
	tests/test_ft_input $valid_map | diff - $valid_map
	if [ $? -ne 0 ]; then
		echo "Failed"
		exit 1
	fi
done
