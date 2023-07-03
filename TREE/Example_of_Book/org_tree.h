#pragma once
#include "node.cpp"

class org_tree
{
public:
	node* root;
	static org_tree create_org_structure(const std::string& pos) {
		org_tree tree;
		tree.root = new node{ pos,NULL,NULL };
		return tree;
	}
	static node* find(node* root, const std::string& value) {
		if (root == NULL)
			return NULL;

		if (root->position == value)
			return root;

		auto firstFound = org_tree::find(root->first, value);
		if (firstFound != NULL)
			return firstFound;

		return org_tree::find(root->second, value);
	}
	bool addSubordinate(const std::string& manager, const std::string& subordinate) {
		auto managerNode = org_tree::find(root, manager);

		if (!managerNode) {
			std::cout << manager << "�� ã�� �� �����ϴ�: " << std::endl;
			return false;
		}

		if (managerNode->first && managerNode->second) {
			std::cout << manager << " �Ʒ��� " << subordinate << "�� �߰��� �� �����ϴ�" << std::endl;
			return false;
		}

		if (!managerNode->first)
			managerNode->first = new node{ subordinate, NULL, NULL };
		else
			managerNode->second = new node{ subordinate, NULL,NULL };

		std::cout << manager << " �Ʒ��� " << subordinate << " �� �߰��߽��ϴ�." << std::endl;

		return true;
	}
	static void preOrder(node* start) {//���� ��ȸ
		if (!start)
			return;
		std::cout << start->position << ", ";
		preOrder(start->first);
		preOrder(start->second);
	}

	static void inOrder(node* start) { //���� ��ȸ
		if (!start)
			return;

		inOrder(start->first);
		std::cout << start->position << ", ";
		inOrder(start->second);
	}

	static void postOrder(node* start) { //���� ��ȸ
		if (!start)
			return;

		postOrder(start->first);
		postOrder(start->second);
		std::cout << start->position << ", ";
	}
};

