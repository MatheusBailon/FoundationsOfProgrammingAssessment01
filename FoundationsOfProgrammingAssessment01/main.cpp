#include <iostream>
#include <string>
#include <cstdlib>
#include "PartTwo.h"

using namespace std;

void CreatingStructure() {

	/*GROUPING DIFFERENT DATATYPES USING STRUCT AND ASSINING TO X AND Y*/

	struct point {
		int x;
		float y;
	};

	point line;
	line.x = 10;
	line.y = 17.32;

	cout << "This is the value of x from struct line: " << line.x << "\n";
	cout << "This is the value of y from struct line: " << line.y << "\n";
}

void ArrayOfStruct() {

	/*CREATING AN ARRAY OF STRUCTS*/

	struct movie {
		string name;
		int releaseYear;
		float rate;
	};

	movie recommendation[3];

	cout << "Informe a recommendation movie list with at least 4 movies \n\n";

	for (int i = 0; i < 3; i++) {
		cout << "Tell us about the movie number " << i+1 << "\n\n";
		cout << "Name: ";
		getline(cin, recommendation[i].name);

		cout << "Year of release: ";
		cin >> recommendation[i].releaseYear;

		
		cout << "Rate between 0-10: ";
		cin >> recommendation[i].rate;

		//To clean the buffer befor the next call of the method getline;
		while (cin.get() != '\n');
		cout << "NEXT\n\n";
	}

	//Clean the command prompt
	system("cls");
	for (int i = 0; i < 3; i++)
	{
		cout << "Movie " << i+1 << "\n";
		cout << recommendation[i].name << "\n";
		cout << recommendation[i].releaseYear << "\n";
		cout << recommendation[i].rate << "\n\n";
	}
}

/*UING UNION AND CHANGE THEIR PROPERTIE VALUES*/
void UsingUnion() {
	union Changeble {
		int x;
		int y;
	};

	Changeble unionVariable;

	unionVariable.x = 10;
	cout << "First Value of Union 'X': " << unionVariable.x << "\n";

	unionVariable.y = 34;
	cout << "First Value of Union 'Y': " << unionVariable.y << "\n";
	
	cout << "\n\n";

	unionVariable.x = 5;

	cout << "'X' after alteration: " << unionVariable.x << "\n";
	cout << "'Y' after alteration of 'X': " << unionVariable.y << "\n";
}

/*USING ENUM*/
void UsingEnumeration() {
	enum TraficLight {
		
		//0
		green,

		//1
		yellow,

		//2
		red
	};

	TraficLight mainAvanue = green;

	switch (mainAvanue) {
	case green:
		cout << "(" << mainAvanue << ") Go!\n";
		break;
	case yellow:
		cout << "(" << mainAvanue << ") Atention!\n";
		break;
	case red:
		cout << "(" << mainAvanue << ") STOP!!\n";
		break;
	}

}

/*USING TYPEDEF*/
void UsingTypeDef() {
	typedef string chocolate;

	chocolate myNewString = "I have a new Type";
	cout << myNewString << "\n";
}

void main() {
	PersonalisedArray();
}