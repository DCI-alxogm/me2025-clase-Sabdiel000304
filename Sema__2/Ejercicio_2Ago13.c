#include <stdio.h>
int main(){
  float a=3;
  float b=4;
  float c=5;
  float d=7;
  float e=0;

  printf("(a+b)*c/d) = %f \n",e=(a+b)*c/d);
  printf("((a+b)*c)/d = %f \n",e=((a+b)*c)/d);
  printf("a+(b*c)/d = %f \n",e=a+(b*c)/d);
  printf("a+b*c/d = %f \n",e=a+b*c/d);

  return 0;
}