#include "Pototypes.h"
#include <iostream>
#include <iomanip>
using namespace std;

//  dedinitions DONE

void printTitle()   //  DONE
{
	cout
		<< endl
		<< "\t              Lab on Optional Arguments                 " << endl
		<< "\t                  By Lee. Panupong                      " << endl << endl;
}

void printAlpha(char firstLetter, char lastLetter, int line)   //  DONE
{
	int count = 1;
	for ( ; firstLetter <= lastLetter; firstLetter++)  
		cout << firstLetter << (count++ % line == 0 ? "\n" : "      ");   
		
}

char getYorN()   //  DONE
{
	char select;
	cin >> select;  cin.ignore(80, '\n');

	while (!(select == 'y' || select == 'n' || select == 'Y' || select == 'N'))
	{
		cout << "Please type Y or N. Try again :";
		cin >> select;  cin.ignore(80, '\n');
	}
	return select;
}


