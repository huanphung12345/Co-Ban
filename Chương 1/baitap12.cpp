/* nhập vào tên sinh viên, độ tuổi, in ra màn hình */
#include <iostream>
#include <string>
using namespace std;
int main(){
    // khai báo biến
    string ten,diachi;
    int tuoi;
    // nhập giá trị cho biến
    cout << "nhap ten sinh vien: ";
    getline(cin, ten);

    cout << "nhap tuoi sinh vien: ";
    cin >> tuoi;
    cin.ignore();
    
    cout << "nhap dia chi sinh vien: ";
    getline(cin, diachi);

    // in ra màn hình các giá trị
    cout << "Ten: " << ten << endl << "DiaChi: " << diachi << endl << "Tuoi: " << tuoi << endl;
    return 0;
}