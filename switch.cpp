#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int total{};
    int gradecounter{};
    int acount{};
    int bcount{};
    int ccount{};
    int dcount{};
    int fcount{};
    
    int grade{};

    while (cin >> grade){
        total += grade;
        ++gradecounter;

        //increment approprion letter-grade counter
        switch (grade/10)
        {
        case 9:
        case 10:/* grade was between 90-100 */
        ++acount;
        break;

        case 8://80-89
        ++bcount;
        break;

        case 7:
        ++ccount;
        break;

        case 6:
        ++dcount;
        break;
        
        default://less than 60
        ++fcount;
        break;
        }

        cout << fixed << setprecision(2);

        cout << "\ngrade report:\n";

        if (gradecounter != 0){
            double average{static_cast<double>(total)/gradecounter};
            cout <<"total of the " << gradecounter <<" grades entered is "
            << total << "\nclass average is" << average
            << "\nA: " << acount << "\nB: " << bcount << "\nC: " << ccount
            << "\nD: " << dcount << "\nF: " << fcount << "\n";

        }
        else {
            cout << "no grade" << "\n";
        }
    }
}