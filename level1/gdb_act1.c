GNU gdb (GDB) 16.3
Copyright (C) 2024 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-w64-mingw32".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<https://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from act1...
(gdb) break main
Breakpoint 1 at 0x401477: file act1.c, line 8.
(gdb) ne  run
Starting program: D:\OneDrive\Desktop\acp2026\level1\act1.exe 
[New Thread 24856.0x4e8c]

Thread 1 hit Breakpoint 1, 0x00401477 in main () at act1.c:8
8	int main() {
(gdb) next
9	    int n=7;
(gdb) next
10	    float temps[n]; 
(gdb) next
11	    inputTemperatures(n, temps);
(gdb) nex   10
(gdb) next
12	    float max=findHighest(n, temps);
(gdb) next
13	    float min=findLowest(n, temps);
(gdb) next
14	    output(max, min);   
(gdb) next
15	    return 0;
(gdb) next
16	}
