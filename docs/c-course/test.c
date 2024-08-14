#include <stdio.h>

int main() {

    int numeros[5] = {3, 2, 3, 4, 5};

int *p = numeros; // p aponta para arr[0]

printf("\n%d ", p); //imprime o conteúde de arr[0]

    printf("\n%d ", &numeros[0]);

    /* BUBLLE SORT
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; // Array de exemplo
    int n = sizeof(arr)/sizeof(arr[0]);       // Número de elementos no array
    int i, j, temp;

    // Implementação do algoritmo Bubble Sort
    for (i = 0; i < n-1; i++) {
        int swapped = 0; // Flag para verificar se houve troca

        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Trocar os elementos se estiverem na ordem errada
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }

        // Se nenhum elemento foi trocado, a lista já está ordenada
        if (swapped == 0) {
            break;
        }
    }

    // Impressão do array ordenado
    printf("Array ordenado:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    #define TRUE 1
    #define FALSE 0
    int lista[] = {64, 34, 25, 12, 22, 11, 90};
    unsigned ordenada = FALSE; int aux;

    while (!ordenada){
        ordenada = TRUE; // Supõe que a lista está ordenada
        for (int i = 0; i < n - 1; i++){
            if (lista[i] > lista[i+1]){ // Compara elementos adjacentes 
                ordenada = FALSE;//Pelo menos um elemento esta fora de ordem 
                aux = lista[i];
                lista[i] = lista[i+1];
                lista[i+1] = aux;
            }  // final do if 
        } // final do for 
    } // final do while 

     // Impressão do array ordenado
    printf("Array ordenado:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

*/

    return 0;
}



/* #include <stdio.h>
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

     
*/

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


//return 0;
//}