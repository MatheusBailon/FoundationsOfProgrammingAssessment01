#include <iostream>
#include "PartTwo.h"

using namespace std;

int validArraySize(int size,int max) {

	int attempt = 3;
	while (size > max && attempt>0) {
		cout << "Invalid value, you have " << attempt<<" attempt(s).\nEnter a value less than " << max << ": ";
		cin >> size;

		attempt--;
		system("cls");
	}

	if (attempt == 0)
		cout << "Array defined with default value: " << max << "\n";

	return size;
}



void PersonalisedArray() {

	int size;
	int const max = 20;
	int arrayInteger[max];
	int inputNumber;

	int less;
	int greater;

	cout << "Pleas, enter the array size: ";
	cin >> size;
	size = validArraySize(size, max);

	cout << "Please, enter the elements values: \n";
	
	for (int i = 0; i < size; i++) {

		cin >> inputNumber;
		arrayInteger[i] = inputNumber;
		if (i != 0) {
			if (arrayInteger[i - 1] > arrayInteger[i]) {
				greater = arrayInteger[i - 1];
				less = arrayInteger[i];
			}
			else {
				greater = arrayInteger[i];
				less = arrayInteger[i - 1];
			}

			arrayInteger[i - 1] = less;
			arrayInteger[i] = greater;
		}
	}

	cout << "Your sorted array is: \n";

	for (int i = 0; i < size; i++) {
		cout << arrayInteger[i] << " ";
	}

	cout << "\n";
}

