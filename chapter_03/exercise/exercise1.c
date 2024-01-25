#include <stdio.h>

int main(void) {

	printf("%6d,%4d\n", 86, 1040);
	printf("%12.5e\n", 30.253);
	printf("%.4f\n", 83.162);
	printf("%-6.2g\n", 0.0000009979);

	return 0;
}

// What output do the following calls of printf produce?
// (a) printf("%6d,%4d", 86, 1040);
// -> "    86,1040"
// (b) printf("%12.5e", 30.253);
// -> " 3.02530e+01"
// (c) printf("%.4f", 83.162);
// -> "86.1620"
// (d) printf("%-6.2g", 0.0000009979);
// -> "1e-06 "
 
