/* 2. Vị trí ngồi trên sân vận động
Có 3 loại ghế ngồi trên một sân vận động. Với một môn bóng, các ghế hạng A với
giá 15 đô la, các ghế hạng B có giá 12 đô la, và các ghế hạng C có giá là 9 đô la. 
Viết chương trình yêu cầu người dùng nhập số lượng vé cho mỗi hạng ghế và hiển 
thị tổng số tiền thu được từ các vé được bán ra. Hãy định dạng số tiền ở dạng kí hiệu 
fixed-point, với độ chính xác 2 số thập phân đằng sau dấu phẩy, và luôn hiển thị dấu 
phẩy thập phân trong mọi trường hợp. */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const double PRICE_A = 15.0;
    const double PRICE_B = 12.0;
    const double PRICE_C = 9.0;

    int tickets_A, tickets_B, tickets_C;
    double total_revenue;

    // Yêu cầu người dùng nhập số lượng vé cho mỗi hạng ghế
    cout << "Nhap so luong ve hang A: ";
    cin >> tickets_A;
    cout << "Nhap so luong ve hang B: ";
    cin >> tickets_B;
    cout << "Nhap so luong ve hang C: ";
    cin >> tickets_C;

    // Tính tổng số tiền thu được
    total_revenue = (tickets_A * PRICE_A) + (tickets_B * PRICE_B) + (tickets_C * PRICE_C);

    // Hiển thị tổng số tiền với định dạng fixed-point, 2 chữ số thập phân
    cout << fixed << setprecision(2);
    cout << "Tong so tien thu duoc: $" << total_revenue << endl;

    return 0;
}