#include <stdio.h>

int factorial(int n){
  if(n==1){
    return 1;
  }
  else{
    return n * factorial(n-1);
  }
}

int main(){
  int fact,n;
  printf("Ingrese un numero: ");
  scanf("%d",&n);
  
  fact= factorial(n);
  printf("el factorial de %d es: %d (base)\n",n,fact);
  return 0;
}