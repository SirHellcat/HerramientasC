#include <iostream>
#include <random>

int main(){

	const int seed=1;
	const int NMAX=10000;
	const int NBINS = 20;
	const double XMIN = 0.0, XMAX = 1.0;
	const double Xhisto = (XMAX - XMIN)/NBINS;

	double histo[NBINS] = {0.0};

	//declarando el generador
	std::mt19937 gen(seed);
	std::uniform_real_distribution<double> dis(XMIN,XMAX);

	for(int i=0; i <= NMAX; i++){
		double r = dis(gen);
		int bin = int((r - XMIN) / Xhisto);
		histo[bin] += 1;
	}

	for(int i=0; i< NBINS; i++){
		std::cout << XMIN + i*Xhisto << "\t"
							<< histo[i] << '\n';
	}


	return 0;

}