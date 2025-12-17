/* 22. Tính góc
Viết một chương trình yêu cầu người dùng nhập vào một góc, đơn vị đo radians. 
Chương trình sẽ hiển thị các giá trị sine, cosine, và tangent của góc đó. (Sử dụng 
hàm sin, cos, và tan trong thư viện có sẵn để xác định các giá trị này.) Output sẽ hiện 
thị các số dạng kí hiệu fixed-point, làm tròn đến 4 chữ số đằng sau dấu phẩy */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    double radians;

    // Nhập góc từ người dùng
    cout << "Nhap vao mot goc (radians): ";
    cin >> radians;

    // Tính sine, cosine, và tangent của góc
    double sineValue = sin(radians);
    double cosineValue = cos(radians);
    double tangentValue = tan(radians);

    // Hiển thị kết quả với định dạng fixed-point và 4 chữ số thập phân
    cout << fixed << setprecision(4);
    cout << "\nKet qua:\n";
    cout << "Sine: " << sineValue << endl;
    cout << "Cosine: " << cosineValue << endl;
    cout << "Tangent: " << tangentValue << endl;

    return 0;
}