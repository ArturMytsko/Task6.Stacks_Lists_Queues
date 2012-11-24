/**
 * @file   Breckets.cpp
 * @brief  Implement CheckBreckets function
 * @author Arthur Mytsko
 */

#include "stdafx.h"
#include "Stack.h"

bool CheckBreckets(UC *ucInputStr)
{
	if(!ucInputStr)
	{
		printf("Bad poiter!");
		return false;
	}
	Stack stack;

	register UC i = 0;
	while(!( (ucInputStr[i] == 0xa) || (ucInputStr[i] == 0x0) ) )
	{
		switch(ucInputStr[i])
		{
		case '(':
			stack.Push(ucInputStr[i]);
			break;
		case '[':
			stack.Push(ucInputStr[i]);
			break;
		case '{':
			stack.Push(ucInputStr[i]);
			break;
		case ')':
			if(stack.Top() == '(')
			{
				stack.Pop();
				break;
			}
			return false;
		case ']':
			if(stack.Top() == '[')
			{
				stack.Pop();
				break;
			}
			return false;
		case '}':
			if(stack.Top() == '{')
			{
				stack.Pop();
				break;
			}
			return false;
		default:
			break;
		}
		++i;
	}
	if(stack.IsEmpty() )
	{
		return true;
	}
	return false;
}