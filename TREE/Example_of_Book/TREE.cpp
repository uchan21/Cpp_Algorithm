#include "org_tree.h"

int main() {
	auto tree = org_tree::create_org_structure("CEO");

	tree.addSubordinate("CEO", "부사장");
	tree.addSubordinate("부사장", "IT부장");
	tree.addSubordinate("부사장", "마케팅부장");
	tree.addSubordinate("IT부장", "보안팀장");
	tree.addSubordinate("IT부장", "앱개발팀장");
	tree.addSubordinate("마케팅부장", "물류팀장");
	tree.addSubordinate("마케팅부장", "홍보팀장");
	tree.addSubordinate("부사장", "재무부장");

	std::cout << "트리 순회" << std::endl;

	std::cout << "전위순회 :" << std::endl;
	tree.preOrder(tree.root);
	std::cout << std::endl;

	std::cout << "중위순회 :" << std::endl;
	tree.inOrder(tree.root);
	std::cout << std::endl;

	std::cout << "후위순회 :" << std::endl;
	tree.postOrder(tree.root);
	std::cout << std::endl;

	std::cout << "레벨 순서 순회 :" << std::endl;
	tree.levelOrder(tree.root);
}
