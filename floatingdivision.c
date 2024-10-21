#include <stdio.h>

float userinput();

int main(int argc, char const *argv[])
{
    // float a, b, c, d;

    // a = 12.4;
    // b = 10.0;
    // c = 12.4;
    // d = 10.0;

    // printf("The divsion is: %f", a / b / c / d); //< ----  first it will be divide a / b then the a / b result divide with c then it's result divide with d after that the finall result will show

    //-----------------------------------
    // using other method
    //----------------------------------

    // float a, b, c, d;

    // a = 12.4;
    // b = 10.0;
    // c = 12.4;
    // d = 10.0;

    // float result = a / (b * c * d);

    // printf("The divsion is: %f", result);

    // return 0;

    userinput();
}

float mul_div()
{
    float a, b, c, d;

    printf("Enter the first floating point number: ");
    scanf("%f", &a);

    printf("Enter the second floating point number: ");
    scanf("%f", &b);

    printf("Enter the third floating point number: ");
    scanf("%f", &c);

    printf("Enter the third floating point number: ");
    scanf("%f", &c);

    float result = a / (b * c * d);

    printf("The divsion is: %f", result);
}

/** 
float sub_div()
{
    float a, b, c, d;

    printf("Enter the first floating point number: ");
    scanf("%f", &a);

    printf("Enter the second floating point number: ");
    scanf("%f", &b);

    printf("Enter the third floating point number: ");
    scanf("%f", &c);

    printf("Enter the third floating point number: ");
    scanf("%f", &c);

    float result = a / (b - c - d);

    printf("The divsion is: %f", result);
}

float add_div()
{
    float a, b, c, d;

    printf("Enter the first floating point number: ");
    scanf("%f", &a);

    printf("Enter the second floating point number: ");
    scanf("%f", &b);

    printf("Enter the third floating point number: ");
    scanf("%f", &c);

    printf("Enter the third floating point number: ");
    scanf("%f", &c);

    float result = a / (b + c + d);

    printf("The divsion is: %f", result);
}
**/