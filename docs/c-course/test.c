#include <stdio.h>
#include <string.h>

int main(void)
{
    char palavra_1[20] = "Bons ";
    char palavra_2[20] = "estudos!";

     strcat(palavra_1, palavra_2); //retornará zero
    
    printf("palavra_1: %s", palavra_1);

/*
    char string_1[10] = "Bom dia!";
    char string_2[10];
    string_2 = string_1;
    
    printf("%c", string_2[7]);
*/


    //printf("Texto \e[4mabc");
    //printf(tgetstr("us", NULL)); /* underline on */
    //printf("HELLO");
    //printf(tgetstr("ue", NULL)); /* underline off */

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