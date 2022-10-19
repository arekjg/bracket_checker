#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

bool checkPair(char bracket1, char bracket2)
{
	// Char arrays with open brackets and close brackets
	char brackets_open[4] = { '(', '{', '[', '<' };
	char brackets_close[4] = { ')', '}', ']', '>' };

	// Check if given brackets are their self opposites
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
	// vector storing all valid brackets
	vector<char> br{ '(', '{', '[', '<', ')', '}', ']', '>' };

	// Initialize stack and user input
	stack<char> brackets;
	string input;

	cout << "Welcome to bracket checker!\n";
	cout << "It checks if given brackets are in correct order.\n";
	cout << "Valid brackets include : () {} [] <>. Every other character will be ignored.\n";
	cout << "Insert brackets in one line: ";
	getline(cin, input);

	for (int i = 0; i < input.length(); i++)
	{
		// Check if character from input is a bracket (if not, it will be ignored)
		int check = 0;
		for (int j = 0; j < 8; j++)
		{
			if (input[i] == br[j])
			{
				check++;
			}
		}

		if (check > 0)
		{
			// If stack is empty, push char on top
			if (brackets.empty())
			{
				brackets.push(input[i]);
			}
			// If checkPair is true, pop from stack
			else if (checkPair(brackets.top(), input[i]))
			{
				brackets.pop();
			}
			// If stack is not empty and checkPair is false, push char on top
			else
			{
				brackets.push(input[i]);
			}
		}
	}

	// Check if stack is empty
	if (brackets.empty())
	{
		cout << "Valid!";
	}
	else
	{
		cout << "Invalid!";
	}
}