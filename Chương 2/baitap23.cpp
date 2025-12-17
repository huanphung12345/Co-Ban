/* 23. Chương trình giao dịch chứng khoán
Chương trình giao dịch cổ phiếu
Tháng trước Joe đã mua một số cổ phiếu tại Acme Software, Inc. Dưới đây là chi 
tiết của việc mua:
− Số lượng cổ phiếu mà Joe mua là 1.000.
− Khi Joe mua cổ phiếu, anh ta trả 45,50 đô la cho mỗi cổ phiếu.
− Joe đã trả cho người môi giới chứng khoán của mình một khoản hoa hồng lên 
tới 2% số tiền anh ta trả cho cổ phiếu.
Hai tuần sau, Joe bán cổ phiếu. Dưới đây là chi tiết của đợt giảm giá:
− Số cổ phiếu mà Joe đã bán là 1.000.
− Anh đã bán cổ phiếu với giá 56,90 USD / cổ phiếu.
− Anh ta đã trả cho người môi giới chứng khoán của mình một khoản hoa hồng 
khác lên tới 2% số tiền anh ta nhận được cho cổ phiếu.
Viết chương trình hiển thị thông tin sau:
− Số tiền Joe đã trả để mua cổ phiếu.
− Số tiền hoa hồng Joe trả cho người môi giới của mình khi anh ta mua cổ phiếu.
− Số tiền mà Joe đã có được khi bán cổ phiếu
Trường Đại học Đại Nam Khoa Công nghệ thông tin
Trang | 8
− Số tiền hoa hồng Joe đã trả cho người môi giới của mình khi anh ta bán cổ
phiếu.
Hiển thị số lợi nhuận mà Joe kiếm được sau khi bán cổ phiếu của mình và trả hai 
khoản hoa hồng cho người môi giới của anh ấy. (Nếu số lợi nhuận mà chương trình 
của bạn hiển thị là một số âm, thì Joe đã mất tiền trong giao dịch.) */
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const int sharesBought = 1000;
    const double purchasePricePerShare = 45.50;
    const double sellingPricePerShare = 56.90;
    const double commissionRate = 0.02;

    // Tính toán số tiền Joe đã trả để mua cổ phiếu
    double totalPurchaseAmount = sharesBought * purchasePricePerShare;
    double purchaseCommission = totalPurchaseAmount * commissionRate;

    // Tính toán số tiền Joe đã có được khi bán cổ phiếu
    double totalSellingAmount = sharesBought * sellingPricePerShare;
    double sellingCommission = totalSellingAmount * commissionRate;

    // Tính toán lợi nhuận ròng
    double netProfit = (totalSellingAmount - sellingCommission) - (totalPurchaseAmount + purchaseCommission);

    // Hiển thị kết quả
    cout << fixed << setprecision(2);
    cout << "So tien Joe da tra de mua co phieu: $" << totalPurchaseAmount << endl;
    cout << "So tien hoa hong khi mua co phieu: $" << purchaseCommission << endl;
    cout << "So tien Joe da co duoc khi ban co phieu: $" << totalSellingAmount << endl;
    cout << "So tien hoa hong khi ban co phieu: $" << sellingCommission << endl;
    cout << "Loi nhuan rong cua Joe: $" << netProfit << endl;

    return 0;
}