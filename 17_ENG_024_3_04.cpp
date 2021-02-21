//Header files
#include<iostream>
#include<string>

//declare namespace
using namespace std;

//declare class
class STACK
{
	//public variables and functions
public:

	//declare public variables
	char data;
	STACK *next;

	//equal to the NULL value
	STACK *top = NULL;

	//Function list
	void push(char val);
	void pop(char value);
	int empty();
	void show();

};

//Watch the list is empty or not
int STACK::empty()
{
	//conditon checking
	if (top == NULL)
	{
		return 1;
	}
}

//main function
int main()
{
	//declare variable
	string s;

	//output to the console window
	cout << "Input mathematical expression : ";

	//getting user input
	cin >> s;

	//getting space lines
	cout << endl << endl << endl;

	//create object
	STACK ob1;

	//looping
	for (int i = 0; i < s.length(); i++)
	{
		//condition checking
		if (s[i] == '(' || s[i] == '[' || s[i] == '{')
		{
			//calling push function
			ob1.push(s[i]);
		}

		//condition checking
		if (s[i] == ')' || s[i] == ']' || s[i] == '}')
		{
			//condition checking
			if (ob1.empty() == 1)
			{
				//output to the console window
				cout << "\n\t\tInvalid expression......!!!\n\n\n\n";

				//pause the output
				system("pause");

				//exit the programme
				exit(0);

			}

			//declare variable
			char temp;

			//conditon checking
			if (s[i] == ')')
			{
				temp = '(';
			}
			//conditon checking
			else if (s[i] == ']')
			{
				temp = '[';
			}
			//conditon checking
			else
			{
				temp = '{';
			}
		//calling pop function
				ob1.pop(temp);
			
		}


	}
	//calling show function
	ob1.show();
	
	system("pause");
	return 0;

}

//push function
void STACK::push(char val)
{
	STACK *pnt = new STACK();

	//add data to stack
	pnt->data = val;
	pnt->next = top;
	top = pnt;

}

//pop function
void STACK::pop(char value)
{
	//conditon checking
	if (empty() == 1)
	{
		//output to the console window
		cout << "\n\t\tInvalid expression......!!!\n\n\n\n";

		//pause the output
		system("pause");

		//exit the programme
		exit(0);

	}
	//conditon checking
	else
	{
		STACK *pnt = top;
		
		//conditon checking
		if (top->data != value)
		{
			//output to the console window
			cout << "\n\t\tInvalid expression......!!!\n\n\n\n";

			//pause the output
			system("pause");

			//exit the programme
			exit(0);
		}
		top = top->next;
		delete(pnt);
	}
}

//show function
void STACK::show()
{
	//conditon checking
	if (empty() == 1)
	{
		//output to the console window
		cout << "\n\t\tCorrect expression......!!!\n\n\n\n";

		//pause the output
		system("pause");

		//exit the programme
		exit(0);
	}
	//conditon checking
	else
	{
		//output to the console window
		cout << "\n\t\tInvalid expression......!!!\n\n\n\n";

		//pause the output
		system("pause");

		//exit the programme
		exit(0);
	}
}
