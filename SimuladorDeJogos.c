
#include <stdio.h>>
#include <stdlib.h>

/*9)Ler o nome de 2 times e o número de gols marcados na partida (para cada time). Escrever o
/nome do vencedor. Caso não haja vencedor deverá ser impressa a palavra EMPATE.
*/

int main()
{
    char time1[15],time2[15];
    int gol1,gol2;

    printf("-------------------------------\n");
    printf("|     Simulador de Jogos      |\n");
    printf("-------------------------------\n\n");
    printf("Insira o nome do primeiro time: \n");
    gets(&time1);
    printf("Insira o nome do segundo time: \n");
    gets(&time2);
    srand(time(NULL));
    gol1 = (rand() % 5);
    printf("O jogo esta rolando!\n");
    printf(".\n");
    printf("..\n");
    printf("...\n");
    printf("E o resultado foi...\n");
    system("pause");
    srand(time(NULL));
    gol2 = (rand() % 5);
    system("cls");

    printf("-------------------------------\n");
    printf("|     Simulador de Jogos      |\n");
    printf("-------------------------------\n\n");

    if(gol1==gol2)
    {
        printf("O jogo foi empate!\n%s %i X %i %s.\n",time1,gol1,gol2,time2);
    }else{
    if(gol1>gol2)
    {
        printf("O Time do %s venceu!\n%s %i X %i %s\n.",time1,time1,gol1,gol2,time2);
    }else{
        printf("O Time do %s venceu!\n%s %i X %i %s.\n",time2,time1,gol1,gol2,time2);
    }
    }
    system("pause");
    return 0;
}
