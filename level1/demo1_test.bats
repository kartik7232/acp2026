#!/usr/bin/env bats

setup() {
    gcc demo1.c -o demo1
}

@test "Test Case 1 - normal numbers" {
    run bash -c 'printf "3\n1\n5\n2\n" | ./demo1'
    [ "$status" -eq 0 ]
}

@test "Test Case 2 - increasing numbers" {
    run bash -c 'printf "4\n1\n2\n3\n4\n" | ./demo1'
    [ "$status" -eq 0 ]
}

@test "Test Case 3 - decreasing numbers" {
    run bash -c 'printf "4\n9\n7\n5\n1\n" | ./demo1'
    [ "$status" -eq 0 ]
}

@test "Test Case 4 - decimal numbers" {
    run bash -c 'printf "3\n2.5\n7.8\n1.2\n" | ./demo1'
    [ "$status" -eq 0 ]
}

@test "Test Case 5 - negative numbers" {
    run bash -c 'printf "3\n-5\n-2\n-9\n" | ./demo1'
    [ "$status" -eq 0 ]
}

