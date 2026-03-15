#include <stdio.h>
typedef struct {
    float length;
    float width;
    float area;
} Rectangle;

void input(int n, Rectangle rects[n]);
void calculate_area(int n, Rectangle rects[n]);
int findLargestArea(int n, Rectangle rects[n]);
void output(int largestIndex, Rectangle rects[]);

int main() {
    int n;
    printf("Enter number of rectangles:");
    scanf("%d", &n);
    Rectangle rects[n];
    input(n, rects);
    calculate_area(n, rects);    
    int largestIndex = findLargestArea(n, rects);
    output(largestIndex, rects);

    return 0;
}

void input(int n, Rectangle rects[n]){
    for(int i=1; i<=n ; i++){
        printf("This is about rectangle %d\n", i);
        printf("Enter length: ");
        scanf("%f", &rects[i].length);
        printf("Enter width: ");
        scanf("%f", &rects[i].width);
    }
}

void calculate_area(int n, Rectangle rects[n]){
    for(int i=1; i<=n; i++){
        rects[i].area = rects[i].length*rects[i].width;
        printf("Area of rectangle %d = %.2f\n",i+1, rects[i].area);
    }
}

int findLargestArea(int n, Rectangle rects[n]){
    int largestIndex=0;
    for(int i=1; i<=n; i++)
    {
        if(rects[i].area > rects[largestIndex].area)
        {
            largestIndex = i;
        }
    }
    return largestIndex;
}

void output(int largestIndex, Rectangle rects[])
{
    printf("Largest Rectangle in terms of area: %.2f",rects[largestIndex].area);
}