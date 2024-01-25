#include <stdio.h>

int main(void)
{

	/*
	 * Original:
	 * for (n = 0; m > 0; n++) m /= 2;
	 */

	/* Rewritten:
	 * for (n = 0; m > 0; m /= 2, n++) ;
	 */

	return 0;
}
