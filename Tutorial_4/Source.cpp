// Tutorial 4 assignment
// Make a receipt to display the value of a transaction
// Cole Lamothe 100711084

#include <iostream>
#include <iomanip> // Loads the stream manipulating commands such as setw and such

using namespace std;

int main() {
	// Variable Declaration
	int coffee; // Number of coffees purchased
	double coffeePrice = 4.99; // Base price for coffee
	int doughnut; // Number of doughnuts purchased
	double doughnutPrice = 1.99; // Base price for doughnuts
	double subTotal;
	double total; // Total transaction price
	double hst = 0.13;

	// Input stage
	cout << "This program generates a receipt for the purchase of coffeee and doughnuts" << endl;

	cout << "Enter the number of coffee's purchased: " << endl; // Gets coffee input
	cin >> coffee;

	cout << "Enter the number of doughnuts purchased: " << endl; // Gets doughnut input
	cin >> doughnut;

	system("CLS"); // Clears the displayed lines on the command line to create a clean receipt output

	// Calculations
	subTotal = (coffee*coffeePrice) + (doughnut*doughnutPrice);
	total = subTotal * (1 + hst); // calculates total tax by multiplying by 1.13

	// Header
	cout << "Jim Hortons" << endl;
	cout << "Customer Receipt" << endl;
	cout << setfill ('-') << setw (17) << "-" << endl; // Changes fill character to '-' and inserts 18 of them
	cout << setfill(' '); // Changes fill character back to ' '
	// Body
	cout << left << setw(12) << "Coffee" <<  setw(1) << "x" << left << setw(9) <<coffee << right << setw (8) << fixed << setprecision(2) << showpoint << coffeePrice * coffee << endl;
	cout << left << setw(12) << "Doughnut" <<  setw(1) << "x" << left << setw(9) << doughnut  << right << setw (8) << fixed << setprecision(2) << showpoint << doughnut*doughnutPrice << endl;
	cout << endl; // inserts spacing line
	// Totals
	cout << left << setw(12) << "Subtotal" << right << setw(18) << fixed << setprecision(2) << showpoint << subTotal << endl;
	cout << left << setw(12) << "HST" << setw(1) << "%" << left << setw(9) << "13" << right << setw(8) << fixed << setprecision(2) << showpoint << subTotal*hst << endl;
	cout << endl;
	cout << left << setw(12) << "Total" << right << setw(18) << fixed << setprecision(2) << showpoint << total << endl;
	cout << "\n \n" << endl; // Pushes continue prompt out of the receipt space



	system("pause");
	return 0;
}