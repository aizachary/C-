//Advanced17Project.cpp - converts American dollars to different currencies
//Created/revised by Anna Zachary on 11/18/18

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int choice = 0;
	int americanDollars = 0;
	double convertedValue = 0.0;
	const double CANADIAN_DOLLAR = 1.25;
	const double EURO = 0.89;
	const double RUPEE = 61.78;
	const double YEN = 119.59;
	const double PESO = 14.96;
	const double SA_RAND = 11.75;
	const double POUND = 0.65;

	//display currencies
	cout << "1 Canadian Dollar" << endl;
	cout << "2 Euro" << endl;
	cout << "3 Indian Rupee" << endl;
	cout << "4 Japanese Yen" << endl;
	cout << "5 Mexican Peso" << endl;
	cout << "6 South African Rand" << endl;
	cout << "7 British Pound" << endl;
	cout << endl << "Enter 1 through 7: ";
	cin >> choice;

	if (choice < 1 || choice > 7)
		cout << "Invalid choice" << endl;
	else
	{
		cout << "Enter number of American Dollars: ";
		cin >> americanDollars;

		//determine whether the dollars are less than 0
		if (americanDollars < 0)
			cout << "The American Dollars entry must be a positive number." << endl;
		else
		{
			//display output with two decimal places
			cout << fixed << setprecision(2);

			//convert American dollars
			switch (choice)
			{
			case 1:
				convertedValue = americanDollars * CANADIAN_DOLLAR;
				cout << "Canadian Dollar: " << convertedValue << endl;
				break;
			case 2:
				convertedValue = americanDollars * EURO;
				cout << "Euro: " << convertedValue << endl;
				break;
			case 3:
				convertedValue = americanDollars * RUPEE;
				cout << "Indian Rupee: " << convertedValue << endl;
				break;
			case 4:
				convertedValue = americanDollars * YEN;
				cout << "Japanese Yen: " << convertedValue << endl;
				break;
			case 5:
				convertedValue = americanDollars * PESO;
				cout << "Mexican Peso: " << convertedValue << endl;
				break;
			case 6:
				convertedValue = americanDollars * SA_RAND;
				cout << "South African Rand: " << convertedValue << endl;
				break;
			default:
				convertedValue = americanDollars * POUND;
				cout << "British Pound: " << convertedValue << endl;
			}   //end switch
		}	//end if
	}	//end if

	//holds output window open in visual studio
	cin.clear();
	cin.ignore();
	cin.get();

	return 0;
}	//end of main function
