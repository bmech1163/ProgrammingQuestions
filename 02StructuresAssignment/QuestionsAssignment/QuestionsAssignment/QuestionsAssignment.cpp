// QuestionsAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;

class Questions {
private:
	int QuestionNumber; // Variable to store the question number
	string QuestionText; // Variable to store the question text
	string Answer1Text; // Variable to store the answer 1 text
	string Answer2Text; // Variable to store the answer 2 text
	string Answer3Text; // Variable to store the answer 3 text
	int CorrectAnswer; // Variable to store the correct answer 1
	int UserAnswer = 0; // Variable to store the user's answer
	
public:
	// Constructor
	Questions(int qNum, string q, string a1, string a2, string a3, int corAns) {
		QuestionNumber = qNum;
		QuestionText = q;
		Answer1Text = a1;
		Answer2Text = a2;
		Answer3Text = a3;
		CorrectAnswer = corAns;
	}

	void displayQuestion() {
		cout << "Question " << QuestionNumber << ": " << QuestionText << endl;
		cout << "1. " << Answer1Text << endl;
		cout << "2. " << Answer2Text << endl;
		cout << "3. " << Answer3Text << endl;
		cout << "Enter your answer (1-3): ";
		cin >> UserAnswer;
		if (UserAnswer == CorrectAnswer) {
			cout << "Correct!" << endl;
		} else {
			cout << "Incorrect. The correct answer is: " << CorrectAnswer << endl;
		}
	}	

};

int main()
{
	Questions q1(1, "What is the smallest Country?", "The United States", "The United Kingdom", "The Vatican City", 3);
	Questions q2(2, "What is the biggest animal in the world?", "Elephant", "Blue Whale", "Great White Shark", 2);
	Questions q3(3, "What is the largest planet in our solar system?", "Jupiter", "Earth", "Mercury", 1);
	q1.displayQuestion();
	q2.displayQuestion();
	q3.displayQuestion();

    system("pause>0");
}
