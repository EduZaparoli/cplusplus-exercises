#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool verificaBalancoParenteses (char *);

int main ()
{

	char expressao[1100];

	while (expressao != EOF)
	{

		if(verificaBalancoParenteses(expressao))
			cout  << "correct\n" << endl;
		else
			cout << "incorrect\n" << endl;;

	}

}

bool verificaBalancoParenteses(char *str)
{

	short qtsP = 0;

	if (*str == ')')
		return false;

	while ((*str) && (qtsP >= 0))
	{
		if (*str == '(')
			qtsP++;

		if (*str == ')')
			qtsP --;

		str++;

	}

	if (qtsP == 0)
		return true;
	else
		return false;

}
