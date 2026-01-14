/* 11. Sử dụng tệp – Sửa lại thành sắp xếp lựa chọn chuỗi (Bắt buộc)
Sửa lại bài 6. Cho 20 giá trị tên trong bài 6 vào tệp Name.txt, mỗi tên trên 1 dòng. Sau đó đọc 
từ tệp Name.txt ra mảng hoặc vector kiểu string và thực hiện sắp xếp lựa chọn mảng này. */
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void sapxep(string a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]);
    }
}
void xuatmang(string a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << endl;
}
int main()
{
    const int NUM_NAMES = 20;
    string names[NUM_NAMES];
    // Đọc tên từ tệp Name.txt
    ifstream inputFile("Name.txt");
    if (!inputFile)
    {
        cerr << "Khong the mo tep Name.txt" << endl;
        return 1;
    }
    for (int i = 0; i < NUM_NAMES; i++)
    {
        getline(inputFile, names[i]);
    }
    inputFile.close();
    // Sắp xếp tên
    sapxep(names, NUM_NAMES);
    // Hiển thị tên đã sắp xếp
    cout << "Danh sach ten sau khi sap xep:" << endl;
    xuatmang(names, NUM_NAMES);
    return 0;
}