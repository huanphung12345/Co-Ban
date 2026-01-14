/* 16. Số dư tài khoản tiết kiệm
Viết chương trình tính số dư của tài khoản tiết kiệm tại thời điểm cuối kỳ. Chương trình
sẽ hỏi người dùng về lãi suất hàng năm, số dư ban đầu và số tháng đã trôi qua kể từ khi
tài khoản được thành lập. Sau đó, một vòng lặp sẽ lặp lại mỗi tháng một lần, thực hiện
như sau:
A. Hỏi người dùng số tiền gửi vào tài khoản trong tháng. (Không chấp nhận số âm.)
Số tiền này phải được cộng vào số dư.
B. Hỏi người dùng số tiền rút từ tài khoản trong tháng. (Không chấp nhận số âm.)
Số tiền này phải được trừ vào số dư.
C. Tính tiền lãi hàng tháng. Lãi suất hàng tháng là lãi suất hàng năm chia cho 12.
Nhân lãi suất hàng tháng với số dư, và cộng kết quả với số dư.
Sau lần lặp cuối cùng, chương trình sẽ hiển thị số dư cuối kỳ, tổng số tiền gửi, tổng số
tiền rút và tổng tiền lãi thu được.
Chú ý: Nếu số dư âm được tính tại bất kỳ thời điểm nào, một thông báo sẽ hiển thị cho
biết tài khoản đã bị đóng và vòng lặp sẽ kết thúc */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double annualInterestRate, initialBalance;
    int months;

    cout << "Enter annual interest rate (in %): ";
    cin >> annualInterestRate;
    cout << "Enter initial balance: ";
    cin >> initialBalance;
    cout << "Enter number of months the account has been opened: ";
    cin >> months;

    double monthlyInterestRate = annualInterestRate / 12 / 100;
    double balance = initialBalance;
    double totalDeposits = 0.0;
    double totalWithdrawals = 0.0;
    double totalInterest = 0.0;

    for (int month = 1; month <= months; ++month) {
        double deposit, withdrawal;

        cout << "\nMonth " << month << ":\n";

        // Deposit
        cout << "Enter amount deposited this month: ";
        cin >> deposit;
        while (deposit < 0) {
            cout << "Deposit cannot be negative. Please enter again: ";
            cin >> deposit;
        }
        balance += deposit;
        totalDeposits += deposit;

        // Withdrawal
        cout << "Enter amount withdrawn this month: ";
        cin >> withdrawal;
        while (withdrawal < 0) {
            cout << "Withdrawal cannot be negative. Please enter again: ";
            cin >> withdrawal;
        }
        balance -= withdrawal;
        totalWithdrawals += withdrawal;

        // Check for negative balance
        if (balance < 0) {
            cout << "Account has been closed due to negative balance.\n";
            break;
        }

        // Calculate interest
        double interest = balance * monthlyInterestRate;
        balance += interest;
        totalInterest += interest;
    }

    // Final summary
    cout << fixed << setprecision(2);
    cout << "\nFinal balance: $" << balance << endl;
    cout << "Total deposits: $" << totalDeposits << endl;
    cout << "Total withdrawals: $" << totalWithdrawals << endl;
    cout << "Total interest earned: $" << totalInterest << endl;

    return 0;
}