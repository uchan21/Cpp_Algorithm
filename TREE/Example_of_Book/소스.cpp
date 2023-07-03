#include "org_tree.h"

int main() {
	auto tree = org_tree::create_org_structure("CEO");

	tree.addSubordinate("CEO", "�λ���");
	tree.addSubordinate("�λ���", "IT����");
	tree.addSubordinate("�λ���", "�����ú���");
	tree.addSubordinate("IT����", "��������");
	tree.addSubordinate("IT����", "�۰�������");
	tree.addSubordinate("�����ú���", "��������");
	tree.addSubordinate("�����ú���", "ȫ������");
	tree.addSubordinate("�λ���", "�繫����");

	tree.preOrder(tree.root);
	std::cout << std::endl;
	tree.inOrder(tree.root);
	std::cout << std::endl;
	tree.postOrder(tree.root);
	std::cout << std::endl;
}