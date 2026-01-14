/* 5. Sửa đổi thống kê lượng mưa
Viết một chương trình cho phép người dùng nhập lượng mưa của mỗi tháng trong 12 
tháng vào một mảng số double. Chương trình sẽ hiển thị danh sách các tháng được sắp 
xếp theo thứ tự lượng mưa, từ cao nhất đến thấp nhất.
Xác thực đầu vào: Không chấp nhận số âm cho số liệu lượng mưa hàng tháng */
#include <iostream>
using namespace std;
void nhapmang(double a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        do
        {
            cout << "Nhap luong mua thang " << (i + 1) << ": ";
            cin >> a[i];
            if (a[i] < 0)
                cout << "Luong mua khong duoc am. Vui long nhap lai." << endl;
        } while (a[i] < 0);
    }
}
void xuatmang(double a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << "Thang " << (i + 1) << ": " << a[i] << " mm" << endl;
}
void sapxep(double a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j]) // Sắp xếp giảm dần
                swap(a[i], a[j]);
}
int main()
{
    const int MONTHS = 12;
    double a[MONTHS];
    nhapmang(a, MONTHS);
    sapxep(a, MONTHS);
    cout << "Danh sach luong mua theo thu tu giam dan:" << endl;
    xuatmang(a, MONTHS);
    return 0;
}