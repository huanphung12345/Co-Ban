/* 5. Tỉ lệ nam và nữ
Viết một chương trình yêu cầu người dùng nhập vào số lượng người nam và số lượng 
người nữ của một lớp. Chương trình sẽ hiển thị tỉ lệ phần trăm của nam và nữ ra màn hình.
Gợi ý: Giả sử có 8 nam và 12 nữ trong một lớp. Do đó tổng sĩ số của lớp là 20. Tỉ lệ
phần trăm của nam có thể được tính bằng công thức 8 : 20 = 0.4 hoặc 40 phần trăm. Tỉ
lệ phần trăm của nữ có thể được tính bằng công thức 12 : 20 = 0.6 hoặc 60 phần trăm */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int num_males, num_females;
    int total_students;
    double male_percentage, female_percentage;
    // Yêu cầu người dùng nhập số lượng nam và nữ
    cout << "Nhap so luong nam trong lop: ";
    cin >> num_males;
    cout << "Nhap so luong nu trong lop: ";
    cin >> num_females;
    // Tính tổng số học sinh
    total_students = num_males + num_females;
    // Kiểm tra để tránh chia cho 0
    if (total_students != 0) {
        // Tính tỉ lệ phần trăm của nam và nữ
        male_percentage = (num_males * 100.0) / total_students;
        female_percentage = (num_females * 100.0) / total_students;
        // Hiển thị kết quả
        cout << fixed << setprecision(2);
        cout << "Ti le phan tram nam: " << male_percentage << "%" << endl;
        cout << "Ti le phan tram nu: " << female_percentage << "%" << endl;
    } else {
        cout << "Tong so hoc sinh la 0." << endl;
    }
    return 0;
}