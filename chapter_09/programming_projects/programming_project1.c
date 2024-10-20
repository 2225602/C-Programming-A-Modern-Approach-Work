#include <stdio.h>
#define N 8

void selection_sort(int n, int in_array[]);

int main(void)
{

	int nums[N];
	printf("Enter %d integers: \n", N);
	for (int i = 0; i < N; i++) scanf("%d", &nums[i]);

	selection_sort(N, nums);

	printf("\nIntegers in order:\n");
	for (int i = 0; i < N; i++) printf("%-3d", nums[i]);
	printf("\n");

	return 0;
}

void selection_sort(int n, int in_array[n])
{
	if (n == 0) return;
	else {
		int largest_pos = 0;
		for (int i = 0; i < n; i++) {
			largest_pos = in_array[i] > in_array[largest_pos] ? i : largest_pos;
		}

		int saved = in_array[n - 1];
		in_array[n - 1] = in_array[largest_pos];
		in_array[largest_pos] = saved;
		selection_sort(n - 1, in_array);
		return;
	}

}
