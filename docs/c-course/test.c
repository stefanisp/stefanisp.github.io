#include <stdio.h>

int main(void)
{
    //printf("Texto \e[4mabc");
    printf(tgetstr("us", NULL)); /* underline on */
printf("HELLO");
printf(tgetstr("ue", NULL)); /* underline off */

// printf("%d", rand());
// fflush(stdout);
// int teste;
// scanf("%d", &teste);
// //microsleep(10);
// printf("\r \r");
// fflush(stdout);
// //microsleep(190);
// scanf("%d", &teste);
// printf("%d\n", rand());
return 0;
}