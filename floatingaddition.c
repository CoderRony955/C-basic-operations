#include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     float a = 12.2;
//     float b = 10.0;
//     float sum = a + b;
//     printf("The sum of two floating point numbers are: %f ", sum);

//     return 0;
// }


int main(int argc, char const *argv[])
{
    int a, b, c;
    a = 12;
    b = 24;
    c = 36;

    float fa, fb;
    fa = a + 23.4 + c;
    fb = b + 56.3 + a + c;

    float add = fa + fb;

    // printf("The sum of three numbers including integers and floating points: %f\n", fa); <--- show the output of fa variable

    // printf("The sum of three numbers including integers and floating points: %f", fb); <------ show the output of fb variable
    printf("The sum of floating numebrs digits: %f", add); //<----- show the output of add variable which show the sum of fa and  fb variable

    return 0;
}

//---------------------------------------------------------------------------------------------------------------
// Take user input for performing same operation
//---------------------------------------------------------------------------------------------------------------

/** 
int userinput(){
    int a, b, c;
    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    printf("Enter the third integer: ");
    scanf("%d", &c);

    float fa, fb;
    printf("Now enter the first floating point number: ");
    scanf("%f", &fa);

    printf("Enter the second floating point number: ");
    scanf("%f", &fb);

    float add = a + b + c + fa + fb;

    printf("The sum of all the numbers are: %f", add);
}
**/

/**
int userinputadd()
{

    float a, b, c;

    printf("Enter the first floating point number: ");
    scanf("%f", &a);

    printf("Enter the second floating point number: ");
    scanf("%f", &b);

    printf("Enter the third floating point number: ");
    scanf("%f", &c);

    float add = a + b + c;

    printf("The sum of floating point numbers are: %f ", add);
}
**/