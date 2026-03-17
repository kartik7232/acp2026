#!/usr/bin/env bats

setup_file() {
    gcc "$BATS_TEST_DIRNAME/max_array.c" -o "$BATS_TEST_DIRNAME/max_array"
}

@test "max value at last index" {
    run bash -c 'printf "3\n1.5\n2.5\n9.9\n" | '"$BATS_TEST_DIRNAME"'/max_array'
    [ "$status" -eq 0 ]
    [[ "$output" == *"9.90"* ]]
    [[ "$output" == *"index 2"* ]]
}

@test "max value at first index" {
    run bash -c 'printf "4\n8.0\n1.0\n2.0\n3.0\n" | '"$BATS_TEST_DIRNAME"'/max_array'
    [ "$status" -eq 0 ]
    [[ "$output" == *"8.00"* ]]
    [[ "$output" == *"index 0"* ]]
}

@test "max value in middle" {
    run bash -c 'printf "5\n1.0\n2.0\n9.9\n3.0\n4.0\n" | '"$BATS_TEST_DIRNAME"'/max_array'
    [ "$status" -eq 0 ]
    [[ "$output" == *"9.90"* ]]
    [[ "$output" == *"index 2"* ]]
}

@test "single element array" {
    run bash -c 'printf "1\n4.2\n" | '"$BATS_TEST_DIRNAME"'/max_array'
    [ "$status" -eq 0 ]
    [[ "$output" == *"4.20"* ]]
    [[ "$output" == *"index 0"* ]]
}

@test "all negative values" {
    run bash -c 'printf "3\n-1.0\n-5.5\n-2.2\n" | '"$BATS_TEST_DIRNAME"'/max_array'
    [ "$status" -eq 0 ]
    [[ "$output" == *"-1.00"* ]]
    [[ "$output" == *"index 0"* ]]
}

@test "all equal values returns index 0" {
    run bash -c 'printf "3\n3.0\n3.0\n3.0\n" | '"$BATS_TEST_DIRNAME"'/max_array'
    [ "$status" -eq 0 ]
    [[ "$output" == *"3.00"* ]]
    [[ "$output" == *"index 0"* ]]
}

@test "mixed positive and negative" {
    run bash -c 'printf "4\n-1.0\n5.5\n-2.2\n3.3\n" | '"$BATS_TEST_DIRNAME"'/max_array'
    [ "$status" -eq 0 ]
    [[ "$output" == *"5.50"* ]]
    [[ "$output" == *"index 1"* ]]
}
