/* 10. Kỳ thi lấy Bằng lái xe
Văn phòng Giấy phép Lái xe địa phương yêu cầu bạn viết một chương trình chấm điểm 
phần viết của một người thi lấy bằng lái xe. Đề thi có 20 câu hỏi trắc nghiệm, với đây 
là các đáp án:
Chương trình cần lưu trữ các đáp án trên trong một mảng. Chương trình sẽ yêu cầu 
nhập các câu trả lời của người thi cho 20 câu hỏi, và các câu trả lời này phải được lưu 
trong một mảng khác. Sau khi câu trả lời được nhập, chương trình sẽ hiển thị thông báo 
cho biết người thi đã vượt qua hay không trong kỳ thi (cần đúng ít nhất 15 trong số 20 
câu để thi đỗ). Sau đó, chương trình cũng sẽ hiển thị tổng số câu trả lời đúng, tổng số
câu trả lời sai và một danh sách số thứ tự các câu bị sai. 
Xác thực đầu vào: Chỉ chấp nhận các chữ cái A, B, C hoặc D làm câu trả lời. */
#include <iostream>
#include <vector>
using namespace std;
const int NUM_QUESTIONS = 20;
const int PASSING_SCORE = 15;
int main() {
    char correctAnswers[NUM_QUESTIONS] = {
        'A', 'C', 'B', 'D', 'A',
        'B', 'C', 'D', 'A', 'B',
        'C', 'D', 'A', 'B', 'C',
        'D', 'A', 'B', 'C', 'D'
    };
    char userAnswers[NUM_QUESTIONS];
    int correctCount = 0;
    vector<int> wrongQuestions;

    cout << "Nhap cac cau tra loi (A, B, C, D) cho " << NUM_QUESTIONS << " cau hoi:\n";
    for (int i = 0; i < NUM_QUESTIONS; ++i) {
        char answer;
        while (true) {
            cout << "Cau " << (i + 1) << ": ";
            cin >> answer;
            answer = toupper(answer);
            if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D') {
                userAnswers[i] = answer;
                break;
            } else {
                cout << "Cau tra loi khong hop le. Vui long nhap A, B, C hoac D.\n";
            }
        }
    }

    for (int i = 0; i < NUM_QUESTIONS; ++i) {
        if (userAnswers[i] == correctAnswers[i]) {
            correctCount++;
        } else {
            wrongQuestions.push_back(i + 1);
        }
    }

    cout << "\nKet qua thi:\n";
    if (correctCount >= PASSING_SCORE) {
        cout << "Ban da thi do!\n";
    } else {
        cout << "Ban da thi rot.\n";
    }
    cout << "Tong so cau tra loi dung: " << correctCount << "\n";
    cout << "Tong so cau tra loi sai: " << (NUM_QUESTIONS - correctCount) << "\n";

    if (!wrongQuestions.empty()) {
        cout << "Cac cau tra loi sai: ";
        for (int q : wrongQuestions) {
            cout << q << " ";
        }
        cout << "\n";
    }

    return 0;
}