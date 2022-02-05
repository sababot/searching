#include <iostream>



using namespace std;

int main()
{
	// variable intitialization
	int algorithm;
	int array_length;
	char population_method;

	// input size of array
	cout << "enter size of array: ";
	cin >> array_length;

	// initialize array
	int starting_array[array_length];

	// choose how to populate algorithm
	cout << "wanna fill array randomly or manually (r/m): ";
	cin >> population_method;

	// list algorithms
	cout << "enter search algorithm you wish to use:\n\n";
	cout << "1. linear\n2. binary\n3. jump\n4. exponential\n5. interpolation\n\n";

	// choose algorithm
	cout << "algorithm: ";
	cin >> algorithm;

	// perform algorithm
	switch (algorithm)
	{
		case 1:
			cout << "array not yet implemented" << endl;
			break;

		case 2:
			cout << "array not yet implemented" << endl;
			break;
		
		case 3:
			cout << "array not yet implemented" << endl;
			break;
		
		case 4:
			cout << "array not yet implemented" << endl;
			break;
		
		case 5:
			cout << "array not yet implemented" << endl;
			break;
		
		case 6:
			cout << "array not yet implemented" << endl;
			break;
		
		case 7:
			cout << "array not yet implemented" << endl;
			break;
	}
}
