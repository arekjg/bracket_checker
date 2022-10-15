#include <iostream>
#include <stack>
#include <string>

using namespace std;


bool checkPair(char bracket1, char bracket2)
{
	// Initializing char arrays with open brackets and close brackets
	char brackets_open[4] =	 { '(', '{', '[', '<' };
	char brackets_close[4] = { ')', '}', ']', '>' };

	for (int i = 0; i < 4; i++)
	{
		if (bracket1 == brackets_open[i] && bracket2 == brackets_close[i])
		{
			return true;
		}
	}
	return false;
}

int main()
{
	// Initializing stack and user input
	stack<char> brackets;
	string input;


	cout << "Welcome to bracket checker!\n";
	cout << "It checks if given brackets are in correct order.\n";
	cout << "Valid brackets include : () {} [] <>. Every other character will be ignored.\n";
	cout << "Insert brackets in one line: ";
	cin >> input;

	/*
	for (int i = 0; i < input.length(); i++)
	{
		brackets.push(input[i]);
		cout << brackets.top() << "\n";
		if (i > 0)
		{
			if (checkPair)
			{
				cout << "True";
			}
			else
			{
				cout << "False";
			}
		}
	}
	*/


	// Push first bracket from user's input to stack
	brackets.push(input[0]);

	for (char i = 1; i < input.length(); i++)
	{
		if (checkPair(brackets.top(), input[i]))
		{
			brackets.pop();
		}
		else
		{
			brackets.push(input[i]);
		}
	}

	if (brackets.empty())
	{
		cout << "Valid!";
	}
	else
	{
		cout << "Invalid!";
	}


}

// goal of the app is to check if brackets in array are in correct order and if they are all closed

// TODO:
// iterate through the string and push every char to stack	- DONE
// after each iteratiorn check if first and second items are matching brackets:
//		if yes, pop them from the stack
//		if no, continue
// after every succesfull pop there should be another check of two first items in stack


// problem to fix: when first and second brackets are matching the error pops up, because the stack is empty in this moment