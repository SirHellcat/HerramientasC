#include <iostream>
#include <cstdlib>
#include <math.h>

double sumup(int N){
	double sum{0.0};

	for(int i=1; i<= N; i++){
		sum = sum + 1.0 / i;
	}

	return sum;
}

double sumdown(int N){
	double sum{0.0};

	for(int i=N; i>= 1; i--){
		sum = sum + 1.0 / i;
	}

	return sum;
}

int main(int argc, char *argv[]){

  int N = std::atoi(argv[1]);

  int P = std::atoi(argv[2]); //Para poder modificar la presición

  //La parte de la notación científica
  std::cout.setf(std::ios::scientific);
	std::cout.precision(P);

	for (int i=1; i<=N; i++){
		std::cout << i << "\t"
							<< std::fabs(1 - sumdown(i) / sumup(i))
							<< std::endl;
	}

  return 0;

}