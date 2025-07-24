/*
Endianness is basically the order of bytes of multi byte data type stored in memory address.
Little Endian- LSB is stored at the lowest memory address
Big Endian- MSB is stored at the lowest memory address
*/

Code:

#include<stdio.h>
int main(){
  int i=1;
  char *c=(char*)&i;

  if(*c) printf("Little Endian");
  else printf("Big Endian");
}
