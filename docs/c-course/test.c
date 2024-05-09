#include <stdio.h>

int main(void)
{

    char frase[20];
    setbuf(stdin, NULL);
printf("Digite uma frase:");
gets(frase);
    
    for(int i=0; i< sizeof frase; i++){
        printf("%d ", i);
    }

printf("%s ", frase);
    

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