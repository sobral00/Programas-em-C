#include <stdio.h>
#include <locale.h>

/* Date: 04/10/2019
Author: Yuri S. S. de Oliveira
Version:1.0.0.
*/

void main(){

setlocale(LC_ALL, "Portuguese");
char nome[15];
int pontos=0,x;

printf("Qual o seu nome jovem bruxo?\n");
gets(nome);
system("cls");
printf("Muito bem %s, seja bem vindo(a) a Hogwarts.\nIrei fazer algumas perguntas a voc� e descobriremos a qual casa voc� pertencer�!\n",nome);
printf("Voc� ser� escolhido para uma delas: Grifinoria, Corvinal, Sonserina ou Lufa Lufa.\nVamos come�ar ent�o!\n\n");
printf("Voc� Acabou de entrar em seu quarto e encontra um fantasma urrador flutuando em cima de sua cama, o que voc� faz?\n");
printf("1-Voc� percebe que ele n�o est� urrando e sim chorando, voc� se aproxima e procura saber o que aconteceu.\n");
printf("2-Voc� tenta lan�ar um feiti�o no fantasma assim que o percebe na tentativa de se livrar dele.\n");
printf("3-Voc� pergunta ao fantasma o que ele est� fazendo em seu quarto, antes de tomar alguma a��o.\n");
printf("4-Voc� senta ao lado dele, solta um sorriso para tentar acalma-lo e ent�o pergunta o que houve.\n");
printf("Sua Resposta:");
scanf("%d",&x);
while(x<1||x>4){
printf("Escolha entre uma das quatro op��es!\n");
scanf("%d",&x);
}
if(x==1){
pontos+=1;
}else{
    if(x==2){
    pontos+=2;
    }else{
        if(x==3){
        pontos+=3;
        }else{
            if(x==4){
            pontos+=4;
            }
        }
    }
}
system("cls"); //apaga a tela
printf("O fantasma vai embora e no lugar onde ele estava voc� encontra uma foto que retrata tr�s pessoas juntas e felizes, o que voc� faz?\n");
printf("1-Voc� procura algo na foto que indique quem s�o aquelas pessoas ou onde ela foi tirada.\n");
printf("2-Voc� apenas rasga e joga a foto fora, aquilo n�o te interessa.\n");
printf("3-Voc� chama pelo fantasma para perguntar se a foto � dele?.\n");
printf("4-Voc� guarda a foto em um lugar segura para devolver assim que encontrar com o fantasma novamente.\n");
printf("Sua Resposta:");
scanf("%d",&x);
while(x<1||x>4){
printf("Escolha entre uma das quatro op��es!\n");
scanf("%d",&x);
}
if(x==1){
pontos+=1;
}else{
    if(x==2){
    pontos+=2;
    }else{
        if(x==3){
        pontos+=3;
        }else{
            if(x==4){
            pontos+=4;
            }
        }
    }
}
system("cls"); //apaga a tela
printf("Depois de alguns dias voc� esculta por acidente uma conversa no Caldeir�o Furado e descobre que aquele fantasma\n");
printf("era o fantasma de um garoto que foi assassinado por um outro garoto que ainda estava fugindo do minist�rio da magia!O que voc� faz?\n");
printf("1-Voc� pergunta na localidade se alguem sabe algo mais sobre o que aconteceu.\n");
printf("2-Voc� resmunga: antes ele do que eu.\n");
printf("3-Voc� decide investigar o que aconteceu e achar o culpado.\n");
printf("4-Voc� decide procurar a familia do garoto para dizer que senti muito sobre o que aconteceu e contar sobre o fantasma do menino.\n");
printf("Sua Resposta:");
scanf("%d",&x);
while(x<1||x>4){
printf("Escolha entre uma das quatro op��es!\n");
scanf("%d",&x);
}
if(x==1){
pontos+=1;
}else{
    if(x==2){
    pontos+=2;
    }else{
        if(x==3){
        pontos+=3;
        }else{
            if(x==4){
            pontos+=4;
            }
        }
    }
}
system("cls"); //apaga a tela
printf("Ao sair do Caldeir�o Furado, o fantasma reaparece para voc� e conta onde o culpado est� escondido.O que voc� faz?\n");
printf("1-Voc� conta ao minist�rio da magia o paradeiro do culpado e aguarda por not�cias.\n");
printf("2-Voc� o ignora.\n");
printf("3-Voc� corre em dire��o ao lugar indicado pelo fantasma.\n");
printf("4-Voc� pede ajuda a algu�m de confian�a e vai at� o local.\n");
printf("Sua Resposta:");
scanf("%d",&x);
while(x<1||x>4){
printf("Escolha entre uma das quatro op��es!\n");
scanf("%d",&x);
}
if(x==1){
pontos+=1;
}else{
    if(x==2){
    pontos+=2;
    }else{
        if(x==3){
        pontos+=3;
        }else{
            if(x==4){
            pontos+=4;
            }
        }
    }
}
system("cls"); //apaga a tela
printf("No meio do caminho voc� encontra a pessoa acusada pelo fantasma e ele te conta que o garoto se matou e ele n�o � culpado, o que voc� faz?\n");
printf("1-Voc� pergunta por quais motivos voc� deveria acreditar nele.\n");
printf("2-Voc� acredita nele e o deixa ir.\n");
printf("3-Voc� pede para que ele se entregue e esclare�a tudo no minist�rio da magia.\n");
printf("4-Voc� n�o acredita nele e o tenta convencer a se entregar.\n");
printf("Sua Resposta:");
scanf("%d",&x);
while(x<1||x>4){
printf("Escolha entre uma das quatro op��es!\n");
scanf("%d",&x);
}
if(x==1){
pontos+=1;
}else{
    if(x==2){
    pontos+=2;
    }else{
        if(x==3){
        pontos+=3;
        }else{
            if(x==4){
            pontos+=4;
            }
        }
    }
}
system("cls"); //apaga a tela
printf("O culpado � preso e fantasma aparece para lhe agradecer, o que voc� faz?\n");
printf("1-Voc� pede que ele n�o lhe encomode mais.\n");
printf("2-Voc� sorri para ele e o deseja um bom descan�o.\n");
printf("3-Voc� acena com a cabe�a a vai para casa.\n");
printf("4-Voc� conta tudo o que aconteceu para a familia dele.\n");
printf("Sua Resposta:");
scanf("%d",&x);
while(x<1||x>4){
printf("Escolha entre uma das quatro op��es!\n");
scanf("%d",&x);
}
if(x==1){
pontos+=1;
}else{
    if(x==2){
    pontos+=2;
    }else{
        if(x==3){
        pontos+=3;
        }else{
            if(x==4){
            pontos+=4;
            }
        }
    }
}
system("cls");
printf("Parab�ns, %s, voc� ajudou a solucionar o mist�rio do Fantasma Urrante e agora posso te colocar em uma das casas!\n",nome);

if(pontos<=8){
printf("Sua casa ser� Corvinal, apenas Jovens bruxos que buscam a sabedoria e com senso de justi�a s�o escolhidos para est� casa");
}else{
    if(pontos>=9 && pontos<=14){
    printf("Sua Casa ser� a Sonserina, grandes coisas aguardam aqueles da casa sonserina, talvez n�o boas, mas, grandes!");
    }else{
        if(pontos>=15 && pontos<=20){
        printf("Sua Casa ser� a Grifinoria, jovens inteligentes e de coragem preenchem as fileiras da Grifinoria!");
        }else{
            if(pontos>=21 && pontos<=25){
            printf("Sua Casa ser� a Lufa Lufa, bondade e dertemina��o s�o duas das qualidades que definem os Lufa Lufa!");
            }
        }
    }
}

}
