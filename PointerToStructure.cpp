// PointerToStructure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct SPCA {
	string dogName;
	string dogBreed;
	int dogAge;
	float dogHeight;

	//constructor
	SPCA(string dn = "", string db = "", int da = 0, float dh = 0.0) {
		dogName = dn;
		dogBreed = db;
		dogAge = da;
		dogHeight = dh;

	}
};

void inputValue(struct SPCA ani);

int main()
{
	SPCA animal;
	//cout << animal.dogHeight+5;
	SPCA* ptr;
	ptr = &animal; //& refers to the memory address to be assigned to ptr
	cout << "\nThe value of SPCA name is " << animal.dogName;
	cout << "\nThe memory address of animal is " << ptr;

	int x = 5;
	int* xp;
	xp = &x;
	cout << "\nThe value of x is " << x;
	cout << "\nThe memory address of xp is " << &x;


	int y = 5;
	int* yp;
	yp = &y;
	cout << "\nThe value of x is " << y;
	cout << "\nThe memory address of xp is " << &y;

}

void inputValue(struct SPCA ani) {
	cout << "\nInput name of the dog: ";
	getline(cin, ani.dogName);
	cout << "\nInput breed of the dog: ";

}