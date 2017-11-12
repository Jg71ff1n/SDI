#pragma once
#include <iostream>
#define NULL nullptr 

class Node {
public:
	int Info;
	Node* NextLink;
};

class List {
public:
	Node* head = NULL;
	Node* InsertNode(int info, int index);
	void TraverseList(void);
};