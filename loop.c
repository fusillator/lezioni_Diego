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

  int d=0;  
  while (d<10){
    char b='A';
    printf("%d\n", b); 
    printf("%d\n", d); 
    if (d==5) break;
    d++;
  }
  //printf("%c\n", b); 
  
  for (int e=0; e<10; e++){
    printf("%d\n", e); 
    if (e==5) break;
  }
  printf("%d\n", e); 
  
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
