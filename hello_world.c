#include <stdio.h>
#include <math.h>
#include <limits.h>

int main(){
  unsigned char c; // -128 a 127 0-255
  printf("range char=%d-%d\n", CHAR_MIN, CHAR_MAX);
  printf("range int=%d-%d\n", INT_MIN, INT_MAX);
  c='A';
  c=c+2;
  c=c+1; c++; ++c;
  short d; // 16bit=2byte -2^15 a (2^15)-1 
  unsigned short e; // 0-(2^16-1) 
  unsigned int a=10; // 32bit o 4byte 0 a 2^32-1 (-2^31)-(2^31-1)
  long l; // 64 bit
  d=pow(7,2); 
  double d1; //fp32 segno 1,mantissa * 2^127-esponente
  float f1; //fp64 segno 1,mantissa * 2^1023-esponente
  size_t size_float = sizeof (float);
  printf("hello world\n%s\n%s\n%d\n%X\n%c\nsize_float=%lu", "Hello Diego!", "this is our first c program", d, d, (char)d,size_float);
  return 0;
}
