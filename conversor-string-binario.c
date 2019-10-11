#include <stdio.h>
//converte string em binario e conta quantos 1's tem no codigo binario.
void main() {
  char nome[20];
  int i,b;
  int c=0;
  printf("Insira uma string: ");
  gets(nome);
  for (i=0;nome[i] != '\0';i++) {
      for (b = 0; b < 8; b++) {
      printf("%d", !!((nome[i] << b) & 128));
      if(!!((nome[i] << b) & 0x80)==1){
        c++;
      }
  }
  printf(" ");
  }
  printf("\nSua string em codigo binario tem %d 1's.",c);
}
