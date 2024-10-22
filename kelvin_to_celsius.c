/*
 _  ________ _ __      _______ _   _
| |/ /  ____| |\ \    / /_   _| \ | |
| ' /| |__  | | \ \  / /  | | |  \| |
|  < |  __| | |  \ \/ /   | | | . ` |
| . \| |____| |___\  /   _| |_| |\  |
|_|\_\______|______\/   |_____|_| \_|

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
 * @brief      Converts Kelvin to Celsius
 *
 * @param[in]  argc  The argument count
 * @param      argv  The argument vector
 *
 * @return     0 on success
 */
int main(int argc, char const *argv[])
{
    float K, C;
    printf("Enter the Kelvin: ");
    scanf("%f", &K);

    C = K - 273.15;

    printf("The Celsius of %f Kelvin is %f", K, C);
    return 0;
}
