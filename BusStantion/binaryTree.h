#pragma once

#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "bus.h"

class Node
{
public:
	Bus data;
	Node* left;
	Node* right;
	Node(const Bus& bus);
};

class BinaryTree
{
private:
	Node* root;

	Node* insert(Node* node, const Bus& bus);
	void inorderTraversal(Node* node);

public:
	BinaryTree();
	void addBus(const Bus& bus);
	void displayBuses();

};
#endif // !BINARYTREE_H
