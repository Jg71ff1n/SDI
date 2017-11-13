#include "stdafx.h"
#include "Tree.h"
#include <iostream>

using namespace std;

void BinaryTree::InsertNode(int data)
{
	Node *newNode;
	Node *nodePtr;

	newNode = new Node;
	newNode->data = data;
	newNode->leftBranch = nullptr;
	newNode->rightBranch = nullptr;

	if (Root = nullptr) {
		Root = newNode;
	}
	else {
		nodePtr = Root;
	}

	while (nodePtr!=nullptr)
	{
		if (data < nodePtr->data) {
			if (nodePtr->leftBranch != nullptr) {
				nodePtr = nodePtr->leftBranch;
			}
			else
			{
				nodePtr->leftBranch = newNode;
				break;
			}
		}
		else if (data > nodePtr->data) {
			if (nodePtr->rightBranch != nullptr) {
				nodePtr = nodePtr->rightBranch;
			}
			else
			{
				nodePtr->rightBranch = newNode;
				break;
			}
		}
		else
		{
			cout << "Duplicate value found" << endl;
			break;
		}
	}
}
