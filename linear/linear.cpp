#include "linear.h"

int linear(int arr[], int n, int search)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == search)
			return i;
	}

	return -1;
}
