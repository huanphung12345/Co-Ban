/* 19. Phân loại sóng điện từ:
Viết chương trình nhập vào bước sóng của 1 sóng điện từ. Hãy chỉ ra nó là loại sóng gì biết:
- Sóng radio bước sóng >= 10-2
- Sóng của lò vi sóng từ 10-3 đến 10-2
- Sóng hồng ngoại 7x10-7 đến 10-2
- Sóng ánh sáng 4 x 10-7 đến 7x10-7
- Sóng tử ngoại 1 x 10-8 đến 4 x 10-7
- Tia X quang: 1 x 10-11 đến 1 x 10-8
- Tia gamma: nhỏ hơn 1 x 10-11 */
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double buocSong;
    cout << "Nhap vao buoc song (m): ";
    cin >> buocSong;

    if (buocSong >= 1e-2)
        cout << "Song radio" << endl;
    else if (buocSong >= 1e-3)
        cout << "Song lo vi song" << endl;
    else if (buocSong >= 7e-7)
        cout << "Song hong ngoai" << endl;
    else if (buocSong >= 4e-7)
        cout << "Song anh sang" << endl;
    else if (buocSong >= 1e-8)
        cout << "Song tu ngoai" << endl;
    else if (buocSong >= 1e-11)
        cout << "Tia X quang" << endl;
    else
        cout << "Tia gamma" << endl;

    return 0;
}