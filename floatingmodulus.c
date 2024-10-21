// In C, the modulus operator (%) is only defined for integral types (char, short, int, long, etc.). It is not defined for floating-point types (float, double, etc.). So I'm using 'fmod()' function from math.h library which allow us to calculate a modulus for floating points numbers.

#include <stdio.h>
#include <math.h>

float mod_add();

int main(int argc, char const *argv[])
{
    // float a, b;

    // a = 12.3;
    // b = 24.5;

    // float result = fmod(a, b);

    // printf("The modulus of floating point numbers are: %f ", result);

    // return 0;

    mod_add();
}

/**
float userinput()
{
    float a, b, c, d;

    printf("Enter the first floating point number: ");
    scanf("%f", &a);

    printf("Enter the second floating point number: ");
    scanf("%f", &b);

    printf("Enter the third floating point number: ");
    scanf("%f", &c);

    printf("Enter the fourth floating point number: ");
    scanf("%f", &d);

    float result = fmod(a, (b * c * d));

    printf("The modulus of floating point numbers are: %f ", result);
}
**/

/**
 * @brief This function take 7 inputs (4 float, 3 int) and calculate the modulus of the given floating point numbers and then print the output.
 *
 * @param void
 * @return float
 */
float mod_add()
{
    float a, b, c, d;
    int ia, ib, ic;

    printf("Enter the first floating point number: ");
    scanf("%f", &a);

    printf("Enter the second floating point number: ");
    scanf("%f", &b);

    printf("Enter the third floating point number: ");
    scanf("%f", &c);

    printf("Enter the fourth floating point number: ");
    scanf("%f", &d);

    //--userinput for int

    printf("Enter the first integer number: ");
    scanf("%d", &ia);

    printf("Enter the second integer number: ");
    scanf("%d", &ib);

    printf("Enter the third integer number: ");
    scanf("%d", &ic);

    float cal = fmod(a, b * (c * d / ia + ib - ic)); 

    printf("The modulus of floating point numbers are: %f ", cal);
}