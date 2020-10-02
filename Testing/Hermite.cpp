#include <iostream>
#include <cmath>

int main(){

	//constante reducida de Planck
	const double H = 1.0;//(6.626070040e-34) / (2 * M_PI);
	//masa de la partícula cuántica
	const double m = 1.0;
	//frecuencia angular del sistema
	const double omega = 1.0;
	//grado de la función propia graficada
	const int n = 10;
	//declaramos el intervalo a graficar
	const double xmin = -8.0;
	const double xmax = 8.0;
	//número de intervalos para calcular
	const int iter = 1000;
	//tamaño de cada intervalo
	const double paso = iter / (xmax - xmin);

	//generamos los polinomios
	for(int i=0; i <= iter; i++){
		//primero el valor de "x"
		double x = (i / paso) + xmin;
		//ahora definimos la fórmula por partes
		double P1 = 1.0 / (sqrt(pow(2.0,n) * tgamma(n+1.0)));
		double P2 = pow((m * omega) / (M_PI * H),0.25);
		double P3 = exp(-(m * omega * pow(x,2.0)) / (2.0 * H));
		double P4 = std::hermite(n,sqrt((m * omega) / H) * x);

		//ahora sí se imprimen los valores
		std::cout << x << "\t" << P1*P2*P3*P4 << '\n';
	}

	return 0;
}