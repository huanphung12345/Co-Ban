/* 19. Magic 8 Ball
Viết chương trình mô phỏng Magic 8 Ball, là một đồ chơi bói toán hiển thị một câu trả
lời ngẫu nhiên cho một câu hỏi có/không. Trong các chương trình mẫu dành cho sinh 
viên cho cuốn sách này, bạn sẽ tìm thấy một tệp tên 8_ball_responses.txt. Tệp chứa 12 
câu trả lời, chẳng hạn như “Tôi không nghĩ vậy”, “Tất nhiên là có!”, “Tôi không chắc”, 
v.v. Chương trình sẽ đọc các phản hồi từ tệp thành một mảng hoặc vector. Nó sẽ nhắc 
người dùng đặt câu hỏi, sau đó hiển thị một trong các câu trả lời, được chọn ngẫu nhiên 
từ mảng hoặc vector này. Chương trình tiếp tục lặp lại việc hỏi đáp này cho đến khi 
người dùng muốn thoát. */
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    // Mở tệp và đọc các phản hồi vào vector
    ifstream inputFile("8_ball_responses.txt");
    if (!inputFile) {
        cerr << "Không thể mở tệp phản hồi." << endl;
        return 1;
    }

    vector<string> responses;
    string response;
    while (getline(inputFile, response)) {
        responses.push_back(response);
    }
    inputFile.close();

    // Kiểm tra nếu không có phản hồi nào được đọc
    if (responses.empty()) {
        cerr << "Không có phản hồi trong tệp." << endl;
        return 1;
    }

    // Khởi tạo bộ sinh số ngẫu nhiên
    srand(static_cast<unsigned int>(time(0)));

    string question;
    char continueChoice;

    do {
        cout << "Hãy đặt câu hỏi có/không: ";
        getline(cin, question);

        // Chọn một phản hồi ngẫu nhiên
        int randomIndex = rand() % responses.size();
        cout << "Magic 8 Ball trả lời: " << responses[randomIndex] << endl;

        cout << "Bạn có muốn hỏi lại không? (y/n): ";
        cin >> continueChoice;
        cin.ignore(); // Xóa ký tự newline khỏi bộ đệm
    } while (continueChoice == 'y' || continueChoice == 'Y');

    cout << "Cảm ơn bạn đã sử dụng Magic 8 Ball!" << endl;
    return 0;
}