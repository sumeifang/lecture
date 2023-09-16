#include <iostream>
#include <string>

using namespace std;
int main()
{
string str1{"hello "};
string str2{" openfoam"};
string str3;

cout << "str1:\"" << str1 << "\"; length: " << str1.length()
    << "\nstr2:\"" << str2 << "\"; length: " << str2.length()
    << "\nstr3:\"" << str3 << "\"; length: " << str3.length()
    << endl;

cout << "\nThe result of comparing str1 and str2: \n" << boolalpha
    << "str2 == str1： " << (str1 ==str2)
    << "str1 != str2： " << (str1 != str2) << endl;
    //<< boolalpha表示按照布尔类型打印

cout <<"testing str3.empty"<<endl;
if (str3.empty())
{
    cout << "str3 is empty; assigning to s3;\n";
    str3 = str1 + str2;
    cout << "str3: \"" << str3 << "\"" <<endl;
}

cout << "\nstr1 start with \"ha\": " << str1.starts_with("ha") << endl;
cout << "str2 start with \"ha\": " << str2.starts_with("ha") << endl;
cout << "str1 start with \"ay\": " << str1.ends_with("ay") << endl;
cout << "str2 start with \"ay\": " << str1.ends_with("ay") << endl;

return 0;

}
