#pragma once
#include <string>
using namespace std;

char stack[100];
float stack2[100];
int top_stack = -1;
int top_stack2 = -1;

void StackPush(char element)
{
	top_stack++;
	stack[top_stack] = element;
}

void Stack2Push(float element)
{
	top_stack2++;
	stack2[top_stack2] = element;
}

char DeleteReturnElement()
{
	if (top_stack == -1)
	{
		return 0;
	}
	top_stack--;
	return stack[top_stack + 1];
}

float DeleteReturnElement2()
{
	if (top_stack2 == -1)
	{
		return 0;
	}
	top_stack2--;
	return stack2[top_stack2 + 1];
}

char RetTop()
{
	if (top_stack == -1)
	{
		return 0;
	}
	return stack[top_stack];
}

bool isNumber(char element)
{
	if (element >= '0' && element <= '9')
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isOperator(char element)
{
	return (element == '+' ||
		element == '-' ||
		element == '*' ||
		element == '/' ||
		element == '(' ||
		element == ')');
}

void Rbracket(string& result)
{
	while (stack[top_stack] != '(')
	{
		result += DeleteReturnElement();
	}
	DeleteReturnElement();
}

int Prior(char element)
{
	switch (element)
	{
	case '*':
	case '/':
		return 3;

	case '+':
	case '-':
		return 2;

	case '(':
		return 1;
	default:
		return 0;
	}
}

float Calc(char element, float a, float b)
{
	switch (element)
	{
	case '+': return a + b;
	case '-': return a - b;
	case '*': return a * b;
	case '/': return a / b;
	default:
		return 0;
	}
}

string PolishNotation(string expr)
{
	string result;

	for (int i = 0; i < expr.length(); i++)
	{
		if (isNumber(expr[i]))
		{
			while (isNumber(expr[i]))
			{
				result += expr[i];
				i++;
			}
			i--;
			result += " ";
		}

		else if (isOperator(expr[i]))
		{
			if (expr[i] == ')')
			{
				Rbracket(result);
			}
			else if (expr[i] == '(')
			{
				StackPush(expr[i]);
			}
			else
			{
				while (top_stack != -1 && Prior(expr[i]) <= Prior(stack[top_stack]))
				{
					result += DeleteReturnElement();
				}
				StackPush(expr[i]);
			}
		}
	}
	while (top_stack != -1) {
		result += DeleteReturnElement();
	}
	return result;
}

float computing(string result)
{
	float a = 0;
	float b = 0;

	string number;

	for (int i = 0; i < result.length(); i++) {
		if (isNumber(result[i])) {
			while (isNumber(result[i]))
			{
				number += result[i];
				i++;
			}
			i--;
			Stack2Push(stoi(number));
			number = "";
		}
		else if (isOperator(result[i]))
		{
			b = DeleteReturnElement2();
			a = DeleteReturnElement2();
			float res = Calc(result[i], a, b);
			Stack2Push(res);
		}
	}

	return DeleteReturnElement2();
}

float Result(string expr)
{	
	string result = PolishNotation(expr);
	float Result = computing(result);

	//txSpeak(.c_str());
	return Result;
}