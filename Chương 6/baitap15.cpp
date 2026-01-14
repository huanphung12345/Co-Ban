/* 15. Sửa đổi vector
Sửa đổi ví dụ về Ngân hàng Thương mại Quốc gia (National Commerce Bank) được 
trình bày trong Chương trình 7-23 để pint, pin2 và pin3 là vector thay vì mảng. Ta cũng 
cần sửa đổi hàm testPIN để nhận đối số là một vector thay vì một mảng. */
#include <iostream>
#include <vector>
using namespace std;
bool testPIN(const vector<int> &pin, const vector<int> &userPin);
int main()
{
    const vector<int> pint = {1, 2, 3, 4};
    const vector<int> pin2 = {2, 4, 6, 8};
    const vector<int> pin3 = {3, 6, 9, 12};
    vector<int> userPin(4);
    cout << "Enter your PIN: ";
    for (int i = 0; i < 4; i++)
        cin >> userPin[i];
    if (testPIN(pint, userPin))
        cout << "PIN accepted for pint.\n";
    else
        cout << "Incorrect PIN for pint.\n";
    if (testPIN(pin2, userPin))
        cout << "PIN accepted for pin2.\n";
    else
        cout << "Incorrect PIN for pin2.\n";
    if (testPIN(pin3, userPin))
        cout << "PIN accepted for pin3.\n";
    else
        cout << "Incorrect PIN for pin3.\n";
    return 0;
}
bool testPIN(const vector<int> &pin, const vector<int> &userPin)
{
    for (size_t i = 0; i < pin.size(); i++)
    {
        if (pin[i] != userPin[i])
            return false;
    }
    return true;
}