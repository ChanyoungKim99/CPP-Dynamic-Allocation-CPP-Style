#include <iostream>

// C++ Style

// �Լ��� �ƴ�, operator �̿�

// �����ͺ��� = new Ÿ��;

// �迭��
// �����ͺ��� = new Ÿ��[ũ��];

void CPPstyle1()
{
	int* p = new int;

	*p = 0;
	std::cout << *p << std::endl;

	// delete �����ͺ���;
	
	// �迭��
	// delete[] �����ͺ���
	delete p;

}

void CPPstyle2()
{
	// calloc�� cpp style�� ǥ���Ѵٸ�,

	int* p = new int[10];

	p[0] = 0;
	std::cout << p[0] << std::endl;

	delete[] p;
}
int main()
{
	// �������� C�� �����
	// C++�� �ξ� �����ϰ� �����ϴ�.
}