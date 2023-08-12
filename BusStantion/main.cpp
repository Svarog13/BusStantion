#include<iostream>
#include"bus.h"
#include "binarytree.h"

int main()
{
	BinaryTree busTree;

	Bus bus1 = { 101, "John Doe" ,1 ,40 };
	Bus bus2 = { 202, "Jame Smith", 2, 35 };

	busTree.addBus(bus1);
	busTree.addBus(bus2);

	std::cout << "Buses in the park: " << std::endl;
	busTree.displayBuses();

	return 0;
}