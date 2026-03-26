#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i = 1;
    int sj = 0;
    int so = 0;
    int opcao = 0;
    srand(time(NULL));

    printf("=========BLACKJACK==========\n");
    printf("\nTente tirar 21 na carta ou parar na melhor possível, passar de 21 ou tirar menos que o oponente. \nO oponente sempre estará um passo a frente!\n");
    printf("\n=======JOGO INICIADO========\n\n");

    for (int i > 0; sj < 21 && so < 21; i++){
        int stand = 0;
        
        if (int stand = 1){
            int co = rand() % 13 + 1;
            int vo = (co > 10) ? 10 : (co == 1 ? 11: co);
            so = vo;
            printf("============================\n");
            printf("JOGADOR | %d\n", sj);
            printf("OPONENTE| %d\n", so);
            printf("============================\n");

            printf("1 - HIT\n");
            printf("2 - STAND\n");
            scanf("%d", &opcao);

            switch (opcao) {
                case 1:
                    printf("Voce decidiu tirar mais uma carta!\n\n");
                    int stand = 0;
                    break;
                case 2:
                    printf("Voce decidiu parar. O oponente continua.\n\n");
                    int stand = 1;
                    break;
                default:
                    printf("Opcao invalida, tente novamente.\n");
            }
        }
        int cj = rand() % 13 + 1;
        int vj = (cj > 10) ? 10 : (cj == 1 ? 11: cj);
        sj += vj;
        int co = rand() % 13 + 1;
        int vo = (co > 10) ? 10 : (co == 1 ? 11: co);
        so = vo;
        printf("============================\n");
        printf("JOGADOR | %d\n", sj);
        printf("OPONENTE| %d\n", so);
        printf("============================\n");

        printf("1 - HIT\n");
        printf("2 - STAND\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Voce decidiu tirar mais uma carta!\n\n");
                int stand = 0;
                break;
            case 2:
                printf("Voce decidiu parar. O oponente continua.\n\n");
                int stand = 1;
                break;
            default:
                printf("Opcao invalida, tente novamente.\n");
        }

        printf("\n");


    }

    printf("============================\n");
    printf("JOGADOR | %d\n", sj);
    printf("OPONENTE| %d\n", so);
    printf("============================\n\n");

if (sj > 21) {
    printf("JOGADOR ESTOUROU! VITÓRIA DO OPONENTE!");
}
else if (so > 21) {
    printf("OPONENTE ESTOUROU! VITÓRIA DO JOGADOR!");
}
else if (sj > so) {
    printf("VITÓRIA DO JOGADOR!");
}
else if (so > sj) {
    printf("VITÓRIA DO OPONENTE!");
}
else {
    printf("EMPATE!");
}

    return 0;
}
