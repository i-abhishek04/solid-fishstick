#include <stdio.h>
#include<math.h>
#define pi 3.1415926535

float distance(int x1, int y1, int x2, int y2) //distance between two points
{
    return sqrt(pow((x2-x1),2)+pow((y2-y1), 2));
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*fptr)(int, int, int, int))
{
    float rad;
    rad = (*fptr)(x1, y1, x2, y2); // function pointer call
    float area= pi * rad * rad;
    return area;
}

int main()
{
    int x1, y1, x2, y2;
    float (*fptr)(int, int, int, int); // function pointer declaration
    fptr = &distance; // definition of function pointer
    printf("Enter coordinates of first point ");
    scanf("%d %d", &x1, &y1);
    printf("Enter coordinates of second point ");
    scanf("%d %d", &x2, &y2);
    float area = areaOfCircle(x1, y1, x2, y2, fptr);
    printf("The area of the circle of radius %f is %f", (*fptr)(x1, y1, x2, y2), area );
    return 0;
}