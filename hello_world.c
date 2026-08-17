#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(){
  unsigned char c; // 0-255
  c=255;
  c=c+1;   /*  01234567
               11111111= 255
              100000000=255+1   */
           /*  00000010=2
               11111101+
                      1=
               11111110=-1
            */
               

  printf("c=%d\n",c);
  printf("range char=%d-%d\n", CHAR_MIN, CHAR_MAX);
  printf("range int=%d-%d\n", INT_MIN, INT_MAX);
  c='A';
  //c=c+2;
  //c=c+1; c++; ++c;
  short d; // 16bit=2byte -2^15 a (2^15)-1 
  unsigned short e; // 0-(2^16-1) 
  unsigned int a=10; // 32bit o 4byte 0 a 2^32-1 (-2^31)-(2^31-1)
  long l; // 64 bit
  d=pow(7,2); 
  double d1; //fp32 segno 1,mantissa * 2^127-esponente
  float f1; //fp64 segno 1,mantissa * 2^1023-esponente
  d1=2.234556;
  size_t size_float = sizeof (float);
  size_t size_double = sizeof d1;
  printf("hello world\n%s\n%s\n%d\n%X\n%c\nsize_float=%lu\nsize_double=%lu\n", "Hello Diego!", "this is our first c program", d, d, (char)d,size_float,size_double);
  printf("esempio %1$d %1$d %2$X\n",d,c);

  
  c='X';
  if (c=='A'){
     printf("c vale A\n");
     return 1;
  } else if (c=='B') printf("c è B\n");
  else if (c=='C') printf("c è C\n");
  else printf("c è un altra lettera\n");
   
/*  
  c==1 //confronta il valore di c se uguale a 1
  c!=1 //confronta il valore di c se diverso da 1
  c<0  //confronta se il valore di c è negativo
  c>0  //confronta se il valore di c è positivo
  c>=0 
  c<=0
*/   

  goto e1;
  printf("linea saltata");  
e1: 
  printf("linea eseguita");


  c=0;
e2:  
  if (c<=3){
    printf("%d\n",c);
    c++;
    goto e2;
  } 
   



  return 0;
}
