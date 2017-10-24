#pragma once

class Node {
public:
	int Info;
	Node* NextLink;
};

class List {
public:
	Node* head = NULL;
	Node* InsertNode(int info, int index);
};