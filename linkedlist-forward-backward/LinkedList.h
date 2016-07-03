// LinkedList.h

#pragma once
#include <fstream>
#include <list>
#include <string>

class LinkedList
{
private:
	std::ifstream inFile;
	char characters;
	std::list<char> myList;
	std::list<char> myReverseList;
	std::list<char>::iterator iter;	

public:
	LinkedList(std::string &inFileName);
	~LinkedList();

	void createList();
	void createReverseList();
	void displayList();
	void displayReverseList();
};

// helper functions
std::string getFileName();
void clear_screen();
void banner();
void confirmQuit();
