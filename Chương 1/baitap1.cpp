/* 1. Tổng của hai số (Bắt buộc)
Viết một chương trình lưu các số nguyên 50 và 100 trong các biến, và lưu tổng của 
hai số này trong một biến có tên là total */
#include <iostream>
using namespace std;
int main() {
    int num1 = 50;
    int num2 = 100;
    int total = num1 + num2;

    cout << "Tong cua hai so " << num1 << " va " << num2 << " la: " << total << endl;

    return 0;
}