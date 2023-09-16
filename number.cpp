#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    int number1 {1};//初始化
    int number2 {2};
    int sum {0};//声明

    std::cout << "enter your number1!"<<std::endl;
    std::cin >> number1;
    std::cout << "enter your number2!"<<std::endl;
    std::cin >> number2;
    sum = number1+number2;
    std::cout << "sum is " << sum << "\n"<< std::endl;

    return 0;

}