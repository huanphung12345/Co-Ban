/* 23. Màn hình mẫu
Viết chương trình hiển thị Hình 1 bằng 1 vòng lặp và Hình 2 bằng 1 vòng lặp
+
++ Hình 1
+++
++++
++++
+++ Hình 2
++
+ */
#include <iostream>
using namespace std;
int main() {
    int n = 4;

    // Hình 1
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "+";
        }
        cout << endl;
    }

    cout << endl; // Dòng trống giữa hai hình

    // Hình 2
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}