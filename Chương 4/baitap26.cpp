/* 26. Tạo 1 trang web cá nhân:
Viết một chương trình hỏi người dùng tên của họ, sau đó yêu cầu người dùng nhập một
câu mô tả về bản thân họ. Đây là một ví dụ về màn hình của chương trình:
Enter your name: Julie Taylor Enter
Describe yourself: I am a computer science major, a member of the Jazz club,
and I hope to work as a mobile app developer after I graduate.
Khi người dùng đã nhập đầu vào được yêu cầu, chương trình sẽ tạo một tệp HTML,
chứa đầu vào, cho một trang web đơn giản. Đây là một ví dụ về nội dung HTML, sử
dụng đầu vào mẫu được hiển thị trước đó:
27. Các bước trung bình đã thực hiện:
Máy theo dõi thể dục cá nhân là một thiết bị đeo được để theo dõi hoạt động thể chất của bạn,
lượng calo đốt cháy, nhịp tim, kiểu ngủ, v.v. Một hoạt động thể chất phổ biến mà hầu hết các
thiết bị này theo dõi là số bước bạn thực hiện mỗi ngày.
Các bạn có thể lấy tệp Steps.txt trong tệp đính kèm trên trang elearning của bài tập. Có
365 dòng trong tệp và mỗi dòng chứa số bước được thực hiện trong một ngày. (Dòng đầu tiên
là số bước được thực hiện vào ngày 1 tháng 1, dòng thứ hai là số bước được thực hiện vào
ngày 2 tháng 1, v.v.). Viết chương trình đọc tệp, sau đó hiển thị số bước trung bình được thực
hiện cho mỗi tháng. (Dữ liệu từ một năm không phải là năm nhuận, vì vậy tháng Hai có 28
ngày.) */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string name, description;

    // Lấy tên người dùng
    cout << "Enter your name: ";
    getline(cin, name);

    // Lấy mô tả về bản thân người dùng
    cout << "Describe yourself: ";
    getline(cin, description);

    // Tạo tệp HTML
    ofstream outFile("personal_webpage.html");
    if (outFile) {
        outFile << "<!DOCTYPE html>\n";
        outFile << "<html>\n";
        outFile << "<head>\n";
        outFile << "    <title>" << name << "'s Personal Webpage</title>\n";
        outFile << "</head>\n";
        outFile << "<body>\n";
        outFile << "    <h1>Welcome to " << name << "'s Personal Webpage</h1>\n";
        outFile << "    <p>" << description << "</p>\n";
        outFile << "</body>\n";
        outFile << "</html>\n";
        outFile.close();
        cout << "Webpage created successfully: personal_webpage.html" << endl;
    } else {
        cerr << "Error creating file!" << endl;
    }

    return 0;
}