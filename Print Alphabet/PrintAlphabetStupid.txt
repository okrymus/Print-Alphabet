// The program print characters 
// Lab on Optional Arguments 
// Programmer: Panupong Leenawarat
// Last modified: 12/7/2015 

#include <iostream>
#include <cstdlib>
#include "Pototypes.h"
using namespace std;

int main()   //  main is DONE
{
	char select, firstLetter, lastLetter, input;
	int line;

	system("color 3F");
	printTitle();
	
	cout
		<< "Calling \"printAlpha()\"" << endl
		<< "\tPrinting from A to Z, 5 characters per line :" << endl << endl;
	printAlpha('A', 'Z', 5);

	cout
		<< endl << endl
		<< "Calling \"printAlpha(\'T\')\"" << endl
		<< "\tPrinting from T to Z, 5 characters per line :" << endl << endl;
	printAlpha('T');

	cout 
		<< endl << endl
		<< "Calling \"printAlpha('C', 'W')\"" << endl
		<< "\tPrinting from C to W, 5 characters per line :" << endl << endl;
	printAlpha('C','W');

	cout 
		<< endl << endl
		<< "Calling \"printAlpha('D', 'Y', 3)\"" << endl
		<< "\tPrinting from D to Y, 3 characters per line :" << endl << endl;
	printAlpha('D', 'Y', 3);

	cout << "\n\nDo you want to choose the arguments? ";
	select = getYorN();      
	
	while (select == 'Y' || select == 'y')
	{
		cout << "\nPeoples' choice! ;)" << endl;

		cout << "\tEnter the starting letter: ";
		cin >> firstLetter;     cin.ignore(80, '\n');

		cout << "\tEnter the ending letter: ";
		cin >> lastLetter;      cin.ignore(80, '\n');
		cout
			<< "\tHow many letters do you want me to print per line" << endl
			<< "\t    (if you hit ENTER I will use the default value): ";
		cin.get(input);    
		cout << endl;

		if (input != '\n')  
		{
			cin.putback(input);    
			cin >> line;	cin.ignore(80, '\n');

			cout << "Calling \"printAlpha(\'" << firstLetter << "\', \'" << lastLetter << "\', " << line << ")\"" << endl << endl;
			printAlpha(firstLetter, lastLetter, line);
		}
		else
		{
			cout << "Calling \"printAlpha(\'" << firstLetter << "\', \'" << lastLetter << "\')\"" << endl << endl;
			printAlpha(firstLetter, lastLetter);
		}
		
		cout << "\n\nDo you want to choose the arguments again? ";
		select = getYorN();   
	}
	cout << "Closing the program" << endl;
	system("pause");
	return 0;
}