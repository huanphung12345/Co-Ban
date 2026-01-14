/* 9. Sắp xếp kiểm chuẩn (Bắt buộc)
Viết chương trình có 2 mảng gồm ít nhất 20 phần tử giống nhau. Đếm số lần đổi chỗ
của thuật toán Sắp xếp Nổi bọt cho 1 mảng và Đếm số lần đổi chỗ của thuật toán Sắp 
xếp Lựa chọn. Sau đó hiển thị số lần đổi chỗ của 2 thuật toán trên. */
#include <iostream>
using namespace std;
void bubbleSort(int a[], int n, int &swapCount)
{
    swapCount = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swapCount++;
            }
        }
    }
}
void selectionSort(int a[], int n, int &swapCount)
{
    swapCount = 0;
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
        if (minIndex != i)
        {
            swap(a[i], a[minIndex]);
            swapCount++;
        }
    }
}
int main()
{
    const int SIZE = 20;
    int arr1[SIZE] = {64, 34, 25, 12, 22, 11, 90, 88, 76, 45,
                      23, 67, 89, 54, 32, 10, 5, 3, 2, 1};
    int arr2[SIZE] = {64, 34, 25, 12, 22, 11, 90, 88, 76, 45,
                      23, 67, 89, 54, 32, 10, 5, 3, 2, 1};
    int bubbleSwapCount = 0;
    int selectionSwapCount = 0;

    bubbleSort(arr1, SIZE, bubbleSwapCount);
    selectionSort(arr2, SIZE, selectionSwapCount);

    cout << "So lan doi cho trong thuat toan Sap xep Noi bot: " << bubbleSwapCount << endl;
    cout << "So lan doi cho trong thuat toan Sap xep Lua chon: " << selectionSwapCount << endl;

    return 0;
}