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
	LinkedList.InsertNode(65, 3);
	LinkedList.InsertNode(80, 4);
	LinkedList.InsertNode(46, 5);
	LinkedList.InsertNode(5, 6);
	LinkedList.InsertNode(78, 7);
	LinkedList.TraverseList();
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

void List::TraverseList(void) {
	int ListLength = 0;
	Node* CurrentNode = head;
	while (CurrentNode != NULL) {
		cout << CurrentNode->Info << endl;
		CurrentNode = CurrentNode->NextLink;
		ListLength++;
	}
	cout << "The list length is " << ListLength << endl;
}