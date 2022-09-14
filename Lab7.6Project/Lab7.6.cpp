//Lab7.6.cpp - calculates and displays the average price
//Created/revised by Anna Zachary on 11/25/18

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numPrices = 0;    //counter
	double price = 0.0;
	double totalPrice = 0.0;  //accumulator
	double avgPrice = 0.0;

	cout << "Price (negative number to end): ";
	cin >> price;
	while (price >= 0.0)
	{
		numPrices += 1;
		totalPrice += price;
		cout << "Next price: ";
		cin >> price;
	} //end while

	if (numPrices > 0)
		avgPrice = totalPrice / numPrices;
	else
		avgPrice = 0.0;
	// end if
	cout << fixed << setprecision(2) << endl;
	cout << "Average price: " << avgPrice << endl;
	
	//holds output open
	cin.clear();
	cin.ignore();
	cin.get();

	return 0;
}	//end of main function