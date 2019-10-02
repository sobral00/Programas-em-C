#include <stdio.h>

//entrar com 10 numeros no vetor , identificar e escrever se houver algum igual!

void main(){

int x[10],i,z;

for(i=0;i<10;i++){
    scanf("%d",&x[i]);
}
for (i=0;i<10;i++){
   for(z=i+1;z<10;z++)
    if(x[z]==x[i]){
        printf("\t%d\n",x[i]);
        }
    }
}

