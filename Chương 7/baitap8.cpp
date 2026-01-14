/* 8. Điểm chuẩn tìm kiếm
Viết chương trình có một mảng gồm ít nhất 20 số nguyên (có thể khởi tạo 20 phần tử
đỡ phải nhập). Đếm số lần so sánh trong thuật toán tìm kiếm tuần tự và Đếm số lần so 
sánh trong thuật toán tìm kiếm nhị phân của cùng 1 giá trị tìm kiếm trong mảng trên.
Hiển thị số lần so sánh của 2 thuật toán trên ra màn hình. */
#include <iostream>
using namespace std;
void nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
}
void xuatmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
void sapxep(int a[], int n)
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
int linearSearch(int a[], int n, int x, int &comparisons)
{
    comparisons = 0;
    for (int i = 0; i < n; i++)
    {
        comparisons++;
        if (a[i] == x)
            return i; // Tìm thấy
    }
    return -1; // Không tìm thấy
}
int binarySearch(int a[], int n, int x, int &comparisons)
{
    comparisons = 0;
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        comparisons++;
        if (a[mid] == x)
            return mid; // Tìm thấy
        else if (a[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Không tìm thấy
}
int main()
{
    const int SIZE = 20;
    int a[SIZE] = {34, 7, 23, 32, 5, 62, 32, 12, 45, 78,
                   90, 11, 3, 67, 54, 21, 8, 19, 29, 41};
    sapxep(a, SIZE);
    cout << "Mang sau khi sap xep: ";
    xuatmang(a, SIZE);
    int x;
    cout << "Nhap gia tri can tim: ";
    cin >> x;
    int linearComparisons = 0;
    int binaryComparisons = 0;
    linearSearch(a, SIZE, x, linearComparisons);
    binarySearch(a, SIZE, x, binaryComparisons);
    cout << "So lan so sanh trong tim kiem tuyen tinh: " << linearComparisons << endl;
    cout << "So lan so sanh trong tim kiem nhi phan: " << binaryComparisons << endl;
    return 0;
}