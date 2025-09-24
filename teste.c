#include <stdio.h>

    int main(){
        char cidade1[50], cidade2[50];
        float populacao1 = 10000, populacao2 = 20000;

        printf("Entrada:");
        scanf("%s", cidade1);

        printf("Entrada2:");
        scanf("%s", cidade2);

    printf("Comparação de cartas\n");
if(populacao1 > populacao2){
    printf("A cidade com a maior população é: %s\n", cidade1);
} else{
    printf("A cidade com a maior população é: %s\n", cidade2);
}

}