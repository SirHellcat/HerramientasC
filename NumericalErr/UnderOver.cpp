#include <iostream>

int main(){

  double under=1;
  double over=1;
  int N{};

  std::cout << "Ingrese N \n";
  std::cin >> N;

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