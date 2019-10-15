/*	test for assignment
	author : eliotjang
	last_modified_at: 2019-10-16T03:30:00+09:00
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	long N, i;
	char *stop;
	double area, dx, x;
	
	N = 100; // default value
	
	if ( argc == 2 ) N = strtol(argv[1], &stop, 10);
	// Linux have to input 2 words, program file and arguments. but Dev c++ only puts arguments.
	// Dev C++ already have argv[0]. but it couldn't print. I guess it is program file.
	// Anyway, if you put arguments in Dev C++, fist arguments is argv[1]. 

	area = 0.0;
	dx = 2.0/N;
	
	x = 0.0;
	for ( i = 0; i < N; i++ ) {
		x += dx;
		area += x/((x*x+2)*(x*x+2)*(x*x+2)) * dx; // f(x) * x
	}
	
	printf("area: %5.10lf\n", area);
	
	return 0;
}

