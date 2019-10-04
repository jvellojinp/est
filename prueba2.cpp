#include <cstdio>
#include <cmath>

double exponencial(  double x);
int factorial (int n);
double parcial( double x, int i);

int main(void){
  
  printf("%24.3f %24.3f  %24.3f \n",25.5, exponencial(25.5),exp(25.5) );
  
  return 0;
}


double parcial( double x, int i){
  
  double  a= pow(x,i)/factorial(i);
  
 return a;
}


double exponencial( double x){
double  sum=1.0;
 double eps= pow(10,-6);

 for(int i=1; parcial(x,i+1)>eps; i++){

   sum=sum+parcial(x,i);
  
  }
 
  return sum;
}

int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}


