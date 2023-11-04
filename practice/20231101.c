#include <stdio.h>
#include <math.h>
#define EPS 0.0000001
#define NMAX 100

double f(double x){
  return(x + cos(x));
}
double df(double x){
  return(1. - sin(x));
}

int main(){
  double x, d;
  int n = 0;

  x = 1.0;
  do{
    printf("n = %d, x = %lf\n", n, x);
    d = -f(x) / df(x);
    x += d;
    n++;
  } while(fabs(d) > EPS && n < NMAX);
    if(n == NMAX) 
      printf("error!!\n");
    else
      printf("x = %1f\n", x);

}
