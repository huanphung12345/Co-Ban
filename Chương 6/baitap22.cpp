/* 22. Chỗ ngồi trong nhà hát
Chương trình này nên được thiết kế và cài đặt bởi một nhóm sinh viên. Đây là một vài 
Gợi ý:
− Một sinh viên nên thiết kế hàm main, hàm này sẽ gọi các hàm khác trong chương 
trình. Các chức năng còn lại của sẽ được thiết kế bởi các thành viên khác trong 
nhóm.
− Các yêu cầu của chương trình cần được phân tích để mỗi sinh viên được giao 
cùng một khối lượng công việc.
− Các tham số và kiểu trả về của mỗi hàm nên được quyết định trước.
− Chương trình có thể được thực hiện như một chương trình nhiều tệp, hoặc tất cả
các chức năng có thể được cắt và dán vào tệp chính.
Đây là nhiệm vụ: 
Viết một chương trình có thể được dùng bởi một nhà hát nhỏ để bán vé cho các buổi 
biểu diễn. Khán phòng của nhà hát có 15 hàng ghế, mỗi hàng có 30 ghế. Chương trình 
sẽ hiển thị một màn hình hiển thị chỗ nào còn trống và chỗ nào đã đã mua vé. Ví dụ, 
màn hình sau đây hiển thị một biểu đồ mô tả từng chỗ ngồi trong rạp hát. Các ghế đã 
sử dụng được biểu thị bằng ký hiệu * và các ghế có sẵn được biểu thị bằng ký hiệu #.
Đây là danh sách các tác vụ mà chương trình cần thực hiện:
− Khi chương trình bắt đầu, nó sẽ yêu cầu người dùng nhập giá chỗ ngồi cho mỗi 
hàng. Giá có thể được lưu trữ trong một mảng riêng biệt. (Ngoài ra, giá có thể
được đọc từ một tệp.)
− Sau khi giá được nhập, chương trình sẽ hiển thị sơ đồ chỗ ngồi tương tự như biểu 
đồ được hiển thị ở trên. Người dùng có thể nhập số hàng và số ghế cho vé đang 
bán. Sau khi mua vé hoặc nhóm vé, chương trình sẽ hiển thị tổng tiền vé vừa bán 
và cập nhật lại sơ đồ chỗ ngồi.
− Chương trình nên lưu trữ tổng số tiền bán vé trên cả rạp. Người dùng cần được 
cung cấp một tùy chọn để xem số tiền này.
− Chương trình cũng sẽ cung cấp cho người dùng một tùy chọn để xem danh sách 
các thông tin sau: bao nhiêu ghế đã được bán, bao nhiêu ghế còn trống trong từng 
hàng, và bao nhiêu ghế còn trống trong toàn bộ khán phòng.
Xác thực đầu vào: Khi vé đang được bán, không chấp nhận số hàng hoặc số ghế không 
tồn tại. Khi ai đó yêu cầu một chỗ ngồi cụ thể, chương trình cũng phải đảm bảo rằng 
chỗ ngồi đó đang trống trước khi nó được bán. */
#include <iostream>
#include <iomanip>
using namespace std;
const int ROWS = 15;
const int SEATS = 30;
void initializeSeats(char seats[ROWS][SEATS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < SEATS; ++j) {
            seats[i][j] = '#'; // '#' indicates available seat
        }
    }
}
void displaySeats(const char seats[ROWS][SEATS]) {
    cout << "   ";
    for (int j = 0; j < SEATS; ++j) {
        cout << setw(2) << j + 1;
    }
    cout << endl;
    for (int i = 0; i < ROWS; ++i) {
        cout << setw(2) << i + 1 << " ";
        for (int j = 0; j < SEATS; ++j) {
            cout << " " << seats[i][j];
        }
        cout << endl;
    }
}
bool sellSeat(char seats[ROWS][SEATS], int row, int seat) {
    if (row < 1 || row > ROWS || seat < 1 || seat > SEATS) {
        cout << "Invalid seat selection." << endl;
        return false;
    }
    if (seats[row - 1][seat - 1] == '*') {
        cout << "Seat already sold." << endl;
        return false;
    }
    seats[row - 1][seat - 1] = '*'; // '*' indicates sold seat
    return true;
}
int main() {
    char seats[ROWS][SEATS];
    double prices[ROWS];
    double totalSales = 0.0;
    initializeSeats(seats);
    cout << "Enter the price for each row:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        cout << "Row " << i + 1 << ": ";
        cin >> prices[i];
    }
    int choice;
    do {
        cout << "\nMenu:\n1. Display Seats\n2. Sell Seat\n3. View Total Sales\n4. Exit\nChoose an option: ";
        cin >> choice;
        switch (choice) {
            case 1:
                displaySeats(seats);
                break;
            case 2: {
                int row, seat;
                cout << "Enter row and seat number to sell: ";
                cin >> row >> seat;
                if (sellSeat(seats, row, seat)) {
                    totalSales += prices[row - 1];
                    cout << "Seat sold for $" << prices[row - 1] << endl;
                }
                break;
            }
            case 3:
                cout << "Total sales: $" << totalSales << endl;
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid option." << endl;
        }
    } while (choice != 4);
    return 0;
}