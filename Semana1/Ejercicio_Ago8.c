//Agosto 8 2025
#include <stdio.h>
#include <math.h>

int main(){
  float x,a,b,c;
  float X[3];
  printf("Introducir un numero decimal");
  scanf("%f",&x);
  a = x*x;
  b = log10f(x);
  c = expf(x) + cosf(x);
  a = X[0];
  b = X[1];
  c = X[2];
  printf("%f %f %f \n",a,b,c);

}
