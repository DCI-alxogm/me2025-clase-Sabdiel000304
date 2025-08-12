#include <stdio.h>
#include <math.h>

int main(){
  int N[5];
  float R[5];
  int i;
  float pi=3.1415926536;
  N[0]=1;
  N[1]=2;
  N[2]=3;
  N[3]=4;
  N[4]=5;

  //printf("x\t x^2 \t log(x+1) \t exp(x)+cos(x) \n");
  for(i=0;i<5;i++){
  //printf(" %lf %lf %lf %lf \n"), numeros[i],numeros[i]*numeros[i],log10(numeros[i]+1),exp(numeros[i])+cos(numeros[i]);
    if(N[i]%2==0){
      R[i]=exp(N[i])+cos(N[i]);
      printf("x=%d \n exp(x)+cos(x)= %f\n",N[i],R[i]);
    }
  }
  printf("Resultados \n");
  for(i=0;i<5;i++){
    printf("%f\n",R[i]);
  }

  printf("Pi+Pi=%f", pi+pi);


  return 0;
}