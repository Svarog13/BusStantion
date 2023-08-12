#include "binaryTree.h"

Node::Node(const Bus& bus) : data(bus), left(nullptr),right(nullptr){}
BinaryTree::BinaryTree() : root(nullptr){}

Node* BinaryTree::insert(Node* node, const Bus& bus)
{
	if (node == nullptr)
	{
		return new Node(bus);
	}
	if (bus.busNumber < node->data.busNumber)
	{
		node->left = insert(node->left, bus);
	}
	else if (bus.busNumber > node->data.busNumber)
	{
		node->right = insert(node->right, bus);
	}
	return node;
}
void BinaryTree::inorderTraversal(Node* node)
{
	if (node!=nullptr)
	{
		inorderTraversal(node->left);
		std::cout << "Bus Number: " << node->data.busNumber << ",Driver: " << node->data.driverName << std::endl;
		inorderTraversal(node->right);
	}
}
void BinaryTree::addBus(const Bus& bus)
{
	root = insert(root, bus);
}
void BinaryTree::displayBuses()
{
	inorderTraversal(root);
}
