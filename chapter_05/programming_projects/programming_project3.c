/* Calculates a broker's commission */

#include <stdio.h>

int main(void)
{
	int num_shares;
	float value, share_price, 
	      original_commission, rival_commission;

	printf("Enter the number of shares: ");
	scanf("%d", &num_shares);
	printf("Enter the price of each share: ");
	scanf("%f", &share_price);
	value = num_shares * share_price;

	if (value < 2500.00f)
		original_commission = 30.00f + 0.017f * value;
	else if (value < 6250.00f)
		original_commission = 56.00f + 0.0066f * value;
	else if (value < 20000.00f)
		original_commission = 76.00f + 0.0034f * value;
	else if (value < 50000.00f)
		original_commission = 100.00f + 0.0022f * value;
	else if (value < 500000.00f)
		original_commission = 155.00f + 0.0011f * value;
	else
		original_commission = 255.00f + .0009f * value;;

	if (original_commission < 39.00f) 
		original_commission = 39.00f;
	
	printf("Original Broker's Commission: $%.2f\n", original_commission);

	rival_commission = 33 +
		(num_shares < 2000 ? 0.03 * num_shares :
		 0.02 * num_shares);
	printf("Rival Broker's Commission: $%.2f\n", rival_commission);

	return 0;
}

