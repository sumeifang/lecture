#include <iostream>
#include <string>

using std::cout;
using std::endl;//使cout和endl能成功运行
//std是一个标准库，要不在前面加声明using。。。，要不然在运行命令前加std,例如std：：cout
//或者使用
//using namespace std;

int main() {
	std::cout << "hello cpp" << std::endl;
	std::cout << "hello openfoam\n";
	cout <<"hello"<< endl;

	return 0;
}

