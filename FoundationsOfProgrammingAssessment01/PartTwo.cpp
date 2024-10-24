#include <iostream>
#include "PartTwo.h"

using namespace std;

int validArraySize(int size,int max) {

	//Remove negative numbers
	size = abs(size);
	int attempt = 3;
	while (size > max && attempt>0) {
		cout << "Invalid value, you have " << attempt<<" attempt(s).\nEnter a value less than " << max << ": ";
		cin >> size;

		attempt--;

		//clean screan
		system("cls");
	}

	if (attempt == 0) {
		cout << "Array defined with default value: " << max << "\n";
		return max;
	}

	return size;
}



void PersonalisedArray() {

	int size;
	int const max = 20;
	int arrayInteger[max];
	int inputNumber;

	int temp;

	cout << "Pleas, enter the array size (it would accept only non-negative numbers less than 20): ";
	cin >> size;
	size = validArraySize(size, max);

	cout << "Please, enter the elements values: \n";
	
	for (int i = 0; i < size; i++) {

		cin >> inputNumber;
		arrayInteger[i] = inputNumber;

	}

	cout << "Your sorted array is: \n";

	for (int i = 0; i < size; i++) {

		for (int j = i + 1; j < size; j++) {

			if (arrayInteger[i] > arrayInteger[j]) {
				temp = arrayInteger[i];
				arrayInteger[i] = arrayInteger[j];
				arrayInteger[j] = temp;
			}
		}
		cout << arrayInteger[i] << " ";
	}

	cout << "\n";
}