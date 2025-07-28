#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream myFile;

	myFile.open("brian.txt", ios::out); // 1st Create the file brian.txt for writing. *if one exists, it will be overwritten
	if (myFile.is_open())
	{
		myFile << "Hello\n";
		myFile << "This is the second line\n";
		myFile.close(); // Close the file after writing
	}
	
	myFile.open("brian.txt", ios::app); // Then to add to exhisting file use append
	if (myFile.is_open())
	{
		myFile << "Hello2\n";
		myFile << "This is the fourth line\n";
		myFile.close(); // Close the file after writing
	}

	myFile.open("brian.txt", ios::in); // this will read from the file brian.txt
	if (myFile.is_open()) 
	{
		string line;
		while (getline(myFile, line)) {
			cout << line << endl; // Print each line to the console
		}
		myFile.close(); // Close the file after reading
	}

    system("pause>0");
}

