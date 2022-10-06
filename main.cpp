#include <iostream>

// C++ Style

// 함수가 아닌, operator 이용

// 포인터변수 = new 타입;

// 배열은
// 포인터변수 = new 타입[크기];

void CPPstyle1()
{
	int* p = new int;

	*p = 0;
	std::cout << *p << std::endl;

	// delete 포인터변수;
	
	// 배열은
	// delete[] 포인터변수
	delete p;

}

void CPPstyle2()
{
	// calloc을 cpp style로 표현한다면,

	int* p = new int[10];

	p[0] = 0;
	std::cout << p[0] << std::endl;

	delete[] p;
}
int main()
{
	// 어디까지나 C는 참고용
	// C++이 훨씬 간단하고 유용하다.
}