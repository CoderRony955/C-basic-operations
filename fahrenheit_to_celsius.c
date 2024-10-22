/*
 ______      _    _ _____  ______ _   _ _    _ ______ _____ _______
|  ____/\   | |  | |  __ \|  ____| \ | | |  | |  ____|_   _|__   __|
| |__ /  \  | |__| | |__) | |__  |  \| | |__| | |__    | |    | |
|  __/ /\ \ |  __  |  _  /|  __| | . ` |  __  |  __|   | |    | |
| | / ____ \| |  | | | \ \| |____| |\  | |  | | |____ _| |_   | |
|_|/_/    \_\_|  |_|_|  \_\______|_| \_|_|  |_|______|_____|  |_|

To

  _____ ______ _       _____ _____ _    _  _____
 / ____|  ____| |     / ____|_   _| |  | |/ ____|
| |    | |__  | |    | (___   | | | |  | | (___
| |    |  __| | |     \___ \  | | | |  | |\___ \
| |____| |____| |____ ____) |_| |_| |__| |____) |
 \_____|______|______|_____/|_____|\____/|_____/

*/

#include <stdio.h>

/**
 * @brief      Converts Fahrenheit to Celsius
 *
 * @param[in]  argc  The argument count
 * @param      argv  The argument vector
 *
 * @return     0 on success
 */
int main(int argc, char const *argv[])
{
    float F, C;

    printf("Enter the Fahrenheit: ");
    scanf("%f", &F);

    C = (F - 32) * 5 / 9;
    printf("The Celsius of %f Fahrenheit is %f°", F, C);
    return 0;
}
