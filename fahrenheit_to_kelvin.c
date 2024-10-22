/*
 ______      _    _ _____  ______ _   _ _    _ ______ _____ _______
|  ____/\   | |  | |  __ \|  ____| \ | | |  | |  ____|_   _|__   __|
| |__ /  \  | |__| | |__) | |__  |  \| | |__| | |__    | |    | |
|  __/ /\ \ |  __  |  _  /|  __| | . ` |  __  |  __|   | |    | |
| | / ____ \| |  | | | \ \| |____| |\  | |  | | |____ _| |_   | |
|_|/_/    \_\_|  |_|_|  \_\______|_| \_|_|  |_|______|_____|  |_|

To

 _  ________ _ __      _______ _   _
| |/ /  ____| |\ \    / /_   _| \ | |
| ' /| |__  | | \ \  / /  | | |  \| |
|  < |  __| | |  \ \/ /   | | | . ` |
| . \| |____| |___\  /   _| |_| |\  |
|_|\_\______|______\/   |_____|_| \_|
*/
#include <stdio.h>

/**
 * @brief      Converts Fahrenheit to Kelvin
 *
 * @param[in]  argc  The argument count
 * @param      argv  The argument vector
 *
 * @return     0 on success
 */
int main(int argc, char const *argv[])
{
    float F, K;
    printf("Enter the Fahrenheit: ");
    scanf("%f", &F);

    K = (5 / 9 * (F - 32) + 273.15);

    printf("The Kelvin of %f Fahrenheit is %f", F, K);
    return 0;
}
