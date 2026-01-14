/* 7. Chương trình phân tích số
Viết chương trình yêu cầu người dùng nhập tên tệp. Giả sử tệp chứa một chuỗi số, mỗi 
số được viết trên một dòng. Chương trình sẽ đọc nội dung của tệp thành một mảng sau 
đó hiển thị các thông tin sau:
− Số thấp nhất trong mảng
− Số cao nhất trong mảng
− Tổng các số trong mảng
− Giá trị trung bình của các số trong mảng */
#include <iostream>
#include <fstream>
#include <limits>
using namespace std;
const int MONTHS = 3;
const int DAYS = 30;
void readData(char weather[MONTHS][DAYS], const string& filename) {
    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        return;
    }
    for (int i = 0; i < MONTHS; ++i) {
        for (int j = 0; j < DAYS; ++j) {
            inputFile >> weather[i][j];
        }
    }
    inputFile.close();
}
void countWeather(const char weather[MONTHS][DAYS], int rainCount[MONTHS], int cloudCount[MONTHS], int sunCount[MONTHS]) {
    for (int i = 0; i < MONTHS; ++i) {
        rainCount[i] = cloudCount[i] = sunCount[i] = 0;
        for (int j = 0; j < DAYS; ++j) {
            switch (weather[i][j]) {
                case 'R':
                    rainCount[i]++;
                    break;
                case 'C':
                    cloudCount[i]++;
                    break;
                case 'S':
                    sunCount[i]++;
                    break;
            }
        }
    }
}
void displayResults(const int rainCount[MONTHS], const int cloudCount[MONTHS], const int sunCount[MONTHS]) {
    int totalRain = 0, totalCloud = 0, totalSun = 0;
    int maxRainMonth = 0;
    for (int i = 0; i < MONTHS; ++i) {
        cout << "Month " << (i + 1) << ": " << rainCount[i] << " rainy days, " 
             << cloudCount[i] << " cloudy days, " << sunCount[i] << " sunny days." << endl;
        totalRain += rainCount[i];
        totalCloud += cloudCount[i];
        totalSun += sunCount[i];
        if (rainCount[i] > rainCount[maxRainMonth]) {
            maxRainMonth = i;
        }
    }
    cout << "Total: " << totalRain << " rainy days, " 
         << totalCloud << " cloudy days, " << totalSun << " sunny days." << endl;
    cout << "Month with the most rainy days: Month " << (maxRainMonth + 1) << endl;
}
int main() {
    char weather[MONTHS][DAYS];
    int rainCount[MONTHS], cloudCount[MONTHS], sunCount[MONTHS];
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;
    readData(weather, filename);
    countWeather(weather, rainCount, cloudCount, sunCount);
    displayResults(rainCount, cloudCount, sunCount);
    return 0;
}