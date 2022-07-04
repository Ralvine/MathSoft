#include <iostream>
#include <cstdlib>
#include "Window.h"
#include "Fractal.h"
#include "bitmap.h"

int main(int argc, char *argv[])
{
	if (argc < 8)
	{
		std::cerr << "请依次输入下列参数: " << argv[0]
				  << "生成图像名,迭代次数,ox,oy,dimension,c的实部,c的虚部" << std::endl;
		exit(-1);
	}
	
	Window win(std::atof(argv[2]), std::atof(argv[3]), std::atof(argv[4]), std::atof(argv[5]), std::atof(argv[6]), std::atof(argv[7]));
	int N = win.get_N();
	double lpp = win.get_lpp();
	double dim = win.get_dimension();
	int width = win.get_width();
	int height = win.get_height();
	double ox = win.get_ox() - dim;
	double oy = win.get_oy() - dim / width * height;
	double creal = win.get_creal();
	double cimag = win.get_cimag();

	char *cache = new char[width * height * 3];

	for (int j = 0; j < height; j++)
		for (int i = 0; i < width; i++)
		{
			double x = ox + lpp * i;
			double y = oy + lpp * j;
			int pos = width * j + i; 
			Fractal man(std::complex<double>{x, y},
						   N,
						   std::complex<double>{creal, cimag});
			while (!man.stop_criterion())
			{
				man.forward_step();
				if (man.is_disconvergence())
					break;
			}
			if (man.stop_criterion())
			{
				cache[pos * 3] = (char)255;
				cache[pos * 3 + 1] = (char)255;
				cache[pos * 3 + 2] = (char)255;
			}
			else
			{
				cache[pos * 3] = (char)0;
				cache[pos * 3 + 1] = (char)0;
				cache[pos * 3 + 2] = (char)0;
			}
		}
	build_bmp(argv[1], width, height, cache);
	delete [] cache;
	return 0;
};
