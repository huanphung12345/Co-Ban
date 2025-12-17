/* nhập vào 2 số tự nhiên a và b tính tổng a và b rồi in ra màn hình */
/* đầu vào số a và b */
/* tính toán tổng = a+b */
/* đầu ra tổng a và b */
#include <iostream>
using namespace std;
int main(){
    /* bước 1 khai báo biến a, b tổng kiểu dữ liệu số nguyên */
    int a,b,tong;
    /* bước 2 nhập giá trị cho biến a và b */
    cout << "nhap a: ";
    cin>>a;
    cout << "nhap b: ";
    cin>>b;
    tong=a+b;
    cout << "tong cua a va b la: " << tong << endl;
    return 0;
}