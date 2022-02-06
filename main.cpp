#include <iostream>
#include <stdlib.h>
#include <chrono>

#include "binary/binary.h"
#include "linear/linear.h"

using namespace std;
using namespace std::chrono;

int main()
{
	// variable intitialization
	int algorithm;
	int array_length;
	char population_method;
	int search;

	// input size of array
	cout << "enter size of array: ";
	cin >> array_length;

	// initialize array
	int starting_array[array_length];

	// choose how to populate algorithm
	cout << "wanna fill array randomly or manually (r/m): ";
	cin >> population_method;

	// populate array
	if (population_method == 'r')
	{
		for (int i = 0; i < array_length; i++)
		{
			starting_array[i] = rand() % 10000;
		}
	}

	else if (population_method == 'm')
	{
		for (int i = 0; i < array_length; i++)
		{
			cout << "array element " << i << ": ";
			cin >> starting_array[i];
		}
	}

	else
	{
		cout << "error population method not found" << endl;
		return 0;
	}

	// output starting array
	for (int i = 0; i < array_length; i++)
	{
		if (i == array_length - 1)
			cout << starting_array[i];

		else
			cout << starting_array[i] << ", ";
	}

	// list algorithms
	cout << "\nenter search algorithm you wish to use:\n\n";
	cout << "1. linear\n2. binary\n3. jump\n4. exponential\n5. interpolation\n\n";

	// choose algorithm
	cout << "algorithm: ";
	cin >> algorithm;

	// search target
	cout << "what number do you want to search for: ";
	cin >> search;

	// perform algorithm
	if (algorithm == 1)
	{
		auto start = high_resolution_clock::now();
		int search_found = linear(starting_array, array_length, search);

		auto stop = high_resolution_clock::now();

		auto duration = duration_cast<microseconds>(stop - start);

		if (search_found != -1)
			cout << search << " was found in " << duration.count() << "miliseconds" << endl;
		else
			cout << search << "was not found in this array" << endl;
	}
}
