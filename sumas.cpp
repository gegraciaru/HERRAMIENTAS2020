#include <iostream>

double sum1(int N);
double sum2(int N);
double sum3(int N);

int main (void)
{
  //declarar el limite N max
  //hacer un FOR para variar N
  //imprimir

  std::cout << sum1(10) << "\n";

  return 0;
}

double sum1 (int N)
{
  double sum = 0;
  int sign=-1;
  for (int n=1; n <= 2*N; ++n) {
    sum += sign*1.0*n/(n+1);
    //opción para la alternancia: sum+= std::power (-1,n)*n/(n+1)
    //FUNCIÓN POWER
    //mejor utilizamos algo recursivo
    //los DOUBLE no se pueden comparar directamente con ciertos números, así que por eso preferimos no declarar n como DOUBLE, sino dejarlo como ENTERO y convertirlo temporalmente en un DOUBLE al multiplicar por 1.0
    sign*=-1;
  }
  
    return sum;
}


