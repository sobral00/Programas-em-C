#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int lista[5],x;

void inserir(){
    valor();
    printf("Insira um valor nesta posicao: ");
    scanf("%d",&lista[x]);
    system ("pause");
    system ("cls");
    menu();
}
void valor(){
    printf("Insira a posicao na lista de 5 vagas: ");
    scanf("%d",&x);
    x-=1;
}

void remover(){
    valor();
    lista[x]=0;
    system ("pause");
    system ("cls");
    menu();
}

void exibir(){
    printf("Lista de valores:\n");
    printf("1º - %d\n",lista[0]);
    printf("2º - %d\n",lista[1]);
    printf("3º - %d\n",lista[2]);
    printf("4º - %d\n",lista[3]);
    printf("5º - %d\n",lista[4]);
    system ("pause");
    system ("cls");
    menu();
}

void menu(){
    printf("Teste de Estrutura do tipo lista.\n");
    printf("\t1- Inserir Valor\n");
    printf("\t2- Remover valor\n");
    printf("\t3- Exibir Lista\n");
    printf("\t4- Sair\n");
    printf("Operacao: ");
    scanf ("%d", &x);
    switch(x){
    case 1:
        inserir();
        break;
    case 2:
        remover();
        break;
    case 3:
        exibir();
        break;
    case 4:
        system("exit");
        printf("\nFinalizando...\n\n");
        break;
    default:
        printf("\nComando invalido, tente novamente!\n\n");
        system ("pause");
        system ("cls");
        menu();
        break;
    }
}

void main(){
    setlocale(LC_ALL, "Portuguese");
    menu();
}
