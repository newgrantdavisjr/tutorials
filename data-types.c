#include<stdio.h>
/* data-types are measured in memory and size of type. char 1, int 2, float 4etc.*/

int main()
{
  int a = 10.5;
  double b= 10.5;
  printf("%d\n", sizeof(b));
  float c = 10.5;
  printf("%lu\n", sizeof(c));
  char d = 'a';
  char e[] = "char array";
  bool f = false;

  return 0;
}
