#include <stdio.h>

int main(void){
  
  int x=3;      // x=3, y non esiste
  int y=7;      // x=3, y=7
  int temp=x;     // x=3, y=7, temp=3
  x=y;          // x=7, y=7, temp=3
  y=temp;          // x=7, y=3, temp=3

  return 0;
}
