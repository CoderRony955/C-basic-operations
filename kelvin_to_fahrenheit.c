/*
 _  ________ _ __      _______ _   _
| |/ /  ____| |\ \    / /_   _| \ | |
| ' /| |__  | | \ \  / /  | | |  \| |
|  < |  __| | |  \ \/ /   | | | . ` |
| . \| |____| |___\  /   _| |_| |\  |
|_|\_\______|______\/   |_____|_| \_|

To

 ______      _    _ _____  ______ _   _ _    _ ______ _____ _______
|  ____/\   | |  | |  __ \|  ____| \ | | |  | |  ____|_   _|__   __|
| |__ /  \  | |__| | |__) | |__  |  \| | |__| | |__    | |    | |
|  __/ /\ \ |  __  |  _  /|  __| | . ` |  __  |  __|   | |    | |
| | / ____ \| |  | | | \ \| |____| |\  | |  | | |____ _| |_   | |
|_|/_/    \_\_|  |_|_|  \_\______|_| \_|_|  |_|______|_____|  |_|

*/
#include <stdio.h>

/**
 * @brief      Converts Kelvin to Fahrenheit
 *
 * @param[in]  argc  The argument count
 * @param      argv  The argument vector
 *
 * @return     0 on success
 */
int main(int argc, char const *argv[])
{
    float K, F;
    printf("Enter the kelvin: ");
    scanf("%f", &K);
    F = (9 / 5 * (K - 273.15) + 32);

    printf("The fahrenheit of %f kelvin is %f", K, F);
    return 0;
}
