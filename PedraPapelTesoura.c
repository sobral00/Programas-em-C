#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pontos_jogador=0, pontos_cpu=0;

int main()
{
    menu();
    return 0;
}

void menu()
{
    int escolha;

    printf ("-----------------\n");
    printf ("PedraPapelTesoura\n");
    printf ("-----------------\n\n");

    printf ("1 - Jogar\n");
    printf ("2 - Sair\n\n");
    printf ("Insira sua acao!\n");
    scanf("%i",&escolha);
    setbuf(stdin,NULL);

    if (escolha == 1)
    {
    system("cls");
    jogo();

    }else{
    if(escolha == 2)
    {
    printf("\nFinalizando...\n\n");
    exit(0);
    }else{
    printf("\nComando invalido, tente novamente!\n\n"); system ("pause"); system ("cls"); menu();
    }
    }

}

void jogo()
{
    int jogador, cpu;
    printf ("-----------------\n");
    printf ("PedraPapelTesoura\n");
    printf ("-----------------\n\n");
    printf ("%i Jogador X CPU %i\n\n", pontos_jogador, pontos_cpu);
    printf ("-----------------\n\n");
    printf ("1 - Pedra\n");
    printf ("2 - Papel\n");
    printf ("3 - Tesoura\n");
    printf ("0 - Menu\n");
    scanf ("%i", &jogador);
    setbuf(stdin,NULL);
    if (jogador == 0)
    {
        system("cls");
        menu();
    }
    if(jogador<0 || jogador>3)
    {
        printf("Jogada invalida!\n");
        printf("Insira uma jogada valida!\n");
        system("pause");
        system("cls");
        jogo();
    }
    srand(time(NULL));
    cpu = 1+ rand() % 3;
    switch(cpu)
    {
        case 1: printf ("CPU -> Pedra\n"); break;
        case 2: printf ("CPU -> Papel\n"); break;
        case 3: printf ("CPU -> Tesoura\n"); break;
    }
    if ((jogador == 1 && cpu==3) || (jogador == 2 && cpu == 1) || (jogador == 3 && cpu == 2))
        {
            printf("Voce venceu!\n");
            pontos_jogador++;
            system("pause");
            system("cls");
            jogo();
        }
    if (jogador == cpu)
        {
            printf ("Empate!\n");
            system("pause");
            system("cls");
            jogo();
        }
    else
        {
            printf ("CPU venceu!\n");
            pontos_cpu++;
            system("pause");
            system("cls");
            jogo();
        }
}
