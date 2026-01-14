/* 7. Tìm kiếm chuỗi nhị phân
Sửa đổi hàm Tìm kiếm nhị phân được trình bày trong chương này để nó tìm kiếm một 
mảng chuỗi thay vì một mảng int. Kiểm tra việc thực hiện của hàm. Sử dụng chương 
Trường Đại học Đại Nam Khoa Công nghệ thông tin
Trang | 3
trình trên và viết tiếp để hoàn thành. (Chú ý: Mảng phải được sắp xếp trước khi tìm 
kiếm nhị phân sẽ hoạt động.) */
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
void nhapmang(string a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap chuoi thu " << (i + 1) << ": ";
        cin >> a[i];
    }
}
int binarySearch(string a[], int n, string x)
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
    cout << "Nhap so luong chuoi: ";
    cin >> n;
    string a[100];
    nhapmang(a, n);
    sapxep(a, n);
    cout << "Mang sau khi sap xep: " << endl;
    for (int i = 0; i < n; i++)
        cout << a[i] << endl;
    string x;
    cout << "Nhap chuoi can tim: ";
    cin >> x;
    int result = binarySearch(a, n, x);
    if (result != -1)
        cout << "Tim thay \"" << x << "\" tai vi tri " << result << endl;
    else
        cout << "\"" << x << "\" khong co trong mang." << endl;
    return 0;
}