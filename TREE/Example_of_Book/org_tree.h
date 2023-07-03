#pragma once
#include "node.h"

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
			std::cout << manager << "을 찾을 수 없습니다: " << std::endl;
			return false;
		}

		if (managerNode->first && managerNode->second) {
			std::cout << manager << " 아래에 " << subordinate << "을 추가할 수 없습니다" << std::endl;
			return false;
		}

		if (!managerNode->first)
			managerNode->first = new node{ subordinate, NULL, NULL };
		else
			managerNode->second = new node{ subordinate, NULL,NULL };

		std::cout << manager << " 아래에 " << subordinate << " 을 추가했습니다." << std::endl;

		return true;
	}
	static void preOrder(node* start) {//전위 순회
		if (!start)
			return;
		std::cout << start->position << ", ";
		preOrder(start->first);
		preOrder(start->second);
	}

	static void inOrder(node* start) { //중위 순회
		if (!start)
			return;

		inOrder(start->first);
		std::cout << start->position << ", ";
		inOrder(start->second);
	}

	static void postOrder(node* start) { //후위 순회
		if (!start)
			return;

		postOrder(start->first);
		postOrder(start->second);
		std::cout << start->position << ", ";
	}

	static void levelOrder(node* start) {
		if (!start)
			return;
		std::queue<node*> q;
		q.push(start);

		while (!q.empty()) {
			int size = q.size();
			for (int i = 0; i < size; i++) {
				auto current = q.front();
				q.pop();

				std::cout << current->position << ", ";
				if (current->first)
					q.push(current->first);
				if (current->second)
					q.push(current->second);
			}
			std::cout << std::endl;
		}
	}
};

