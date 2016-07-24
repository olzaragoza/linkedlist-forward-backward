/*
This program reads a file of characters into a linked list object.
A second linked list object is then created in reverse order.
The contents of both linked list objects are displayed.
*/

#include "LinkedList.h"
#include <iostream>

int main()
{
	banner();

	std::string fileName = getFileName();

	LinkedList listObj(fileName);
	LinkedList revListObj(fileName);

	listObj.createList();
	revListObj.createReverseList();

	banner();
	listObj.displayList();
	revListObj.displayReverseList();

	confirmQuit();
	return 0;
}
