
#include <stdio.h>

void swapped(long long* he, long long* hi)
{
	long long temp = *he;
	*he = *hi;
	*hi = temp;
}

// A function to implement bubble sort
void bubble(long long arr[], long long n)
{
	long long i, j;
	for (i = 0; i < n - 1; i++)

		// Last i elements are already in place
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swapped(&arr[j], &arr[j + 1]);
}

/* Function to print an array */
void Printa(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver program to test above functions
int main()
{
	long long arr[] = { 64, 34, 25, 12, 22, 11, 90 };
	long long n = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, n);
	printf("Sorted array: \n");
	Printa(arr, n);
	return 0;
}
