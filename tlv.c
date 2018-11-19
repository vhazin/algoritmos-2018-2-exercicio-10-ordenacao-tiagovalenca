#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char nome[21];
}crianca;

int criancas, comportaram;
char bom, temp[21];
int main(void) {
  scanf("%d\n", &criancas);
  crianca lista[criancas];
  for(int i = 0; i < criancas; i++){
    scanf(" %c %[^\n]", &bom, &lista[i].nome);
    if(bom == '+')comportaram++;
  }
  for(int i=0;i<criancas;i++){
    for(int j=i+1;j<criancas;j++){
      if(strcmp(lista[i].nome,lista[j].nome)>0){
        strcpy(temp,lista[i].nome);
        strcpy(lista[i].nome,lista[j].nome);
        strcpy(lista[j].nome,temp);
      }
    }
  }
  for(int i=0;i<criancas;i++){
    puts(lista[i].nome);
  }

  printf("Se comportaram: %d | Nao se comportaram: %d\n", comportaram, criancas - comportaram);

  return 0;
}
