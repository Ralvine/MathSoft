all:	Fractal.h Window.h bitmap.h bitmap.cpp mandelbrot.cpp julia.cpp
	g++ -std=c++11 -o julia julia.cpp bitmap.cpp
	g++ -std=c++11 -o mandelbrot mandelbrot.cpp bitmap.cpp

debug:	Fractal.h Window.h bitmap.h bitmap.cpp mandelbrot.cpp julia.cpp
	g++ -std=c++11 -o julia julia.cpp bitmap.cpp -g
	g++ -std=c++11 -o mandelbrot mandelbrot.cpp bitmap.cpp -g

clean:
	rm -f julia
	rm -f mandelbrot