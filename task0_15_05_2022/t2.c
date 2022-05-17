// area and perimeter of square,rectangle,circle,right angled traingle//
#include <stdio.h>
float area_of_square(float side)
{
    float area = side * side;
    printf("\narea of square=%f", area);
}
float perimeter_of_square(float side)
{
    float perimeter = 4 * side;
    printf("\nperimeter of square=%f", perimeter);
}
float area_of_circle(float radius)
{
    float area = 3.14 * radius * radius;
    printf("\narea of circle=%f", area);
}
float perimeter_of_circle(float radius)
{
    float perimeter = 2 * 3.14 * radius;
    printf("\nperimeter of circle=%f", perimeter);
}
float area_of_rectangle(float radius)
{
    float area = 3.14 * radius * radius;
    printf("\narea of rectangle=%f", area);
}
float perimeter_of_rectangle(float radius)
{
    float perimeter = 2 * 3.14 * radius;
    printf("\narea of rectangle=%f", perimeter);
}
float area_of_rightangle_triangle(float base, int height)
{
    float area = 0.5 * base * height;
    printf("\narea of right angled traingle=%f", area);
}
float perimeter_of_rightangle_traingle(float base, int height, float hypotenuse)
{
    float perimeter = base + height + hypotenuse;
    printf("\nperimeter of right angled traingle=%f", perimeter);
}
void main()
{
    float area, perimeter, side = 4, radius = 5.5, base = 7, height = 9, hypotenuse = 6.6;
    area_of_square(side);
    perimeter_of_square(side);
    area_of_circle(radius);
    perimeter_of_circle(radius);
    area_of_rectangle(radius);
    perimeter_of_rectangle(radius);
    area_of_rightangle_triangle(base, height);
    perimeter_of_rightangle_traingle(base, height, hypotenuse);
    {
        printf("\n");
    }
}