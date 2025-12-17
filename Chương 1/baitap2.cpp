/* 3. Phòng sale The East Coast của một công ty tạo ra 58 phần trăm của tổng doanh thu. 
Dựa trên tỉ lệ phần trăm đó, viết một chương trình đoán xem Phòng sale The East 
Coast này sẽ tạo ra con số là bao nhiêu nếu công ty có doanh thu là 8.6 triệu đô trong 
năm nay. */

/* phân tích bài toán đầu vào doanh thu công ty 8.6 tỷ tính toán xử lý doanh thu phòng bán hàng bằng 58% */
/* buoc 1: tinh so tien cua phong kinh doanh */
/* buoc 2: tinh phan tram loi nhuan toan cong ty */
/* buoc 3: loi nhuan cong ty la 8.6M$ */
/* buoc 4: giai bai kinh doanh */

#include <iostream>
using namespace std;
int main(){
    float TienKinhDoanh;
    float DoanhThuCongTy = 8.6;
    TienKinhDoanh = (DoanhThuCongTy*58)/100;
    cout << "Doanh Thu Cua Phong Kinh Doanh " << TienKinhDoanh << endl;
    return 0;
}