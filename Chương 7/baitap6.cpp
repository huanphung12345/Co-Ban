/* 6. Sắp xếp lựa chọn chuỗi (Bắt buộc)
Sửa đổi hàm sắp xếp lựa chọn (Selection Sort) được trình bày trong chương này để nó 
sắp xếp một mảng chuỗi (string) thay vì một mảng int . Kiểm tra việc thực hiện của 
hàm. Sử dụng chương trình dưới và viết tiếp để hoàn thành.
#include <iostream>
#include <string>
using namespace std;
int main()
{
const int NUM_NAMES = 20;
string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
"Griffin, Jim", "Stamey, Marty", "Rose, Geri","Taylor, Terri", "Johnson, Jill",
"Allison, Jeff", "Looney, Joe", "Wolfe, Bill", "James, Jean", "Weaver, Jim", 
"Pore, Bob", "Rutherford, Greg", "Javens, Renee", "Harrison, Rose", "Setzer,
Cathy", "Pike, Gordon", "Holland, Beth" };
// Viết tiếp mã lệnh vào đây để hoàn thành
return 0;
} */
#include <iostream>
#include <string>
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
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
    "Griffin, Jim", "Stamey, Marty", "Rose, Geri","Taylor, Terri", "Johnson, Jill",
    "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", "James, Jean", "Weaver, Jim", 
    "Pore, Bob", "Rutherford, Greg", "Javens, Renee", "Harrison, Rose", "Setzer, Cathy",
    "Pike, Gordon", "Holland, Beth" };
    sapxep(names, NUM_NAMES);
    cout << "Danh sach ten sau khi sap xep:" << endl;
    xuatmang(names, NUM_NAMES);
    return 0;
}