#include <stdio.h>
#include <locale.h>

/* Date: 10/04/2019
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
printf("Muito bem %s, seja bem vindo(a) a Hogwarts.\nIrei fazer algumas perguntas a você e descobriremos a qual casa você pertencerá!\n",nome);
printf("Você será escolhido para uma delas: Grifinoria, Corvinal, Sonserina ou Lufa Lufa.\nVamos começar então!\n\n");
printf("Você Acabou de entrar em seu quarto e encontra um fantasma urrador flutuando em cima de sua cama, o que você faz?\n");
printf("1-Você percebe que ele não está urrando e sim chorando, você se aproxima e procura saber o que aconteceu.\n");
printf("2-Você tenta lançar um feitiço no fantasma assim que o percebe na tentativa de se livrar dele.\n");
printf("3-Você pergunta ao fantasma o que ele está fazendo em seu quarto, antes de tomar alguma ação.\n");
printf("4-Você senta ao lado dele, solta um sorriso para tentar acalma-lo e então pergunta o que houve.\n");
printf("Sua Resposta:");
scanf("%d",&x);
while(x<1||x>4){
printf("Escolha entre uma das quatro opções!\n");
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
printf("O fantasma vai embora e no lugar onde ele estava você encontra uma foto que retrata três pessoas juntas e felizes, o que você faz?\n");
printf("1-Você procura algo na foto que indique quem são aquelas pessoas ou onde ela foi tirada.\n");
printf("2-Você apenas rasga e joga a foto fora, aquilo não te interessa.\n");
printf("3-Você chama pelo fantasma para perguntar se a foto é dele?.\n");
printf("4-Você guarda a foto em um lugar segura para devolver assim que encontrar com o fantasma novamente.\n");
printf("Sua Resposta:");
scanf("%d",&x);
while(x<1||x>4){
printf("Escolha entre uma das quatro opções!\n");
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
printf("Depois de alguns dias você escuta por acidente uma conversa no Caldeirão Furado e descobre que aquele fantasma\n");
printf("era o fantasma de um garoto que foi assassinado por um outro garoto que ainda estava fugindo do ministério da magia!O que você faz?\n");
printf("1-Você pergunta na localidade se alguem sabe algo mais sobre o que aconteceu.\n");
printf("2-Você resmunga: antes ele do que eu.\n");
printf("3-Você decide investigar o que aconteceu e achar o culpado.\n");
printf("4-Você decide procurar a familia do garoto para dizer que senti muito sobre o que aconteceu e contar sobre o fantasma do menino.\n");
printf("Sua Resposta:");
scanf("%d",&x);
while(x<1||x>4){
printf("Escolha entre uma das quatro opções!\n");
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
printf("Ao sair do Caldeirão Furado, o fantasma reaparece para você e conta onde o culpado está escondido.O que você faz?\n");
printf("1-Você conta ao ministério da magia o paradeiro do culpado e aguarda por notícias.\n");
printf("2-Você o ignora.\n");
printf("3-Você corre em direção ao lugar indicado pelo fantasma.\n");
printf("4-Você pede ajuda a alguém de confiança e vai até o local.\n");
printf("Sua Resposta:");
scanf("%d",&x);
while(x<1||x>4){
printf("Escolha entre uma das quatro opções!\n");
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
printf("No meio do caminho você encontra a pessoa acusada pelo fantasma e ele te conta que o garoto se matou e ele não é culpado, o que você faz?\n");
printf("1-Você pergunta por quais motivos você deveria acreditar nele.\n");
printf("2-Você acredita nele e o deixa ir.\n");
printf("3-Você pede para que ele se entregue e esclareça tudo no ministério da magia.\n");
printf("4-Você não acredita nele e o tenta convencer a se entregar.\n");
printf("Sua Resposta:");
scanf("%d",&x);
while(x<1||x>4){
printf("Escolha entre uma das quatro opções!\n");
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
printf("O culpado é preso e o fantasma aparece para lhe agradecer, o que você faz?\n");
printf("1-Você pede que ele não lhe encomode mais.\n");
printf("2-Você sorri para ele e o deseja um bom descanço.\n");
printf("3-Você acena com a cabeça a vai para casa.\n");
printf("4-Você conta tudo o que aconteceu para a familia dele.\n");
printf("Sua Resposta:");
scanf("%d",&x);
while(x<1||x>4){
printf("Escolha entre uma das quatro opções!\n");
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
printf("Parabéns, %s, você ajudou a solucionar o mistério do Fantasma Urrante e agora posso te colocar em uma das casas!\n",nome);

if(pontos<=8){
printf("Sua casa será Corvinal, apenas Jovens bruxos que buscam a sabedoria e com senso de justiça são escolhidos para está casa");
}else{
    if(pontos>=9 && pontos<=14){
    printf("Sua Casa será a Sonserina, grandes coisas aguardam aqueles da casa sonserina, talvez não boas, mas, grandes!");
    }else{
        if(pontos>=15 && pontos<=20){
        printf("Sua Casa será a Grifinoria, jovens inteligentes e de coragem preenchem as fileiras da Grifinoria!");
        }else{
            if(pontos>=21 && pontos<=25){
            printf("Sua Casa será a Lufa Lufa, bondade e derteminação são duas das qualidades que definem os Lufa Lufa!");
            }
        }
    }
}

}
