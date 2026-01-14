/* 5. Viết lại con trỏ:
Hàm sau sử dụng các biến tham chiếu làm tham số. Viết lại hàm để nó sử dụng con trỏ
thay vì các biến tham chiếu, sau đó thể hiện hàm trong một chương trình hoàn chỉnh.
int doSomething(int &x, int &y)
{
int temp = x;
x = y * 10;
y = temp * 10;
return x + y;
} */
#include <iostream>
using namespace std;
int doSomething(int* x, int* y) {
    int temp = *x;
    *x = (*y) * 10;
    *y = temp * 10;
    return (*x) + (*y);
}
int main() {
    int a, b;
    cout << "Nhap gia tri cho a: ";
    cin >> a;
    cout << "Nhap gia tri cho b: ";
    cin >> b;

    int result = doSomething(&a, &b);

    cout << "Gia tri moi cua a: " << a << endl;
    cout << "Gia tri moi cua b: " << b << endl;
    cout << "Tong cua a va b: " << result << endl;

    return 0;
}