#include <iostream>
#include <cstdlib>

double S1(int i){
  return ( i / (i+1.0) ) - ( (i-1.0) / i );
}

double S2(int i){
  return - ( (2.0*i - 1) / (2.0*i) ) + ( (2.0*i) / (2.0*i + 1.0) );
}

double S3(int i){
  return 1.0 / ( 2.0 * i * (2.0*i + 1.0) );
}


int main(int argc, char *argv[]){

  int N = std::atoi(argv[1]);
  int P = std::atoi(argv[2]);
  double sum1{0};
  double sum2{0};
  double sum3{0};

  std::cout.setf(std::ios::scientific);
  std::cout.precision(P);

  for(int i=1; i <= N; i++){
    
    sum1 = sum1 + S1(2*i);
    sum2 = sum2 + S2(i);
    sum3 = sum3 + S3(i);

    std::cout << ( sum1 - sum2 ) / sum2 << "\t" 
              << ( sum1 - sum3 ) / sum3 << '\n';
  }

  return 0;

}