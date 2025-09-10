// This program will prompt a user if they want to input 5 characters and convert to ascii values and write them to a file.
// or if they want to read ascii values from a file and convert them to characters.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char run = 'y';
	while (run == 'y' || run == 'Y')
	{
		char choice = 'c';
		cout << "Do you want to input 5 characters (C) or read from a file (R)? ";
		cin >> choice;
		fstream myFile;
		// Code creating a file with ascii values
		if (choice == 'C' || choice == 'c')
		{
			myFile.open("ascii_values.txt", ios::out);
			if (myFile.is_open())
			{
				char input[6]; // 5 characters + null terminator
				cout << "Enter 5 characters: ";
				cin >> input;
				for (int i = 0; i < 5; ++i)
				{
					myFile << static_cast<int>(input[i]) << endl; // Write ascii values to file
				}
				myFile.close();
				cout << "Ascii values written to file." << endl;
			}
			else 
			{
				cout << "Error opening file." << endl;
			}
		}

		// Code reading a file with ascii values and converting them to characters
		else if (choice == 'R' || choice == 'r')
		{
			myFile.open("ascii_values.txt", ios::in);
			if (myFile.is_open())
			{
				int asciiValue;
				while (myFile >> asciiValue)
				{
					cout << static_cast<char>(asciiValue) << " "; // Convert ascii values to characters
				}
				cout << endl;
				myFile.close();
				cout << "Ascii values read from file: " << endl;
			}
			else 
			{
				cout << "Error opening file." << endl;
			}
			
		}
		// Invalid choice handling
		else 
		{
			cout << "Invalid choice. Please enter 'C' or 'R'." << endl;
		}
		
		// Ask user if they want to run the program again
		cout << "Do you want to run the program again? (y/n): ";
		cin >> run;

	}
}

