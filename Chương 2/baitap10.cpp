/* 10. Bảo hiểm bao nhiêu?
Nhiều chuyên gia tài chính khuyên rằng chủ sở hữu bất động sản nên bảo hiểm ngôi 
nhà hoặc tòa nhà của họ ít nhất 80% số tiền mà nó sẽ chi phí để thay thế cấu trúc. 
Viết một chương trình yêu cầu người dùng nhập chi phí thay thế của một tòa nhà, 
sau đó hiển thị số tiền bảo hiểm tối thiểu mà họ nên mua cho tài sản đó. */
#include <iostream>
using namespace std;
int main() {
    const double PHAN_TRAM_BAO_HIEM_TOI_THIEU = 0.80;

    double chiPhiThayThe;

    // Nhập chi phí thay thế của tòa nhà
    cout << "Nhap chi phi thay the cua toa nha: ";
    cin >> chiPhiThayThe;

    // Tính số tiền bảo hiểm tối thiểu
    double soTienBaoHiemToiThieu = chiPhiThayThe * PHAN_TRAM_BAO_HIEM_TOI_THIEU;

    // Hiển thị kết quả
    cout << "So tien bao hiem toi thieu nen mua: $" << soTienBaoHiemToiThieu << endl;

    return 0;
}