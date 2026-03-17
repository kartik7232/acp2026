#!/usr/bin/env bats

setup() {
    gcc demo2.c -o demo2
}

@test "Test Case 1" {
    run bash -c 'printf "r1\n4\n5\nr2\n3\n6\nr3\n8\n9\n" | ./demo2'
    [ "$status" -eq 0 ]
    [[ "$output" == *"r3 has greatest area = 72.00"* ]]
}


@test "Test Case 2" {
    run bash -c 'printf "a\n89\n2\nb\n45\n5\nc\n0\n8\n" | ./demo2'
    [ "$status" -eq 0 ]
    [[ "$output" == *"b has greatest area = 225.00"* ]]
}

@test "Test Case 3" {
    run bash -c 'printf "x\n9\n7\ny\n8.5\n4\nz\n5\n1\n" | ./demo2'
    [ "$status" -eq 0 ]
    [[ "$output" == *"x has greatest area = 63.00"* ]]
}

@test "Test Case 4" {
    run bash -c 'printf "ha\n2.5\n7.8\nna\n8.9\n8\nhaha\n7.5\n1.2\n" | ./demo2'
    [ "$status" -eq 0 ]
    [[ "$output" == *"na has greatest area = 71.20"* ]]
}

@test "Test Case 5" {
    run bash -c 'printf "tr\n3\n-5\ngr\n-5\n-2\nur\n-9\n-8\n" | ./demo2'
    [ "$status" -eq 0 ]
    [[ "$output" == *"ur has greatest area = 72.00"* ]]
}



