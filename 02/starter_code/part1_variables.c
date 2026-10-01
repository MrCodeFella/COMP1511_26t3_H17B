// part1_variables
//
// This program was written by Conrad Vernon (z5478184),
// on 24/09/26
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14

int main(void) {
    // A = pi*r^2
    // 1. Declare the variables
    double radius;
    // double pi;
    double area;
    
    // 2. Initalise the variables
    // pi = 3.14;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    
    // 3. Calculate the area of the circle
    area = PI * (radius * radius);
    
    // 4. Print the result
    printf("the radius was %.2lf and the area is %.2lf\n", radius, area);

    return 0;
}
