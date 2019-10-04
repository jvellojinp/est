#include <cmath>
#include <cstdio>

double harmonic (int N);
int main(void){

  
  for(int i=1; i<=1000000; i=i+1){
    double gamma = harmonic(i)-log(i);
    double error = fabs(gamma-0.57721)/0.57721;
			
      printf("%10d %24.5f %24.5f %24.5f %24.16f\n", i , harmonic(i) , log(i), gamma, error);
  }

return 0;
}



double harmonic(int N){
  double sum=0.0;
  for(int ii=1; ii<=N;ii=ii+1){
    sum=sum+(1.0/ii);
  }
  return sum;
}
