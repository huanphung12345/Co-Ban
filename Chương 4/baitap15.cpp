/* 15. Báo cáo tiền lương (Bắt buộc)
Viết chương trình hiển thị báo cáo lương hàng tuần. Một vòng lặp trong chương trình
sẽ yêu cầu người dùng cung cấp mã số nhân viên, tổng lương, thuế tiểu bang, thuế liên
bang và thuế thu nhập. Vòng lặp sẽ kết thúc khi nhập mã số nhân viên là 0. Sau khi dữ
liệu được nhập, chương trình sẽ hiển thị tổng số tiền lương, thuế tiểu bang, thuế liên
bang, thuế thu nhập và thanh toán ròng.
Xác thực đầu vào: Không chấp nhận số âm cho bất kỳ mục nào đã nhập. Không chấp
nhận các giá trị khấu trừ của tiểu bang, liên bang hoặc thuế thu nhập lớn hơn tổng lương.
Nếu tổng thuế tiểu bang + thuế liên bang + thuế thu nhập cho bất kỳ nhân viên nào lớn
hơn tổng lương, hãy in thông báo lỗi và yêu cầu người dùng nhập lại dữ liệu cho nhân
viên đó */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int employeeID;
    double totalSalary, stateTax, federalTax, incomeTax;

    cout << fixed << setprecision(2);

    while (true) {
        cout << "Enter employee ID (0 to end): ";
        cin >> employeeID;
        if (employeeID == 0) {
            break;
        }

        cout << "Enter total salary: ";
        cin >> totalSalary;
        cout << "Enter state tax: ";
        cin >> stateTax;
        cout << "Enter federal tax: ";
        cin >> federalTax;
        cout << "Enter income tax: ";
        cin >> incomeTax;

        // Input validation
        if (totalSalary < 0 || stateTax < 0 || federalTax < 0 || incomeTax < 0) {
            cout << "Error: Negative values are not accepted. Please re-enter data for employee ID " << employeeID << ".\n";
            continue;
        }
        if (stateTax + federalTax + incomeTax > totalSalary) {
            cout << "Error: Total taxes exceed total salary. Please re-enter data for employee ID " << employeeID << ".\n";
            continue;
        }

        double netPayment = totalSalary - (stateTax + federalTax + incomeTax);

        cout << "\nPayroll Report for Employee ID: " << employeeID << "\n";
        cout << "Total Salary: $" << totalSalary << "\n";
        cout << "State Tax: $" << stateTax << "\n";
        cout << "Federal Tax: $" << federalTax << "\n";
        cout << "Income Tax: $" << incomeTax << "\n";
        cout << "Net Payment: $" << netPayment << "\n\n";
    }

    return 0;
}