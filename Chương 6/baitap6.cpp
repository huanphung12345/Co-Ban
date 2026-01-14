/* 6. Mưa hay Nắng (Bắt buộc)
Một nhà khí tượng nghiệp dư cần thu thập thông tin thời tiết trong suốt ba tháng mùa 
hè năm vừa rồi; nên đã ghi chú một ngày là mưa (‘R’), có mây (‘C’) hoặc nắng (‘S’). 
Viết chương trình lưu trữ thông tin này dưới dạng mảng ký tự cỡ 3 x 30, trong đó hàng 
để chỉ các tháng mùa hè (quy ước, 0 = tháng 6, 1 = tháng 7, 2 = tháng 8) và cột để chỉ
các ngày trong tháng. Không cần ghi chép dữ liệu cho ngày 31 của bất kỳ tháng nào. 
Chương trình sẽ bắt đầu bằng cách đọc dữ liệu thời tiết từ một tệp. Sau đó, cho mỗi 
tháng và cho cả ba tháng, chương trình sẽ hiển thị có bao nhiêu ngày mưa, ngày mây,
và ngày nắng. Nó cũng sẽ báo cáo tháng nào trong số ba tháng có số ngày mưa lớn 
nhất. Dữ liệu cho chương trình cần lưu trong tệp RainOrShine.txt.
Gợi ý: Tệp RainOrShine.txt có cấu trúc như sau: 
R C R A R S R R S R S C R C S S S S R S C A R C S S A C R S
C R R A S A S R C S R C R S S S R S C R R S C C S C S C R R
C R C C S C C R R R S A A C R C C C R C R S S S R S C A R A */
#include <iostream>
#include <fstream>
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
    readData(weather, "RainOrShine.txt");
    countWeather(weather, rainCount, cloudCount, sunCount);
    displayResults(rainCount, cloudCount, sunCount);
    return 0;
}