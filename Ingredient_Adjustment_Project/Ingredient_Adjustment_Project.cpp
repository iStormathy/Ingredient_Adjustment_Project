// This program calculates the ingredients for a cookie recipe,
// and then makes adjustments according to the ammount requested.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int originalRecipe = 48, request; // Number of cookies for the original recipe.
	cout << "How many cookies would you like to make?" << endl;
	cin >> request;
	double sugar = request * (1.5 / originalRecipe); // adjusts the proportions according to specific requests
	double butter = request * (1.0 / originalRecipe);
	double flour = request * (2.75 / originalRecipe);
	cout << "To make " << request << " cookies, you will need the following ingredients:" << endl;
	cout << fixed << setprecision(2) << sugar << " cups of sugar" << endl;
	cout << fixed << setprecision(2) << butter << " cups of butter" << endl;
	cout << fixed << setprecision(2) << flour << " cups of flour" << endl;
	return 0;
}