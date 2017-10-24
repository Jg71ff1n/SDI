// Lab4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Header.h"

using namespace std;

int main()
{
	List LinkedList;
	LinkedList.InsertNode(47, 0);
	LinkedList.InsertNode(12, 1);
	LinkedList.InsertNode(92, 2);
    return 0;
}

Node* List::InsertNode(int info, int index) {
	if (index < 0) return NULL;
	int currIndex = 1;
	Node* currNode = head;
	while (currNode && index > currIndex) {
		currNode = currNode->NextLink;
		currIndex++;
	}
	if (index > 0 && currNode == NULL) return NULL;
	Node* newNode = new Node;
	newNode->Info = info;
	if (index == 0) {
		newNode->NextLink = head;
		head = newNode;
	}
	else {
		newNode->NextLink = currNode->NextLink;
		currNode->NextLink = newNode;
	}
	return newNode;
}

