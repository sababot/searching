#include "jump.h"

#include <math.h>

int jump(int arr[], int n, int search)
{
	int m = sqrt(n);
	int m_tmp = m;

	int begin = 0;
	int i = 2;

	while (arr[m_tmp] < search)
	{
		begin = m;
		m_tmp = m * i;
		i++;
	}

	if (arr[m_tmp] == search)
		return m_tmp;

	for (int i = m_tmp; i > begin; i--)
	{
		if (arr[i] == search)
			return i;
	}

	return -1;
}