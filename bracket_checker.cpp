#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

class BracketTypes
{
	public:
		// Char arrays with open brackets and close brackets
		char brackets_open[4] = { '(', '{', '[', '<' };
		char brackets_close[4] = { ')', '}', ']', '>' };
		vector<char> br{ '(', '{', '[', '<', ')', '}', ']', '>' };
};

bool checkPair(char bracket1, char bracket2)
{
	// Create an object of BracketTypes
	BracketTypes chP;

	// Check if given brackets are their self opposites
	for (int i = 0; i < 4; i++)
	{
		if (bracket1 == chP.brackets_open[i] && bracket2 == chP.brackets_close[i])
		{
			return true;
		}
	}
	return false;
}

int main()
{
	// Initialize stack and user input
	stack<char> brackets;
	string input;

	// Create an object of BracketTypes
	BracketTypes chP;

	cout << "Welcome to bracket checker!\n";
	cout << "It checks if given brackets are in correct order.\n";
	cout << "Valid brackets include : () {} [] <>. Every other character will be ignored.\n";
	cout << "Insert brackets in one line: ";
	cin >> input;

	// Push first bracket from user's input to stack
	brackets.push(input[0]);

	for (char i = 1; i < input.length(); i++)
	{
		// IGNORE OTHER CHARACTERS THAN BRACKETS
		//if (find(chP.br.begin(), chP.br.end(), input[i]) != chP.br.end())
		//{

		//}


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

// add ignoring other characters than brackets