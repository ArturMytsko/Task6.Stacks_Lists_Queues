/**
 * @file   Task6.1.cpp
 * @brief  Implement main function
 * @author Arthur Mytsko
 */

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])

{
	UC *ucInput;
	try
	{
		ucInput = (UC *)malloc(sizeof(UC) * MAX_LEN );
	}
	catch(...)
	{
		printf("Erro while allocate memory");
		_getch();
		exit(0);
	}

	do
	{
		system("cls");
		printf("Enter expression with brackets '()', '[]', '{}'");
		printf("\n(accept only first 200 symbols)\n");

		fgets( (char*)ucInput, MAX_LEN - 1, stdin);
		fflush(stdin); // clear stdin stream

		if(CheckBreckets(ucInput) )
		{
			printf("Good breckets\n");
		}
		else
		{
			printf("Wrong breckets\n");
		}
		printf("Type another expression?('y' - yes)");
	}while(_getch() == 'y');


	return 0;
}

