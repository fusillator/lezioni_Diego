#include <stdio.h>

void conta(int contatore, int max){
  printf("%d\n",contatore);
  if (contatore==max) return;
  conta(contatore+1,max);
  printf("contatore: %d\n", contatore);
}

int main(void){
  conta(0,9);  
  return 0;
}
