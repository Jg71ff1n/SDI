#pragma once

class Node {
public:
	int data;
	Node *leftBranch;
	Node *rightBranch;
};

class BinaryTree {
public:
	Node *Root;
	void InsertNode(int data);
	void DisplayPreOrder(Node *);
	void DisplayInOrder(Node *);
	void DisplayPostOrder(Node *);
	void ShowNodesInPreOrder(void) {
		DisplayPreOrder(Root);
	}
	void ShowNodesInOrder(void) {
		DisplayInOrder(Root);
	}
	void ShowNodesPostOrder(void) {
		DisplayPostOrder(Root);
	}


};