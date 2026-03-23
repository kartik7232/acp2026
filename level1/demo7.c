// Write a C program to compare two strings using user-defined functions. 
// The program should return:
// •	0 if both strings are equal
// •	1 if the first string is lexicographically greater
// •	-1 if the second string is lexicographically greater
// Function prototype:
// void inputStrings(char str1[], char str2[]);
// int compareStrings(char str1[], char str2[]);
// void output(int result);

#include <stdio.h>
#include <string.h>

void inputStrings(char str1[], char str2[]);
int compareStrings(char str1[], char str2[]);
void output(int result);
int main() {
    char str1[50], str2[50];

    inputStrings(str1, str2);
    int result = compareStrings(str1, str2);
    output(result);
    return 0;
}

void inputStrings(char str1[], char str2[])
{
    printf("Enter string 1: ");
    scanf("%s", str1);
    printf("Enter string 2: ");
    scanf("%s", str2);
}

int compareStrings(char str1[], char str2[])
{
    int cmp = strcmp(str1, str2);
    
    if (cmp == 0){
        return 0;
    }
    else if(cmp>0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

void output(int result){
    printf("result: %d", result);
}