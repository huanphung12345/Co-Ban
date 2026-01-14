/* 20. Giá gas dạo 1994
Trong các chương trình mẫu dành cho sinh viên cho cuốn sách này, bạn sẽ tìm thấy một 
tệp tên là 1994_Weekly_Gas_A Average.txt. Tệp này chứa giá gas trung bình cho mỗi 
tuần trong năm 1994 (Có 52 dòng trong tệp. Dòng 1 chứa giá gas trung bình vào tuần 
1, dòng 2 chứa giá trung bình cho tuần 2, v.v.) Viết a chương trình đọc giá gas từ tệp 
vào một mảng hoặc một vectơ. Chương trình sẽ xử lý tiếp như sau:
Trường Đại học Đại Nam Khoa Công nghệ thông tin
Trang | 11
− Hiển thị giá trung bình thấp nhất trong năm, cùng với số của tuần và tên của 
tháng xảy ra giá đó.
− Hiển thị giá trung bình cao nhất trong năm, cùng với số của tuần và tên của tháng 
xảy ra giá đó.
− Hiển thị giá gas trung bình cho mỗi tháng. (Để biết giá trung bình cho một tháng 
nhất định, hãy tính trung bình của giá trung bình các tuần của tháng đó.) */
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    const int WEEKS_IN_YEAR = 52;
    const int MONTHS_IN_YEAR = 12;
    const int WEEKS_IN_MONTH[MONTHS_IN_YEAR] = {4, 4, 5, 4, 4, 5, 4, 4, 5, 4, 4, 5};
    vector<double> gasPrices(WEEKS_IN_YEAR);
    ifstream inputFile("1994_Weekly_Gas_Average.txt");
    
    if (!inputFile) {
        cerr << "Khong the mo tep!" << endl;
        return 1;
    }

    // Đọc giá gas từ tệp vào mảng
    for (int i = 0; i < WEEKS_IN_YEAR; ++i) {
        inputFile >> gasPrices[i];
    }
    inputFile.close();

    // Tìm giá gas thấp nhất và cao nhất
    double minPrice = gasPrices[0];
    double maxPrice = gasPrices[0];
    int minWeek = 1;
    int maxWeek = 1;

    for (int i = 1; i < WEEKS_IN_YEAR; ++i) {
        if (gasPrices[i] < minPrice) {
            minPrice = gasPrices[i];
            minWeek = i + 1;
        }
        if (gasPrices[i] > maxPrice) {
            maxPrice = gasPrices[i];
            maxWeek = i + 1;
        }
    }

    // Tính giá trung bình cho mỗi tháng
    vector<double> monthlyAverages(MONTHS_IN_YEAR, 0.0);
    int weekIndex = 0;

    for (int month = 0; month < MONTHS_IN_YEAR; ++month) {
        double monthSum = 0.0;
        for (int week = 0; week < WEEKS_IN_MONTH[month]; ++week) {
            monthSum += gasPrices[weekIndex++];
        }
        monthlyAverages[month] = monthSum / WEEKS_IN_MONTH[month];
    }

    // Hiển thị kết quả
    cout << fixed << setprecision(2);
    cout << "Gia gas thap nhat: " << minPrice << " vao tuan " << minWeek << endl;
    cout << "Gia gas cao nhat: " << maxPrice << " vao tuan " << maxWeek << endl;
    cout << "Gia trung binh moi thang:" << endl;
    for (int month = 0; month < MONTHS_IN_YEAR; ++month)
    {
        cout << "Thang " << month + 1 << ": " << monthlyAverages[month] << endl;
    }
    return 0;
}