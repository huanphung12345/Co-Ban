/* 10. Thứ tự Sắp xếp 
Viết chương trình có 2 mảng gồm ít nhất 8 phần tử giống nhau. Sau đó thực hiện các 
công việc sau: 
- Hiển thị mảng đầu tiên
- Thực hiện sắp xếp nổi bọt, sau mỗi lần sắp xếp (sau 1 lần lặp) thì in lại mảng 
đầu tiên.
- Hiển thị mảng thứ hai.
- Thực hiện sắp xếp lựa chọn, sau mỗi lần sắp xếp (sau 1 lần lặp) thì in lại mảng 
thứ hai */
#include <iostream>
using namespace std;
void bubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
        cout << "Mang sau lan sap xep noi bot thu " << (i + 1) << ": ";
        for (int k = 0; k < n; k++)
            cout << a[k] << " ";
        cout << endl;
    }
}
void selectionSort(int a[], int n)
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
        cout << "Mang sau lan sap xep lua chon thu " << (i + 1) << ": ";
        for (int k = 0; k < n; k++)
            cout << a[k] << " ";
        cout << endl;
    }
}
int main()
{
    const int SIZE = 8;
    int arr1[SIZE] = {34, 7, 23, 32, 5, 62, 32, 14};
    int arr2[SIZE] = {34, 7, 23, 32, 5, 62, 32, 14};

    cout << "Mang dau tien truoc khi sap xep: ";
    for (int i = 0; i < SIZE; i++)
        cout << arr1[i] << " ";
    cout << endl;

    bubbleSort(arr1, SIZE);

    cout << "Mang thu hai truoc khi sap xep: ";
    for (int i = 0; i < SIZE; i++)
        cout << arr2[i] << " ";
    cout << endl;

    selectionSort(arr2, SIZE);

    return 0;
}