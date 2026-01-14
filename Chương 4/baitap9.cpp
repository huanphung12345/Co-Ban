/* 9. Người ở khách sạn
Viết chương trình tính tỷ lệ % sử dụng phòng trong khách sạn. Chương trình bắt đầu
bằng cách hỏi người dùng xem khách sạn có bao nhiêu tầng. Sau đó, một vòng lặp sẽ
lặp lại một lần cho mỗi tầng. Trong mỗi lần lặp, sẽ hỏi người dùng về số lượng phòng
trong tầng và bao nhiêu phòng trong số đó được sử dụng. Sau tất cả các lần lặp lại,
chương trình sẽ hiển thị khách sạn có bao nhiêu phòng, bao nhiêu phòng trong số đó
đang được sử dụng, bao nhiêu phòng chưa sử dụng và tỷ lệ phòng có người. Tỷ lệ phần
trăm có thể được tính bằng cách chia số phòng sử dụng cho tổng số phòng.
Theo truyền thống, hầu hết các khách sạn không có tầng mười ba. Vòng lặp trong
chương trình này nên bỏ qua lần lặp thứ mười ba.
Xác thực đầu vào: Không chấp nhận giá trị số tầng nhỏ hơn 1. Không chấp nhận số
lượng phòng ít hơn 10 trên một tầng */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int totalFloors;
    do {
        cout << "Nhap so tang trong khach san (>=1): ";
        cin >> totalFloors;
        if (totalFloors < 1) {
            cout << "Loi: So tang phai lon hon hoac bang 1. Vui long nhap lai." << endl;
        }
    } while (totalFloors < 1);

    int totalRooms = 0;
    int occupiedRooms = 0;

    for (int floor = 1; floor <= totalFloors; ++floor) {
        if (floor == 13) {
            cout << "Bo qua tang 13." << endl;
            continue; // Bỏ qua tầng 13
        }

        int roomsOnFloor;
        do {
            cout << "Nhap so phong tren tang " << floor << " (>=10): ";
            cin >> roomsOnFloor;
            if (roomsOnFloor < 10) {
                cout << "Loi: So phong tren mot tang phai lon hon hoac bang 10. Vui long nhap lai." << endl;
            }
        } while (roomsOnFloor < 10);

        int occupiedOnFloor;
        cout << "Nhap so phong da duoc su dung tren tang " << floor << ": ";
        cin >> occupiedOnFloor;

        totalRooms += roomsOnFloor;
        occupiedRooms += occupiedOnFloor;
    }

    int unoccupiedRooms = totalRooms - occupiedRooms;
    double occupancyRate = (static_cast<double>(occupiedRooms) / totalRooms) * 100.0;

    cout << fixed << setprecision(2);
    cout << "\nTong so phong trong khach san: " << totalRooms << endl;
    cout << "So phong dang duoc su dung: " << occupiedRooms << endl;
    cout << "So phong chua duoc su dung: " << unoccupiedRooms << endl;
    cout << "Ty le su dung phong: " << occupancyRate << "%" << endl;

    return 0;
}