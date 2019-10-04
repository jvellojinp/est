#include <cstdio>
#include <cmath>

double exponencial(  double x);
int factorial (int n);
double parcial( double x, int i);

int main(void){
 
    printf("%10d %24.3f  %24.3f \n",0.5, exponencial(0.5),exp(0.5) );
  
  return 0;
}


double parcial( double x, int i){
  
double  a= pow(x,i)/factorial(i);
  
 return a;
}


double exponencial( double x){
double  sum=1.0;


 for(int i=1; i<=100; i++){

   sum=sum+parcial(x,i);
  
  }
 
  return sum;
}

int factorial ( int n ){
  int product = 1.0;
  for(int i=1; i<=n; i++)
    {
      product=product*i;
	}
  return product;
}
