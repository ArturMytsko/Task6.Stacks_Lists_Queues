/**
 * @file   Stack.cpp
 * @brief  Implement stack
 * @author Arthur Mytsko
 */

#include "stdafx.h"
#include "Stack.h"

Stack::Stack()
{
	topNode = 0;
}

void Stack::Push(UC element)
{
	Node *tmpNode;
	try
	{
		tmpNode = new Node;
	}
	catch(...)
	{
		printf("Error while allocate memory!");
		_getch();
		exit(0);
	}

	tmpNode->cElement = element;

	if(IsEmpty() )
	{
		topNode = tmpNode;
		topNode->sPev = 0;
	}
	else
	{
		tmpNode->sPev = topNode;
		topNode = tmpNode;
	}
	tmpNode = 0;
}

void Stack::Pop()
{
	if(IsEmpty() )
	{
		printf("Error while pop element from empty stack");
		return;
	}
	Node *tmpNode = topNode;

	topNode = topNode->sPev;
	delete tmpNode;
}

UC Stack::Top()
{
	if(IsEmpty() )
	{
		return 0;
	}
	return topNode->cElement;
}

bool Stack::IsEmpty()
{
	return !topNode;
}

Stack::~Stack()
{
	Node *tmpNode;
	while(topNode)
	{
		tmpNode = topNode;
		topNode = topNode->sPev;
		delete tmpNode;
	}
}