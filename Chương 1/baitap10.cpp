/* 	Bước 1: Khai báo 5 biến Diem, biến TrungBinh.
	Bước 2: Nhập vào 5 đầu điểm của 5 năm biến Diem.
	Bước 3: Tính điểm trung bình 
		TrungBinh = (Diem1 + Diem2 + Diem3 + Diem4 + Diem 5)/5;
	Bước 4: In kết quả TrungBinh ra màn hình.
*/
#include <iostream>
using namespace std;
int main(){
    float Diem1, Diem2, Diem3, Diem4, Diem5; // khai báo 5 biến cho các điểm từ 1-5
    float TrungBinh; // khai báo biến trung bình
    cout << "Diem 1: "; // nhập điểm 1
    cin >> Diem1; // đọc điểm 1 
    cout << "Diem 2: ";
    cin >> Diem2;
    cout << "Diem 3: ";
    cin >> Diem3;
    cout << "Diem 4: ";
    cin >> Diem4;
    cout << "Diem 5: ";
    cin >> Diem5;
    TrungBinh = (float)(Diem1 + Diem2 + Diem3 + Diem4 + Diem5)/5; // tính điểm trung bình
    cout << "Trung Binh: " << TrungBinh << endl; // in ra kết quả trung bình
    return 0;
}