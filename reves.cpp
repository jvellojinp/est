#include <cstdio>
#include <cmath>

double suma1(int n);
double suma2(int n);
int main(){
  
  for(int ii=1; ii<=10000; ii=ii+1){
    double a= fabs(suma1(ii)-suma2(ii));
    double  errorr = a/suma1(ii);
    printf("%10d %24.16e\n", ii, errorr);
  }
}

double suma1(int n){
  double sum=0.0;
  for(int ii=1; ii<=n;ii=ii+1){
    sum=sum+(1.0/ii);
  }
  return sum;
}



  double suma2(int n){
  double sum=1.0/n;
  for(int ii=1; ii<=n-1;++ii ){
    sum=sum+(1.0/(n-ii));
  }
  return sum;
  }
