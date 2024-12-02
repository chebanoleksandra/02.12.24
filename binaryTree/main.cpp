#include <iostream>
#include "Tree.h"
using namespace std;

int main()
{
	Tree myTree;
	myTree.Insert(5);
	myTree.Insert(1);
	myTree.Insert(8);
	myTree.Insert(6);
	myTree.Insert(3);
	myTree.Print();
}