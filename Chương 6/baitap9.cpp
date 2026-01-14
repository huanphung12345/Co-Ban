/* 9. Tính lương (Bắt buộc)
Viết chương trình dùng các mảng sau:
empId: một mảng gồm bảy số nguyên dài, dùng để chứa số căn cước của các nhân 
viên. Mảng cần được khởi tạo với các số sau:
− hours: một mảng bảy số nguyên để chứa số giờ làm việc của mỗi nhân viên
− payRate: một mảng gồm bảy số double để lưu tỷ lệ lương theo giờ của mỗi nhân 
viên
− wages: một mảng bảy số double để giữ tổng tiền lương của mỗi nhân viên
Chương trình truy cập dữ liệu trong mỗi mảng một cách đồng bộ qua chỉ số mảng. Ví 
dụ: phần tử 0 của mảng hours sẽ lưu số giờ làm của nhân viên có căn cước lưu tại phần 
tử 0 của mảng empId. Tương ứng, tỷ lệ trả lương của nhân viên này được lưu trong 
phần tử 0 của mảng payRate.
Chương trình sẽ hiển thị số căn cước của từng nhân viên và yêu cầu người dùng nhập 
số giờ làm và mức lương (tỷ lệ lương theo giờ) của nhân viên đó. Sau đó, nó sẽ tính 
toán tổng tiền lương cho nhân viên đó (tỷ lệ lương theo giờ nhân với số giờ) và lưu 
trong mảng wages. Sau khi dữ liệu được nhập cho tất cả nhân viên, chương trình sẽ
hiển thị số căn cước từng nhân viên kèm tổng tiền lương của người đó. 
Xác thực đầu vào: Không chấp nhận các giá trị âm cho số giờ, hoặc các số nhỏ hơn 
15,00 đối với tỷ lệ lương theo giờ. */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const int SIZE = 7;
    long empId[SIZE] = {123456789, 987654321, 456789123, 789123456, 321654987, 654987321, 147258369};
    int hours[SIZE];
    double payRate[SIZE];
    double wages[SIZE];

    // Input hours and pay rate
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter hours worked for employee ID " << empId[i] << ": ";
        cin >> hours[i];
        while (hours[i] < 0) {
            cout << "Invalid input. Hours worked cannot be negative. Please re-enter: ";
            cin >> hours[i];
        }

        cout << "Enter pay rate for employee ID " << empId[i] << ": ";
        cin >> payRate[i];
        while (payRate[i] < 15.00) {
            cout << "Invalid input. Pay rate must be at least 15.00. Please re-enter: ";
            cin >> payRate[i];
        }

        // Calculate wages
        wages[i] = hours[i] * payRate[i];
    }

    // Output employee wages
    cout << fixed << setprecision(2);
    cout << "\nEmployee Wages:\n";
    cout << "----------------------------------------\n";
    cout << "Employee ID\tWages\n";
    cout << "----------------------------------------\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << empId[i] << "\t\t" << wages[i] << "\n";
    }
    cout << "----------------------------------------\n";

    return 0;
}