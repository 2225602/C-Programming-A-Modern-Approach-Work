#include <stdio.h>

int main(void)
{

	float loan, interest_rate, monthly_payment, balance;
	int num_payments;
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	balance = loan;
	printf("Enter interest rate: ");
	scanf("%f", &interest_rate);
	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	printf("Enter number of payments: ");
	scanf("%d", &num_payments);

	for (int i = 1; i <= num_payments; i++) {
		balance = (balance - monthly_payment) + 
			(balance * interest_rate / 1200.0);
		printf("Balance remaining after payment no. %d: $%.2f\n", i, balance);
	}
	return 0;
}
