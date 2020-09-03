#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]){

  double under=1;
  double over=1;

  int N = std::atoi(argv[1]); //Ingresa el argumento al correr el código.

  for(int i=1 ; i<=N ; i++)
  {

  under = under/2;

  over = over*2;

  std::cout << i << "\t"
            << under << "\t"
            << over << '\n';

  }

  return 0;

}