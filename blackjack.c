#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sj = 0;  // score jogador
    int so = 0;  // score oponente
    int opcao = 0;
    int stand_jogador = 0;
    int stand_oponente = 0;
    
    srand(time(NULL));

    printf("=========BLACKJACK==========\n");
    printf("\nTente tirar 21 na carta ou parar na melhor possível, passar de 21 ou tirar menos que o oponente.\nO oponente sempre estará um passo a frente!\n");
    printf("\n=======JOGO INICIADO========\n\n");

    // Cartas iniciais
    int cj = rand() % 13 + 1;
    int vj = (cj > 10) ? 10 : (cj == 1 ? 11 : cj);
    sj = vj;

    int co = rand() % 13 + 1;
    int vo = (co > 10) ? 10 : (co == 1 ? 11 : co);
    so = vo;

    // Loop do jogo
    while (sj < 21 && so < 21) {
        printf("============================\n");
        printf("JOGADOR  | %d\n", sj);
        printf("OPONENTE | %d\n", so);
        printf("============================\n");

        if (!stand_jogador) {
            printf("1 - HIT\n");
            printf("2 - STAND\n");
            scanf("%d", &opcao);

            switch (opcao) {
                case 1:
                    printf("Voce decidiu tirar mais uma carta!\n\n");
                    cj = rand() % 13 + 1;
                    vj = (cj > 10) ? 10 : (cj == 1 ? 11 : cj);
                    sj += vj;
                    break;
                case 2:
                    printf("Voce decidiu parar. O oponente continua.\n\n");
                    stand_jogador = 1;
                    break;
                default:
                    printf("Opcao invalida, tente novamente.\n");
            }
        }

        // Oponente joga (tira cartas enquanto score < 17)
        if (!stand_oponente && so < 17) {
            co = rand() % 13 + 1;
            vo = (co > 10) ? 10 : (co == 1 ? 11 : co);
            so += vo;
            printf("Oponente tirou uma carta!\n\n");
        } else if (so >= 17) {
            stand_oponente = 1;
        }

        if (sj > 21 || so > 21) {
            break;
        }
    }

    printf("============================\n");
    printf("JOGADOR  | %d\n", sj);
    printf("OPONENTE | %d\n", so);
    printf("============================\n\n");

    if (sj > 21) {
        printf("JOGADOR ESTOUROU! VITÓRIA DO OPONENTE!\n");
    }
    else if (so > 21) {
        printf("OPONENTE ESTOUROU! VITÓRIA DO JOGADOR!\n");
    }
    else if (sj > so) {
        printf("VITÓRIA DO JOGADOR!\n");
    }
    else if (so > sj) {
        printf("VITÓRIA DO OPONENTE!\n");
    }
    else {
        printf("EMPATE!\n");
    }

    return 0;
}