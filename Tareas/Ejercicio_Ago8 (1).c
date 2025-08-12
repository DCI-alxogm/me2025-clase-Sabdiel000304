//Agosto 8 2025
#include <stdio.h>
#include <math.h>

int main(){
  float x;
  float X[3];
  printf("Introducir un numero decimal: ");
  scanf("%f",&x);
  
  X[0] = x*x;
  X[1] = log10f(x);
  X[2] = expf(x) + cosf(x); 
  printf("%f %f %f \n", X[0], X[1], X[2]);

  return 0;

}

