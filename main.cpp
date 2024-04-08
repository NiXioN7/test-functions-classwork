#include <iostream>
#include <string>
using namespace std;
string get_str(int num)
{
    string str;
    for(int i = 0;i<num;i++)
    {
        str += to_string(i);
        if (i != (num - 1))
        {
            str +=' ';
        }
    }
    return str;
}
void test_get_str()
{
    int num = 5;
    string result = "0 1 2 3 4";
    string test_result = get_str(num);
    bool correct = true;
    for (int i = 0; i < 8; i++)
    {
        if (result[i] != test_result[i])
        {
            correct = false;
        }
    }
    if (!correct)
    {
        cout << "результат неверен" << endl;
    }
    else cout << "все работает" << endl;
}
int main()
{
    setlocale(0, "ru");
    int num = 5;
    string str = get_str(num);
    for (auto i : str)
    {
        cout << i;
    }
    cout << endl;
    test_get_str();
}
