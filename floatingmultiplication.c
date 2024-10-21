#include <stdio.h>

int main(int argc, char const *argv[])
{
    // float a, b, c, d;
    // a = 12.2;
    // b = 10.0;
    // c = 12.2;
    // d = 10.0;
    // float mul = a * b * c * d;
    // printf("The mulitiplication of floating point numbers are: %f ", mul);

    int a, b, c, d;

    a = 1221;
    b = 3455;
    c = 1221;
    d = 3455;

    float fa, fb, fc;

    fa = 67.3 * a * b * c * d;
    fb = 23.9 * fa * a * b * c * d;
    fc = 76.5 * fa * fb * a * b * c * d;

    float total = fa * fb * fc;

    // printf("The total of fa is: %f\n", fa);
    // printf("The total of fb is: %f", fb);

    printf("The total of fa, fb, fc is:  %f", total);

    return 0;
}

//---------------------------------------------------------------------------------------------------------------
// Take user input for 3 times for floating numbers and then the calculate the multiplication of the given numbers
//---------------------------------------------------------------------------------------------------------------

/**
 * @brief Take user input for 3 times for interger and floating point numbers and then calculate the multiplication of the given numbers
 *
 * @return float
 */
int userinput()
{
    int a, b, c, d;

    printf("Enter the first interger number: ");
    scanf("%d", &a);

    printf("Enter the second interger number: ");
    scanf("%d", &b);

    printf("Enter the third interger number: ");
    scanf("%d", &c);

    float fa, fb, fc;

    printf("Now enter the first floating point number: ");
    scanf("%f", &fa);

    printf("Enter the second floating point number: ");
    scanf("%f", &fb);

    printf("Enter the third floating point number: ");
    scanf("%f", &fc);

    float mul = a * b * c * fa * fb * fc;

    printf("The mulitiplication of floating point numbers are: %f ", mul);
}



/**
int inputmul(){

    float a, b, c;

    printf("Enter the first floating point number: ");
    scanf("%f", &a);

    printf("Enter the second floating point number: ");
    scanf("%f", &b);

    printf("Enter the third floating point number: ");
    scanf("%f", &c);

    float mul = a * b * c;

    printf("The mulitiplication of floating point numbers are: %f ", mul);

    return 0;

}
**/