/*
  _____ ______ _       _____ _____ _    _  _____
 / ____|  ____| |     / ____|_   _| |  | |/ ____|
| |    | |__  | |    | (___   | | | |  | | (___
| |    |  __| | |     \___ \  | | | |  | |\___ \
| |____| |____| |____ ____) |_| |_| |__| |____) |
 \_____|______|______|_____/|_____|\____/|_____/

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
 * @brief      Converts Celsius to Kelvin
 *
 * @param[in]  argc  The argument count
 * @param      argv  The argument vector
 *
 * @return     0 on success
 */
int main(int argc, char const *argv[])
{
  float C, K;
  printf("Enter the Celsius: ");
  scanf("%f", &C);

  K = C + 273.15;

  printf("The Kelvin of %f is %f", C, K);

  return 0;
}
