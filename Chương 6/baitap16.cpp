/* 16. Nhà vô địch giải thế giới
Nếu bạn đã tải xuống mã nguồn của cuốn sách này, bạn sẽ tìm thấy các tệp sau trong 
thư mục của chương này:
Teams.txt — Tệp này chứa danh sách xếp theo thứ tự chữ cái của các đội bóng chày 
thuộc nhóm Những ông lớn (Major Leagues). Mỗi đội trong nhóm này đều đã vô địch 
Giải thế giới (World Series) ít nhất một lần.
WorldSeriesWinners.txt — Tệp này chứa danh sách xếp theo thứ tự thời gian của các 
đội chiến thắng Giải thế giới từ năm 1903 đến năm 2012. (Dòng đầu tiên trong tệp là 
tên của đội đã vô địch năm 1903 và dòng cuối cùng là tên của đội chiến thắng năm 
2012. Lưu ý rằng World Series không tổ chức vào các năm 1904 và 1994.)
Viết chương trình hiển thị nội dung của tệp Teams.txt trên màn hình và nhắc người 
dùng nhập tên của một trong các nhóm. Sau đó, chương trình sẽ hiển thị số lần mà đội 
đó đã vô địch World Series trong khoảng thời gian từ 1903 đến 2012.
Gợi ý:
Đọc nội dung của tệp WorldSeriesWinners.txt thành một mảng hoặc vector. Sau khi 
người dùng nhập tên của một nhóm, chương trình sẽ duyệt qua mảng hoặc vector và 
đếm số lần nhóm này xuất hiện. */
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main() {
    // Mở tệp Teams.txt và hiển thị nội dung
    ifstream teamsFile("Teams.txt");
    if (!teamsFile) {
        cerr << "Không thể mở tệp Teams.txt" << endl;
        return 1;
    }

    cout << "Danh sách các đội bóng chày thuộc nhóm Những ông lớn:" << endl;
    string team;
    while (getline(teamsFile, team)) {
        cout << team << endl;
    }
    teamsFile.close();

    // Đọc nội dung của tệp WorldSeriesWinners.txt vào vector
    ifstream winnersFile("WorldSeriesWinners.txt");
    if (!winnersFile) {
        cerr << "Không thể mở tệp WorldSeriesWinners.txt" << endl;
        return 1;
    }

    vector<string> winners;
    while (getline(winnersFile, team)) {
        winners.push_back(team);
    }
    winnersFile.close();

    // Nhắc người dùng nhập tên đội bóng
    cout << "Nhập tên đội bóng để kiểm tra số lần vô địch World Series: ";
    string userTeam;
    getline(cin, userTeam);

    // Đếm số lần đội bóng đã vô địch
    int count = 0;
    for (const string& winner : winners) {
        if (winner == userTeam) {
            count++;
        }
    }

    // Hiển thị kết quả
    cout << "Đội " << userTeam << " đã vô địch World Series " << count << " lần từ 1903 đến 2012." << endl;

    return 0;
}