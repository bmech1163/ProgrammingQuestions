// 02Structures.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

struct Smartphone {
    string name;
	int storageSpace;
    string color;
    float price;
};

struct Person {
	string name;
	int age;
	Smartphone smartphone; // Composition: Person has a Smartphone
};

void printSmartphoneInfo(Smartphone smartphone) {
	cout << "           Name: " << smartphone.name << endl;
	cout << "  Storage Space: " << smartphone.storageSpace << " GB" << endl;
	cout << "          Color: " << smartphone.color << endl;
	cout << "          Price: $" << smartphone.price << endl;
}

void printPersonInfo(Person person) {
	cout << "           Name: " << person.name << endl;
	cout << "            Age: " << person.age << endl;
	printSmartphoneInfo(person.smartphone);
}

int main()
{
    Smartphone smartphone;
	smartphone.name = "iPhone 12";
	smartphone.storageSpace = 32; // in GB
	smartphone.color = "Black";
	smartphone.price = 999.99; // in USD

	Smartphone smartphone2;
	smartphone2.name = "Samsung Galaxy S21 Ultra";
	smartphone2.storageSpace = 64; // in GB
	smartphone2.color = "Gray";
	smartphone2.price = 888.88; // in USD

	printSmartphoneInfo(smartphone);
	cout << endl;
	printSmartphoneInfo(smartphone2);
	cout << endl;
	Person p;
	p.name = "Brian";
	p.age = 61;
	p.smartphone = smartphone2; // Assigning smartphone to person

	printPersonInfo(p);
    
    system("pause>0");
}