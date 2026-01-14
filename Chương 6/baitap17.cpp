/* 17. Tìm kiếm tên
Nếu bạn đã tải xuống mã nguồn của cuốn sách này, bạn sẽ tìm thấy các tệp sau trong 
thư mục của chương này:
− GirlNames.txt — Tệp này chứa danh sách 200 tên phổ biến nhất cho các bé gái 
sinh ra ở Mỹ từ năm 2000 đến năm 2009.
− BoyNames.txt — Tệp này chứa danh sách 200 tên phổ biến nhất cho các bé trai 
sinh ra ở Mỹ từ năm 2000 đến năm 2009.
Viết chương trình đọc nội dung của hai tệp trên vào hai mảng hoặc vector riêng biệt. 
Người dùng có thể nhập tên con trai, tên con gái hoặc cả hai và ứng dụng sẽ hiển thị
thông báo cho biết liệu những tên đó có nằm trong số những tên phổ biến nhất hay 
không. */
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool searchName(const vector<string>& names, const string& name) {
    return find(names.begin(), names.end(), name) != names.end();
}
int main() {
    vector<string> girlNames;
    vector<string> boyNames;
    ifstream girlFile("GirlNames.txt");
    ifstream boyFile("BoyNames.txt");
    string name;
    if (!girlFile) {
        cerr << "Không thể mở tệp GirlNames.txt" << endl;
        return 1;
    }
    if (!boyFile) {
        cerr << "Không thể mở tệp BoyNames.txt" << endl;
        return 1;
    }
    while (getline(girlFile, name)) {
        girlNames.push_back(name);
    }
    while (getline(boyFile, name)) {
        boyNames.push_back(name);
    }
    girlFile.close();
    boyFile.close();
    string girlNameToSearch, boyNameToSearch;
    cout << "Nhập tên con gái để tìm kiếm (hoặc nhấn Enter để bỏ qua): ";
    getline(cin, girlNameToSearch);
    if (!girlNameToSearch.empty()) {
        if (searchName(girlNames, girlNameToSearch)) {
            cout << girlNameToSearch << " là một trong những tên con gái phổ biến nhất." << endl;
        } else {
            cout << girlNameToSearch << " không nằm trong danh sách tên con gái phổ biến." << endl;
        }
    }
    cout << "Nhập tên con trai để tìm kiếm (hoặc nhấn Enter để bỏ qua): ";
    getline(cin, boyNameToSearch);
    if (!boyNameToSearch.empty()) {
        if (searchName(boyNames, boyNameToSearch)) {
            cout << boyNameToSearch << " là một trong những tên con trai phổ biến nhất." << endl;
        } else {
            cout << boyNameToSearch << " không nằm trong danh sách tên con trai phổ biến." << endl;
        }
    }
    return 0;
}