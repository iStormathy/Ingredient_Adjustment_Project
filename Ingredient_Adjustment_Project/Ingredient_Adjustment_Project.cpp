// This program calculates the ingredients for a cookie recipe,
// and then makes adjustments according to the ammount requested.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double recipe = 48; // Number of cookies for the original recipe.
	double originalSugar = 1.5/recipe; // Adjusts ingredient ammount to fit various requests
	double originalButter = 1.0 / recipe;
	double originalFlour = 2.75 / recipe;
	int cookieRequest;
	cout << "How many cookies would you like to make?" << endl;
	cin >> cookieRequest;
	double reqSugar = originalSugar * cookieRequest; // Adjusted value of ingredients for requested cookies.
	double reqButter = originalButter * cookieRequest;
	double reqFlour = originalFlour * cookieRequest;
	cout << "To make " << cookieRequest << " cookies, you will need the following ingredients:" << endl;
	cout << fixed << setprecision(2) << reqSugar << " cups of sugar" << endl;
	cout << fixed << setprecision(2) << reqButter << " cups of butter" << endl;
	cout << fixed << setprecision(2) << reqFlour << " cups of flour" << endl;
	return 0;
}