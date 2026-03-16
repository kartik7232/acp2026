#include <stdio.h>

void inputTemperatures(int n, float temps[n]);
float findHighest(int n, float temps[n]);
float findLowest(int n, float temps[n]);
void output(float max, float min);

int main() {
    int n=7;
    float temps[n]; 
    inputTemperatures(n, temps);
    float max=findHighest(n, temps);
    float min=findLowest(n, temps);
    output(max, min);   
    return 0;
}

void inputTemperatures(int n, float temps[])
{
    for(int i=0; i<n; i++){
        printf("Enter day %d temperature: ",i+1);
        scanf("%f", &temps[i]);
    }
}

float findHighest(int n, float temps[]){
    float max = temps[0];
    for(int i=0; i<n; i++)
    {
        if(temps[i+1] > max){
            max=temps[i+1];
        }
    }
    return max;
}

float findLowest(int n, float temps[])
{
    float min = temps[0];
    for(int i=0; i<n; i++)
    {
        if(temps[i]< min)
        {
            min = temps[i];
        }
    }
    return min;
}

void output(float max, float min){
    printf("Maximum temperature: %.2f\n", max);
    printf("Minimum temperature: %.2f", min);
}
