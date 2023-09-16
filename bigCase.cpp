#include <iostream>
#include "bignumber.h"
using namespace std;

int main()
{
    const long long value1{9'223'372'036'854'775'807LL};//g++17规范
    cout << "long long value1: " << value1
        <<"\nvalue1 - 1: " << value1 - 1 
        <<"\nvalue1 + 1: " << value1 + 1 << endl;//+1行 报错

    const BigNumber value2{value1};
    cout << "\n\nBigNumber value2: " << value2
        << "\nBigNumber value2 + 1: " << value2 + 1
        << "\nBigNumber value2 - 1: " << value2 - 1 << endl;
        
    return 0;

}