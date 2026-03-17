#!/usr/bin/env bats

setup() {
    gcc demo3.c -o demo3
}

@test "Test Case 1" {
    run bash -c 'printf "3\n5\n6\n2\n3\n8\n9\n" | ./demo3'
    [ "$status" -eq 0 ]
    [[ "$output" == *"Largest Rectangle in terms of area: 72.00"* ]]
}


@test "Test Case 2" {
    run bash -c 'printf "3\n0\n2\n3.5\n6\n8.3\n7\n" | ./demo3'
    [ "$status" -eq 0 ]
    [[ "$output" == *"Largest Rectangle in terms of area: 58.10"* ]]
}

@test "Test Case 3" {
    run bash -c 'printf "3\n9\n7\n8.5\n4\n5\n1\n" | ./demo3'
    [ "$status" -eq 0 ]
    [[ "$output" == *"Largest Rectangle in terms of area: 63.00"* ]]
}

@test "Test Case 4" {
    run bash -c 'printf "3\n2.5\n7.8\n8.9\n8\n7.5\n1.2\n" | ./demo3'
    [ "$status" -eq 0 ]
    [[ "$output" == *"Largest Rectangle in terms of area: 71.20"* ]]
}

@test "Test Case 5" {
    run bash -c 'printf "3\n3\n5\n5\n2\n9\n8\n" | ./demo3'
    [ "$status" -eq 0 ]
    [[ "$output" == *"Largest Rectangle in terms of area: 72.00"* ]]
}



