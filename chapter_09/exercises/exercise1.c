double triangle_area(double base, height)
double product;
{
	product = base * height;
	return product / 2;
}

// Q. Locate the two errors and show how to fix them.
//
// A. There's nothing wrong with the formula given in the function's body; the problem is the function declaration. The product (which is assumed to be the function's return value) does not need to be defined on its own line; it only needs to have the return type specified before the function name. 
// In addition, all formal parameters of the function must have their indicated types. So the correct way of writing the function would be:
//
//

double triangle_area(double base, double height) 
{
	double product = base * height;
	return product / 2;
}
