#include <iostream>
#include <random>
#include <cmath>

//Función para calcular el promedio de un arreglo
float mean(int arr[], int n);
//Función para calcular el error estándar de un arreglo
float error(int arr[], int n);

int main(){

	//Número de semillas usadas
	const int Nseed = 10;
	//Semilla para crear números pseudo-aleatorios reproducibles
	const int seed[Nseed] = {0,1,2,3,4,5,6,7,8,9};
	//Número de números aleatorios generados
	const int N = 10000;
	//Tamaño del arreglo que guarda los promedios
	const int Narray = 10;
	//Intervalo donde se generan los números aleatorios
	const double XMIN = 0.0, XMAX = 1.0;
	//Tamaño de cada elemento del histograma
	const double Nhisto = (XMAX - XMIN)/Narray;
	//Histograma inicializado en ceros
	int histo[Narray][Nseed] = {0};

	//Se declaran las semillas una por una para cada histograma
	for(int j = 0; j < Nseed; j++){
	//Se declara el generador pseudo-aleatorio
	std::mt19937 gen(seed[j]);
	std::uniform_real_distribution<double> dis(XMIN,XMAX);

	//Se agrupan los números aleatorios en cada parte correspondiente del arreglo
	
		for(int i = 0; i <= N; i++){
		//Se declara un número aleatorio
		double r = dis(gen);
		//Se calcula el número de la posición del arreglo más cercano a "r" y se agrega un contador +1 a esta posición.
		int bin = int((r - XMIN)/ Nhisto);
		histo[bin][j] += 1;
		}
	}

	//Para ver el arreglo de histogramas usar estas lineas:
	//for(int i = 0; i < Narray; i++){
	//	std::cout<<XMIN+i*Nhisto<<"\t";
	//	for(int j = 0; j < Nseed; j++){
	//		std::cout<<histo[i][j]<<'\t';
	//	}
	//	std::cout<<'\n';
	//}

	//Ahora usamos la media y el error estandar del arreglo principal
	for(int i = 0; i < Narray; i++){
		std::cout<<XMIN+i*Nhisto<<"\t"<<mean(histo[i],Nseed)<<"\t"<<error(histo[i],Nseed)<<'\n';
	}

	return 0;

}

float mean(int arr[], int n){
	float sum=0.0;
	for(int i = 0; i < n; i++){
		sum = sum + arr[i];
	}
	return sum / n;
}

float error(int arr[], int n){
	float sum=0.0;
	for(int i = 0; i < n; i++){
		sum = sum + pow(( arr[i] - mean(arr,n) ),2);
	}
	return sqrt(sum) / n;
}