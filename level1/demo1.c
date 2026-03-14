#include <stdio.h> 


void input(int n, float arr[]) 
{ 
    for(int i=0 ; i<n ; i++)
    { 
        printf("Enter the element %d: ", i); 
        scanf("%f",&arr[i]); 
    } 
} 


int find_max_index(int n, float arr[]) 
{ 
    int max_index =0; 
    for(int i = 1; i<n ; i++) 
    { 
        if(arr[i] > arr[max_index]) 
        { 
            max_index = i; 
        }
 } 
 printf("Maximum value of element is %.2f and it's index is %d", arr[max_index], max_index); 
 return max_index; 
} 


void output(int n, float arr[]) 
{ 
    printf("Array of elements: \n");
    for (int i=0; i<n ; i++)
    { 
        printf("%.2f ", arr[i]); 
    } 
    printf("\n"); 
    } 


int main() 
    { 
        int n; 
        printf("Enter n:"); 
        scanf("%d",&n); 
        float arr[n]; 
        input(n, arr); 
        output(n, arr); 
        find_max_index(n, arr); 
        return 0; 
    }