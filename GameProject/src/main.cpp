#include <iostream>

namespace Engine
{
	_declspec(dllimport) void Print();
}

int main()
{

	Engine::Print();

	system("pause");
	return 0;
}