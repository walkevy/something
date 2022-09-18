#include "Solitaire.h"

Solitaire::Solitaire()
{
	top = nullptr;
}

bool Solitaire::isFull()
{
	Node* temp;
	try
	{
		temp = new Node;
		delete temp;
		return false;
	}
	catch(bad_alloc)
	{
		return true;
	}
}

bool Solitaire::isEmpty()
{
	if (top == nullptr)
		return true;
	else 
		return false;
}

void Solitaire::push(string name)
{
	if (isEmpty())
	{
		Node* current = new Node;
		current->cardName = name;
		top = current;
	}
	else
	{
		Node* current = new Node;
		current->cardName = name;
		current->forwardLink = top;
		top = current;
	}
}

Solitaire::Node* Solitaire::peek(string name)
{
	Node* tempName = nullptr;
	if(isEmpty())
	{
		return tempName;;
	}
	else
	{
		Node* current = top;
		if (current->cardName == name)
		{
			return current;
		}
		else
		{
			return tempName;
		}
	}
}

void Solitaire::pop(string name)
{
	if (isEmpty())
	{
		return;
	}
	else if(top->cardName == name)
	{
		Node* temp = top;
		top = top->forwardLink;
		delete temp;
	}
	else
	{
		Node* current = top;
		while (current->cardName != name)
		{
			current = top->forwardLink;
			name = current->cardName;
			push(name);	
			delete current;

			// or
			/*
			
			
			*/
		}
	}
}

void pilechanger(piletype)
{
	
}



