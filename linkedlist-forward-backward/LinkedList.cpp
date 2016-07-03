// LinkedList.cpp

#include "LinkedList.h"
#include <iostream>
//#include <cstdlib>	// possibly needed for non-Windows clear_screen

LinkedList::LinkedList(std::string &inFileName)
{
	inFile.open(inFileName);
	while (!inFile)
	{
		banner();
		std::cout << "\n Error opening file: " << inFileName << "\n\n";
		confirmQuit();
		exit(1);
	}
}

LinkedList::~LinkedList()
{
	inFile.close();
}

void LinkedList::createList()
{
	while (inFile >> characters)
	{
		myList.push_back(characters);
	}
}

void LinkedList::createReverseList()
{
	while (inFile >> characters)
	{
		myReverseList.push_front(characters);
	}
}

void LinkedList::displayList()
{
	std::cout << "  Linked List:\t";
	for (iter = myList.begin(); iter != myList.end(); iter++)
		std::cout << *iter;
	std::cout << "\n\n";
}

void LinkedList::displayReverseList()
{
	std::cout << "  Reverse\n  Linked List:\t";
	for (iter = myReverseList.begin(); iter != myReverseList.end(); iter++)
		std::cout << *iter;
	std::cout << "\n\n";
}

// helper functions
std::string getFileName()
{

	std::string name;

	std::cout << "\n Enter file name: ";
	std::cin >> name;
	
	return name;
}

void clear_screen()
{
#ifdef _WIN32
	system("cls");
#else
	std::system("clear");	// for non-Windows?
#endif
}

void banner()
{
	clear_screen();

	std::cout << "\n-------------------------------------------------"
			<<   "\n*              Forward and Backward             *"
			<<   "\n-------------------------------------------------\n\n";
}

void confirmQuit()
{
	std::cout << "\nPress Enter to quit...";
	std::cin.ignore();
	std::cin.get();
}
