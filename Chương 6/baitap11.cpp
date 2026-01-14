/* 11. Phần mềm chấm thi (Bắt buộc)
Một người thầy đặt hàng bạn viết một chương trình chấm điểm thi cuối kỳ, với bài thi 
này gồm 20 câu hỏi trắc nghiệm và mỗi câu hỏi chỉ có bốn lựa chọn đáp án A, B, C 
hoặc D. 
Tệp CorrectAnswers.txt (như hình dưới) sẽ chứa trả lời đáp án cho tất cả các câu, với 
mỗi đáp án được viết trên một dòng riêng biệt, dòng đầu tiên chứa đáp án cho câu đầu 
tiên, dòng thứ hai chứa đáp án cho câu thứ hai,… Viết chương trình đọc nội dung của 
tệp CorrectAnswers.txt vào một mảng char, sau đó đọc nội dung một tệp chứa các câu 
trả lời của sinh viên, vào một mảng char thứ hai. (Bạn có thể sử dụng tệp 
StudentAnswers.txt như hình dưới cho mục đích kiểm tra). Chương trình sẽ xác định 
số câu hỏi mà sinh viên bị sai, sau đó hiển thị như sau:
− Hiển thị danh sách các câu bị sai gồm các thông tin sau:
o Đáp án trả lời sai của sinh viên, đáp án đúng
− Tổng số câu trả lời sai
− Tỷ lệ phần trăm câu trả lời đúng, có thể được tính như sau:
o Số câu trả lời đúng / Tổng số câu hỏi
− Nếu tỷ lệ phần trăm trả lời đúng là 70 phần trăm trở lên, chương trình cần thông 
báo học sinh đã vượt qua kỳ thi. Nếu không, thông báo học sinh đã trượt kỳ thi.
Nội dung 2 tệp CorrectAnswers.txt & StudentAnswers.txt như sau: 
Tệp CorrectAnswers.txt Tệp StudentAnswers.txt */
/* Lưu ý: Để đơn giản, trong bài tập này, thay vì đọc từ tệp, bạn có thể lưu trực tiếp
các đáp án vào mảng trong mã nguồn chương trình. */
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
const int NUM_QUESTIONS = 20;
int main() {
    char correctAnswers[NUM_QUESTIONS] = {
        'A', 'C', 'B', 'D', 'A',
        'B', 'C', 'D', 'A', 'B',
        'C', 'D', 'A', 'B', 'C',
        'D', 'A', 'B', 'C', 'D'
    };
    char studentAnswers[NUM_QUESTIONS] = {
        'A', 'C', 'B', 'A', 'A',
        'B', 'D', 'D', 'A', 'C',
        'C', 'D', 'B', 'B', 'C',
        'D', 'A', 'C', 'C', 'D'
    };
    int wrongCount = 0;
    vector<pair<int, pair<char, char>>> wrongDetails; // question number, (student answer, correct answer)

    for (int i = 0; i < NUM_QUESTIONS; ++i) {
        if (studentAnswers[i] != correctAnswers[i]) {
            wrongCount++;
            wrongDetails.push_back({i + 1, {studentAnswers[i], correctAnswers[i]}});
        }
    }

    double correctPercentage = ((NUM_QUESTIONS - wrongCount) / static_cast<double>(NUM_QUESTIONS)) * 100.0;

    cout << fixed << setprecision(2);
    cout << "Danh sach cac cau bi sai:\n";
    for (const auto& detail : wrongDetails) {
        cout << "Cau " << detail.first << ": Tra loi sai '" << detail.second.first
             << "', Dap an dung '" << detail.second.second << "'\n";
    }
    cout << "Tong so cau tra loi sai: " << wrongCount << "\n";
    cout << "Ty le phan tram cau tra loi dung: " << correctPercentage << "%\n";

    if (correctPercentage >= 70.0) {
        cout << "Ban da vuot qua ky thi.\n";
    } else {
        cout << "Ban da truot ky thi.\n";
    }

    return 0;
}