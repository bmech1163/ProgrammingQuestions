#include <iostream>
// using namespace std; // not good to use as it pulls in so much
using std::cout; // one way to not use std 
using std::endl; // another way to not use std

namespace namespace1 {
	int age = 25;
	std::string name = "Alice"; // another way to not use std
}

namespace namespace2 {
	int age = 30;
}

int main()
{
	cout << namespace1::age << endl;
	cout << namespace1::name << endl;

	system("pause>0");
}