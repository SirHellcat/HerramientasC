#target: dependencias (pueden ser varias cosas)
#	(porner un tab para grear el target)
#% es para que el make aplique a todos los datos del mismo tipo
#"*.algo" es para todos los archivos con extensión ".algo"
#siempre  poner $ antes de lo siguiente
# @ es el nombre del target
# ^ es todas las dependencias
# < es la primera dependencia

#target global
all: fig.pdf

#Esto compila el código en c++
H.x: Hermite.cpp
	g++ -std=c++17 Hermite.cpp -o H.x

#Esto pasa los datos del ejecutable a un txt
dat.txt: H.x
	./H.x > dat.txt

#Esto grafica los datos en un pdf
fig.pdf: plot.py dat.txt
	python3 plot.py

#Esto borra elemntos innecesarios
clean:
	rm -f a.out *.x dat.txt fig.pdf