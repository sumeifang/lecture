#include <iostream>
#include <string>
using namespace std;

int main()
{
    //定义三个值，total grad gradcounter
    int total {0};
    int grad {0};
    int gradcounter {1};

    //进行while循环
    while (gradcounter <= 10)
    {
        cout <<"please enter grad: " << endl;
        cin >> grad;
        total = total + grad;
        gradcounter = gradcounter +1;
    }

   //输出total
    cout << "total = " << total << endl;
    cout << "totalAverage = " << total/10 << endl;
    return 0;
}