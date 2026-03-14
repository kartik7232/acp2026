#!/usr/bin/env bats

@test "demo1 runs successfully" {
    run ./demo1 <<< "3
10
50
30"
    [ "$status" -eq 0 ]
}
