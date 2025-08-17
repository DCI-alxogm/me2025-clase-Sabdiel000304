#include <stdio.h>
#include <math.h> 
int main(){
  float a,b,c,x1,x2,D,R,i;
  printf("ingresar los coeficientes de la ecuación cuadrática en órden \n");
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  if(a==0){
    if(b!=0){
      x1=-c/b;
      printf("x1 = %f\n",x1);
    } else{
      if(c==0){
      printf("Infinitas raíces reales\n");
      } else{
        printf("Las raíces son complejas\n");
        }
      }
  }else{
    D = b*b - 4*a*c;
    if(D>0){
    x1 = (-b + sqrt(D)) / (2*a);
    x2 = (-b - sqrt(D)) / (2*a);
    printf("x1 = %f \n x2 = %f\n", x1, x2);
    } else{
      if(D == 0){
        x1 = -b / (2*a);
        printf("x1 = %f\n", x1);
        } else{
          R = -b / (2*a);
          i = sqrt(-D) / (2*a);
          printf("x1 = %f + %fi \n x2 = %f - %fi \n", R, i, R, i);
          }
      } 
    }
return 0;
}
