#include <stdio.h>
#include <string.h>

enum DiaDaSemana {
    DOMINGO,   
    SEGUNDA,   
    TERCA,     
    QUARTA,    
    QUINTA,    
    SEXTA,     
    SÁBADO     
};
#define ABC "ABCDE!"
#define QUADRADO(x) ((x) * (x))
#define QUADRADO2(x) x * x

int main(void)
{

    char* palavra[100];
    char* palavra2[] = "palavra 2";

    #define MAX_VALUE 100
    const char* abc_2 = "abcde!";

    enum DiaDaSemana hoje = 0;
    enum {AZUL, VERMELHO, BRANCO, PRETO} cores;

    printf("define = %s.\n", ABC);
    printf("define = %d.\n", QUADRADO2(2));

    printf("const = %s.\n", abc_2);

    cores = VERMELHO;
    if (cores == VERMELHO) {
        printf("Hoje é quinta-feira.\n");
    } else {
        printf("Hoje não é quinta-feira.\n");
    }

     


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