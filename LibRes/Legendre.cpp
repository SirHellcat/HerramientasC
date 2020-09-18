#include<iostream>
#include<cmath>

int main(){

	//Para parametrizar las variables:
	const float NMIN=-1.0;
	const float NMAX=1.0;
	const float paso = 0.01;

	std::cout.setf(std::ios::scientific);
	std::cout.precision(8);

	for(double i = NMIN; i <= NMAX; i = i + paso){

		std::cout << i << "\t"
							<< std::legendre(5,i)
							<< '\n';

	}

	return 0;	

}