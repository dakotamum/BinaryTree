#include "Tree.hpp"
#include <iostream>

Tree::Node::Node(double value, Node* leftarg = nullptr, Node* rightarg = nullptr)
{
	data = value;
}

Tree::Tree()
{
	m_root = nullptr;
}

void Tree::addNode(double value)
{
	if (m_root == nullptr)
	{
		m_root = new Node(value);
	}
}
