# For comments

all: datos.txt

sum.x: SerieH.cpp
	g++ SerieH.cpp -o sum.x

datos.txt: sum.x
	./sum.x 100 10 > datos.txt