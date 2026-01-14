/* 4. Sửa đổi xác thực tài khoản thay đổi (Bắt buộc)
Sửa lại bài tập 1 như sau: Sử dụng thuật toán sắp xếp lựa chọn để sắp xếp mảng. Sau 
đó sử dụng mảng đã sắp xếp để thực hiện tìm kiếm nhị phân. */
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
int binarySearch(int a[], int n, int x)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
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
    int n;
    cout << "Nhap so luong phan tu mang: ";
    cin >> n;
    int a[100];
    nhapmang(a, n);
    sapxep(a, n);
    cout << "Mang sau khi sap xep: ";
    xuatmang(a, n);
    int x;
    cout << "Nhap gia tri can tim: ";
    cin >> x;
    int result = binarySearch(a, n, x);
    if (result != -1)
        cout << "Tim thay " << x << " tai vi tri " << result << endl;
    else
        cout << x << " khong co trong mang." << endl;
    return 0;
}