#include <stdio.h>
#include <stdlib.h>

//Versão 1.1.0

void intro()
{
    printf("----------------------\n");
    printf("  Jogo da Advinhacao  \n");
    printf("----------------------\n\n");

    printf("Bem vindo Ao Jogo da Advinhacao\n\n");

    printf("Escolha um numero entre 0 e 10\n");
    printf("O computador ira escolher um numero\n");
    printf("se voce escolher o mesmo voce ganha\n");
    printf("senao voce perde, simples assim!!\n");
    printf("boa sorte e se divirta!\n\n");

    system("pause");
    system("cls");
    jogo();
}



void jogo()
{
  int n,x;
    srand(time(0)); //dertimina um seed inicial de acordo com a hora para sortiar o numero
    n=rand()%10;

    printf("------------------\n");
    printf("Jogo da Advinhacao\n");
    printf("------------------\n\n");

    printf("Advinhe o numero: \n");
    scanf("%i",&x);

    if(x==n)
    {
        printf("***Acertou***\n");
        printf("O numero era %i.\n\n\a",n);
    }
    else
    {
        printf("Errado!\n");
        printf("O numero era %i.\n\n\a",n);
    }
system("pause");
system("cls");
nov();
}

void nov()
{
int y; // variavel do continuar ou nao dependendo se o usuario escolher 1 ou 2
printf("------------------\n");
printf("Jogo da Advinhacao\n");
printf("------------------\n\n");
printf("Jogar novamente?\n");
printf("1 para sim e 2 para nao: \n");
scanf("%i",&y);

    switch(y){

    case 1:
        system("cls");
        jogo();
        break;

    case 2:
        printf("\nFinalizando...\n\n");
        system("exit");
        break;

      default:
        printf("Comando invalido, tente novamente.\n\n");
        system("pause");
        system("cls");
        nov();
        break;
}

}

int main()
{

    intro();
    system("pause");
    return 0;
}






