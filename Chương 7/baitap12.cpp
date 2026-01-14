/* 12. Sắp xếp danh sách giá Gas năm 21994
Giá Gas trung bình mỗi tuần năm 1994 chứa trong tệp 1994_weekly_gas_averages. txt (tệp 
này trong tệp nén FileData trên elearning). Dòng 1 là giá trung bình tuần 1, Dòng 2 là giá trung 
bình tuần 2,… Viết chương trình đọc giá Gas trung bình từ tệp trên và tình giá Gas trung bình 
mỗi tháng. Sau đó ghi vào tệp khác tên 1994_monthly_gas_averages.txt tên tháng (1, 2, 3,…) 
và giá Gas trung bình của tháng tương ứng đã được sắp xếp tăng dần theo giá. Dưới đây là ví 
dụ tệp 1994_monthly_gas_averages.txt. 
3 20.5
9 22.6
1 25.7
12 28.3
… … */
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
struct MonthGas {
    int month;
    double averagePrice;
};
bool compareByPrice(const MonthGas &a, const MonthGas &b) {
    return a.averagePrice < b.averagePrice;
}
int main() {
    ifstream inputFile("1994_weekly_gas_averages.txt");
    ofstream outputFile("1994_monthly_gas_averages.txt");
    if (!inputFile) {
        cerr << "Khong the mo tep dau vao." << endl;
        return 1;
    }
    vector<double> weeklyPrices(52);
    for (int i = 0; i < 52; ++i) {
        inputFile >> weeklyPrices[i];
    }
    inputFile.close();
    vector<MonthGas> monthlyAverages(12);
    for (int month = 0; month < 12; ++month) {
        double sum = 0.0;
        int weeksInMonth = (month == 1) ? 4 : 4 + (month % 2); // Giả sử tháng 2 có 4 tuần, các tháng khác có 4 hoặc 5 tuần
        for (int week = 0; week < weeksInMonth; ++week) {
            sum += weeklyPrices[month * 4 + week];
        }
        monthlyAverages[month].month = month + 1;
        monthlyAverages[month].averagePrice = sum / weeksInMonth;
    }
    sort(monthlyAverages.begin(), monthlyAverages.end(), compareByPrice);
    for (const auto &mg : monthlyAverages) {
        outputFile << mg.month << " " << mg.averagePrice << endl;
    }
    outputFile.close();
    return 0;
}