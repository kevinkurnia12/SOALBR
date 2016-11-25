// 14C5

#include <iostream>
#include <cstring>
#include <cctype>
#include <windows.h>

#define SIZE 200

using namespace std;

struct Library {
	char title[SIZE];
	char author[SIZE];
	int year;
};

int book();
int collection();

int main ()
{
	// Library book[4];
	
	system("COLOR 0F");
	cout << "\n\t\t\t\tWelcome to Blue's Library\n\t\t\t   ";
	for (int a = 0; a <= 34; a++) {
		cout << "=";
	}
	
	/*
	cout << endl << endl;
	for (int x = 0; x <= 3; x++) {
		cout << endl << "Insert book title : ";
		gets(book[x].title);
		cout << "Insert book author : ";
		gets(book[x].author);
		cout << "Insert book publisher year : ";
		cin >> book[x].year;
		cin.ignore();
	}
	
	cout << endl << endl << "Processing...";
	Sleep(1500);
	
	cout << endl << endl << "Our Collection : ";
	for (int no = 0; no <= 3; no++) {
		cout << endl << no+1 << ".";
		cout << " Shelf Code : " << book[0].title;
		for (int a = 0; a < strlen(book.title[a]; a++)) {
			if (isspace(book.title)) {
				book.title[a+1] = toupper(book.title[a+1]);
				cout << book.title[a+1];
			}
		}
		cout << "\tBook Code : " << book.title[0];
		for (int b = 0; b < strlen(book.title[b]; b++)) {
			if (isspace(book.title)) {
				book.title[b+1] = toupper(book.title[b+1]);
				cout << book.title[b+1];
			}
		}
		cout << book[no].year;
	}
	
	*/
	
	cout << endl << endl;
	for (int no = 1; no <= 4; no++) {
	book();
	}
	
	return 0;
}

int book() {
	char title[SIZE];
	char author[SIZE];
	int year;
	
	cout << endl << "Insert book title : ";
	gets(title);
	cout << "Insert book author : ";
	gets(author);
	cout << "Insert book publisher year : ";
	cin >> year;
	cin.ignore();
	
	cout << endl << endl << "Processing...";
	Sleep(1500);
	
	cout << endl << endl << "Our Collection : ";
	cout << endl << "1.";
	cout << " Shelf Code : " << title[0];
	for (int x = 0; x < strlen(title); x++) {
		if (isspace(title[x])) {
			title[x+1] = toupper(title[x+1]);
			cout << title[x+1];
		}
	}
	cout << "\n   Book Code : " << title[0] << author[0] << year;
	cout << endl << "   Title : " << title;
	cout << endl << "   Author : ";
	for (int y = 0; y < strlen(author); y++) {
		author[y] = toupper(author[y]);
	}
	cout << author;
	cout << endl << "   Publish Year : " << year;
	
	cout << " Shelf Code : " << title[0];
	for (int x = 0; x < strlen(title); x++) {
		if (isspace(title[x])) {
			title[x+1] = toupper(title[x+1]);
			cout << title[x+1];
		}
	}
	cout << "\n   Book Code : " << title[0] << author[0] << year;
	cout << endl << "   Title : " << title;
	cout << endl << "   Author : ";
	for (int y = 0; y < strlen(author); y++) {
		author[y] = toupper(author[y]);
	}
	cout << author;
	cout << endl << "   Publish Year : " << year;
}
	
