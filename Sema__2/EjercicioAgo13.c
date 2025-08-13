#include <stdio.h>
int main(){
  int a=3;
  int b=4;
  int c=5;
  int d=7;
  int e=0;

  printf("(a+b)*c/d) = %d \n",e=(a+b)*c/d);
  printf("((a+b)*c)/d = %d \n",e=((a+b)*c)/d);
  printf("a+(b*c)/d = %d \n",e=a+(b*c)/d);
  printf("a+b*c/d = %d \n",e=a+b*c/d);

  return 0;
}