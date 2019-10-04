#include <cstdio>
#include <cmath>

double exponencial(  double x);
int factorial (int n);
double parcial( double x, int i);

int main(void){
  for(int i=1; i<=7; i++){
    printf("%10d %24.3f   \n",i, parcial(5,i) );
  }
  return 0;
}


double parcial( double x, int i){
  
double  a= pow(x,i)/factorial(i);
  
 return a;
}




int factorial ( int n ){
  int product = 1.0;
  for(int i=1; i<=n; i++)
    {
      product=product*i;
	}
  return product;
}
