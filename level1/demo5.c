// Write a program to swap two integer arrays.  
// Function prototype:
// void read_array(int n, int arr[]);
// void print_array(int n, int arr[]);
// void swap_array(int n, int a[n], int b[n]);
#include <stdio.h>
void read_array(int n, int arr[]);
void print_array(int n, int arr[]);
void swap_array(int n, int a[n], int b[n]);
int main() {
    int n;
    
    printf("Enter size of arrays: ");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter elements of first array:\n");
    read_array(n, a);

    printf("Enter elements of second array:\n");
    read_array(n, b);
    
    printf("Before swapping:\n");
    printf("Array 1: ");
    print_array(n, a);
    printf("Array 2: ");
    print_array(n, b);

    swap_array(n, a, b);
    
    printf("After swapping:\n");
    printf("Array 1: ");
    print_array(n, a);
    printf("Array 2: ");
    print_array(n, b);
    
    return 0;
}
void read_array(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}
void print_array(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap_array(int n, int a[n], int b[n]) {
    for (int i = 0; i < n; i++) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}