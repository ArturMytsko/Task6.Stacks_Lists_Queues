/**
 * @file   Stack.h
 * @brief  Contains declaration of stack class and node struct
 * @author Arthur Mytsko
 */

#ifndef _STACK_H_
#define _STACK_H_

#include "stdafx.h"

// Node of Stack
struct Node
{
	UC cElement; // symbol
	Node *sPev;  // pointer to previous node
};

// implement stack
class Stack
{
private:
	Node *topNode; // node

public:
	/**
     * @brief   constructor
    */
	Stack();

	/**
     * @brief        Add new element to stack
     * @param   [in] element - element ot add
     * @return	void
    */
	void Push(UC element);

	/**
     * @brief   Delete top element from stack
     * @param   void
     * @return	void
    */
	void Pop(void);

	/**
     * @brief   Return element form stack's top
     * @param   void
     * @return	top element
    */
	UC Top(void);

	/**
     * @brief   Check is stack empty 
     * @param   void
     * @return	void
    */
	bool IsEmpty();

	/**
     * @brief   Destructor
     * @param   void
     * @return	void
    */
	~Stack();
};
#endif  /* _STACK_H_ */