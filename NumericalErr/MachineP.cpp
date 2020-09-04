#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]){

  float eps{1};
  float one{};

  int P = std::atoi(argv[2]);

  std::cout.precision(P);
  std::cout.setf(std::ios::scientific);

  int N = std::atoi(argv[1]);

  for(int i=1; i<=N ; i++)
  {
    eps = eps / 2.0;
    one = 1.0 + eps;

    std::cout << N << "\t"
              << one << "\t"
              << eps << '\n';

  }

  return 0;

}