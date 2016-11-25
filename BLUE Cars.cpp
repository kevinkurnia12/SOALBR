// 14C5

#include <iostream>
#include <ctime>
#include <string.h>
#include <windows.h>

#define SIZE 3000

using namespace std;

int main() 
{
	time_t t = time(0);
	char userCar[SIZE];
	int carYear;
	int carPrice;
	int year;
	int cent = 10;
		
	system("COLOR 0F");
	cout << "\n\t\t\t\t   Blue's Car\n\t\t\t   ";
	for (int a = 0; a <= 25; a++) {
		cout << "=";
	}
	
	cout << endl << endl << endl << "Welcome to Blue's Car Price Simulator";
	cout << endl << "Today's Date : " << asctime(localtime(&t));
	
	cout << endl << endl << "Please input your car type [2...20] : ";
	gets(userCar);
	if(strlen(userCar) < 2 || strlen(userCar) > 20) {
		cout << endl << "You cannot input your car type less than 2 and greater than 20 characters";
		return 0;
	}
	
	cout << endl << "Note : We cannot buy 1 year old car :)";
	cout << endl << "Please input purchasing year of the car [2000 - 2014] : ";
	cin >> carYear;
	if (carYear == 2015 || carYear < 2000) {
		cout << endl << "We cannot buy 1 year old car and below 2000 years";
		return 0;
	}

	cout << endl << endl << "Please input price of the car when it was purchased in " << carYear << " [100.000.000 - 300.000.000] : ";
	cin >> carPrice;
	if (carPrice < 100000000 || carPrice > 300000000) {
		cout << endl << "Sorry, We cannot purchased price under 100.000.000 and above 300.000.000";
		return 0;
	}
	
	cout << endl << endl << endl << "\t\t\t\tPlease wait.....";
	Sleep(1500);
	
	cout << endl << endl << "These are the info of your " << userCar << " car with Rp. " << carPrice << " price :\n";
	
	for (int year = carYear+1; year <= 2016; year++) {
		carPrice = carPrice - (carPrice * cent/100);
		cout << "In " << year << " Car Price = Rp. " << carPrice << ", because of " << cent << "% Price reduction" << endl;
		cent = cent - 2;
		if (cent <= 4)
			cent = 4;
	}
	
	if (carYear+1 <= 2016 && carYear+1 >= 2012) {
		cout << endl << endl << "Your car condition still ok\n\n";
	}
	else {
		cout << endl << endl << "Before selling, your car need maintenance\n\n";
	}
	getchar();
	
	return 0; 
}
