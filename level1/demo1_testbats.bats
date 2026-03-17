#!/usr/bin/env bats

setup() {
    gcc demo1.c -o demo1
}

@test "Test case 1" {
    run ./program <<< "5"
    [ "$status" -eq 0 ]
    [ "$output" = "Expected Output" ]
}

@test "Test case 2" {
    run ./program <<< "10"
    [ "$status" -eq 0 ]
    [ "$output" = "Expected Output" ]
}