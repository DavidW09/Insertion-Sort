// InsertionSort.cpp : Defines the entry point for the console application.
#include <iostream>
using namespace std;

void InsertionSort(int[], int);

int main()
{
	// get number of array elements from user
	int numberOfElements;
	cin >> numberOfElements;
		
	int array[numberOfElements];
	
	//fill up the array
	for (int i = 0; i < numberOfElements; i++)
	{
		cin >> array[i];
	}

	// Sort the array
	InsertionSort(array, numberOfElements);

	// print array
	for (int index = 0; index < numberOfElements; index++)
	{
		cout << "\n" << array[index];
	}

	return 0;
}

void InsertionSort(int array[], int numberOfElements)
{
	int value, index, current;
	
	for (current = 1; current < numberOfElements; current++)
	{
		value = array[current];
		index = current - 1;
		// if index's value is > current's value then go down in index til its not true - sorting where value is placed.
		while ((index >= 0) && (array[index] > value))
		{
			array[index + 1] = array[index];
			index = index - 1;
		}
		// Sets value in array
		array[index + 1] = value;
	}
}
