#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>

float ff(float x) {
  return 5 - sqrt (25 + x*x);
}

// Función mejorada para evitar substraciones cancelativas
float ffmejor(float x) {
  return pow(x,2) / ( 5 + sqrt ( 25 + pow(x,2) ) );
}

int main(int argc, char *argv[]){

  int x=0;
  float paso = std::atof(argv[1]); //Para poder modificar el valor de cada paso

  int P = std::atoi(argv[2]); //Para poder modificar la presición

  //La parte de la notación científica
  std::cout.setf(std::ios::scientific);

  //En vez de usar un contador igual al paso ingresado (0.01), se mantiene el contador igual a uno para evitar errores
  while(x <= (1.0 / paso)){

  std::cout << std::setprecision(1) << x * paso << "\t"
            << std::setprecision(P) << ff(x * paso) << "\t"
            << std::setprecision(P) << ffmejor(x * paso)
            << "\n";
  x = x + 1;
  }

  return 0;

}