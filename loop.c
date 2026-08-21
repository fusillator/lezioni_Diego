#include <stdio.h>

int moltiplica(int a, int b){
  return a*b;
}

int sum(int a, int b){
   int prodotto=moltiplica(3, 6);
   return a+b+prodotto;
}


int main(void){

//  int c=0;
//  e2:  
//  if (c<10){
//    printf("%d\n",c);
//    c++;
//    goto e2;
//  } 
  printf("spazzatura da non visualizzare\n");  
  printf("\x1b[H\x1b[2J\x1b[3J"); // stampo la sequenza che usa clear per pulire il terminale (clear | hexdump -C:  1b 5b 48 1b 5b 32 4a 1b  5b 33 4a |.[H.[2J.[3J|)

  int d=0;  
  while (d<10){
    char b='A';
    printf("%d\n", b); 
    printf("%d\n", d); 
    if (d==5) break;
    d++;
  }
  //printf("%c\n", b);
  printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
  unsigned char g=0;
  while(1){
    printf("%d\n",++g);
    if (g==9) break;
  }


  printf("*******************************************************\n");  
  for (int e=0; e<10; e++){
    if (e%2==1){ 
      if (e==5) 
        break;
      continue;
    }
    printf("%d\n", e); 
  }
  //printf("%d\n", e); //va in errore perchè fuori scope e deve essere dichiarata all'interno di main per esistere
  printf("*******************************************************\n");  

  for(unsigned char i=0;;){
    printf("%d\n",i);
    if (i==10) break; 
    i++;
  }
  printf("non dentro il ciclo\n");

  for(int h=9; h>0; h=h-2) printf("%d\n", h);
  printf("fine dispari da 9 a 0\n");
  
  int f=0;
  do {
    printf("%d\n", f);
    f++;
  } while (f<10); 

  int a=0;
  int somma=sum(2,5);
  printf("a=%d\n", a);
  printf("2+5=%d\n", somma);

  return 0;
}
