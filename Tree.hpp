#ifndef TREE_HPP
#define TREE_HPP

class Tree
{
protected:
	struct Node
	{
		double data;
		Node* left;
		Node* right;
		Node(double value, Node*, Node*);
	};
	Node* m_root;

public:
	Tree();
	void addNode(double value);
};


#endif