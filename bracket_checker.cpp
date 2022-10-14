#include <iostream>
#include <stack>
#include <string>
#include <utility>
#include <unordered_set>

using namespace std;

//bool checkPair(char bracket1, char bracket2)
//{
//
//}
//

int main()
{
	stack<char> brackets;
	string input;
	unordered_set<pair<char, char>> bracket_pairs;
	//bracket_pairs.insert("(", ")");
	//bracket_pairs.insert("{", "}");
	//bracket_pairs.insert("[", "]");
	//bracket_pairs.insert("<", ">");

	// hash function to insert pairs to unordered set

	cout << "Welcome to bracket checker!\n";
	cout << "It checks if given brackets are in correct order.\n";
	cout << "Valid brackets include : () { } [] < >.Every other character will be ignored.\n";
	cout << "Insert brackets: ";

	//for (auto x : bracket_pairs)
	//{
	//	cout << x.first << x.second << endl;
	//}

	//cin >> input;

	//for (char i = 0; i < input.length(); i++)
	//{
	//	brackets.push(input[i]);
	//	cout << brackets.top() << "\n";
	//}


}

// goal of the app is to check if brackets in array are in correct order and if they are all closed

// TODO:
// iterate through the string and push every char to stack
// after each iteratiorn check if first and second items are matching brackets:
//		if yes, pop them from the stack
//		if no, continue
// after every succesfull pop there should be another check of two first items in stack