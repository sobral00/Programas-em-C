#include <stdio.h>
#include <stdlib.h>


void calc(){ //Cria a função calculo do IMC

 float alt,alt1,peso,result; // Declaração das variaveis altura,altura1 que é a altura elevada ao quadrado, so peso e o resultado do calculo

 printf("\nInsira sua altura: \n"); // pede para o usuario inserir a altura
    scanf("%f",&alt); // liga a entrada do usuario a variavel alt
    printf("Insira seu peso: \n"); // pede para o usuario inserir o peso
    scanf("%f",&peso); // liga a entrada do usuario a variavel peso
    alt1 = alt*alt; // eleva a altura ao quadrado
    result = peso/alt1; // calcula o IMC
    printf("Seu IMC e %.2f\n",result); //Apresenta o resultado do IMC do usuario
    if(result < 18.5) // declara q se o resultado do IMC for menor que 18.5  ele ira mostrar a mensagem abaixo
    {
        printf("Voce esta magro.\n\n");
    }

    else if(result>18.5,result<24.9) // declara q se o resultado do IMC for maior que 18.5 ou menos do que 24.9  ele ira mostrar a mensagem abaixo
    {
        printf("Voce esta em seu peso ideal.\n\n");
    }

    else if(result>25,result<29.9) // declara q se o resultado do IMC for maior que 25 ou menos do que 29.9  ele ira mostrar a mensagem abaixo
    {
        printf("Voce esta com sobrepeso.\n\n");
    }

    else if(result>30,result<39.9) // declara q se o resultado do IMC for maior que 30 ou menos do que 39.9  ele ira mostrar a mensagem abaixo
    {
        printf("Voce esta obeso.\n\n");
    }

    else if(result > 40 ) // declara q se o resultado do IMC for maior que 40  ele ira mostrar a mensagem abaixo
    {
        printf("Voce esta com obesidade morbida.\n\n");
    }
    system("pause"); // pausa o programa nesse estado
    system("cls"); // limpa a tela
    menu(); // volta a função menu

}

void menu() // Função menu
{
int x; //declaração da variavel x

    printf("---------------\n"); //meramente decorativo
    printf("Calculadora IMC\n"); //meramente decorativo
    printf("---------------\n\n");//meramente decorativo

    printf("1 - Calcular IMC\n"); // lista de ações que o usuario pode escolher
    printf("2 - Sair\n\n");
    printf("Insira sua acao: \n"); // entrada da ação do usuario que usara a variavel x
    scanf("%i",&x); // atribui a entrada do usuario a variavel x

switch (x) //o que vai acontecer dependendo da entrada da variavel x
    {

    case 1: // caso escolha 1 ele ira iniciar a função calc
        calc();
        break; //termina esse case

    case 2: // caso escolha 2 fecha o programa
        printf("\nFinalizando...\n\n");
        system("exit");
        break;

    default: // caso o usuario escolha algo diferente da lista mostra mensagem abaixo
        printf("Comando invalido, tente novamente.\n\n");
        system("pause");
        system("cls"); //apaga o inserido
        menu(); //volta ao menu
        break;


    }
}

int main() //função principal
{

    menu(); //chama a função menu

    system("pause");
    return 0;

}
