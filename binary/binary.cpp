#include "binary.h"
#include <math.h>
#include <iostream>

int binary(int arr[], int start, int finish, int search)
{
	int mid = floor((start + finish) / 2);

	if (finish > 0)
	{
		if (search == arr[mid])
		{
			return mid;
		}

		else if (search < arr[mid])
		{
			return binary(arr, start, mid, search);
		}

		else if (search > arr[mid])
		{
			return binary(arr, mid, finish, search);
		}
	}

	return -1;
}
