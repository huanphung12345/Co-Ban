/* 5. Chỉ số BMI
Chỉ số BMI được tính theo công thức lấy cân nặng (kg) chi cho bình phương của chiều
cao (tính theo mét). Nếu BMI lớn hơn 25 là thừa cân, nhỏ hơn 18.5 là gầy, trong khoảng
18.5 đến 25 là bình thường.
Viết chương trình yêu cầu người dùng nhập chiều cao và cân nặng của họ. sau đó cho
biết họ đang ở mức cân nặng nào trong 3 loại trên */
#include <iostream>
using namespace std;
int main() {
    float weight, height;
    cout << "Nhap vao can nang (kg): ";
    cin >> weight;
    cout << "Nhap vao chieu cao (m): ";
    cin >> height;

    float bmi = weight / (height * height);
    cout << "Chi so BMI cua ban la: " << bmi << endl;

    if (bmi > 25) {
        cout << "Ban dang o muc thua can." << endl;
    } else if (bmi < 18.5) {
        cout << "Ban dang o muc gầy." << endl;
    } else {
        cout << "Ban dang o muc binh thuong." << endl;
    }
    return 0;
}