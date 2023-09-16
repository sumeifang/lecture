#include <iostream>
#include <string>
using namespace std;

int main()
{
    //定义了三个值
int pass{0};
int fail{0};
int counter{1};

    //循环10次，判断输入的值是不是1，是的话pass+1，不是fail+1
while(counter <= 10)
{
    cout << "please enter your result: " << endl;
    int result{};
    cin >> result;
    if (result == 1)
    {
        pass = pass + 1;
        
    }
    else{
        fail = fail + 1;
    }
    counter = counter + 1;
}

    //分别输出pass和while的值
cout << "pass = " << pass << endl;
cout << "fail = " << fail << endl;

if(pass >= 6)
{
    cout << "congregulation! you have passed!" << endl;
}
else 
{
    cout << "Sorry! you have not passed!" << endl;
}
    return 0;
}