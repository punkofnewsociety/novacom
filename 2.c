#include <stdio.h>


void main(void)
{
  unsigned short a = 1;
  printf("%s\n", *((unsigned char *) &a) == 0 ? "big-endian" : "little-endian");
  return;

}
