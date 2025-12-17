/* 3. Điểm trung bình của bài kiểm tra (Bắt buộc)
Viết một chương yêu cầu nhập điểm của 5 bài kiểm tra. Chương trình thực hiện tính 
toán giá trị trung bình của 5 bài kiểm tra này sau đó hiển thị lên màn hình. Số được 
hiển thị phải được định dạng theo kí hiệu fixed-point, với độ chính xác là 1 đằng sau 
dấu phẩy. */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const int NUM_TESTS = 5;
    double scores[NUM_TESTS];
    double total_score = 0.0;
    double average_score;

    // Yêu cầu người dùng nhập điểm của 5 bài kiểm tra
    for (int i = 0; i < NUM_TESTS; ++i) {
        cout << "Nhap diem bai kiem tra thu " << (i + 1) << ": ";
        cin >> scores[i];
        total_score += scores[i];
    }

    // Tính điểm trung bình
    average_score = total_score / NUM_TESTS;

    // Hiển thị điểm trung bình với định dạng fixed-point, 1 chữ số thập phân
    cout << fixed << setprecision(1);
    cout << "Diem trung binh cua 5 bai kiem tra: " << average_score << endl;

    return 0;
}