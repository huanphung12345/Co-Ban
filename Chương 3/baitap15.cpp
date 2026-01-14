/* 16. Chạy đua
Viết chương trình nhập vào tên và thời gian hoàn thành cuộc đua của 3 vận động viên.
Sau đó in ra xếp hạng của 3 người theo thứ tự nhất nhì ba.
Chú ý: báo lỗi nếu nhập thời gian đua là số âm. */
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name1, name2, name3;
    double time1, time2, time3;

    // Nhập tên và thời gian của vận động viên thứ nhất
    cout << "Nhap ten van dong vien thu nhat: ";
    getline(cin, name1);
    cout << "Nhap thoi gian hoan thanh (phut): ";
    cin >> time1;
    if (time1 < 0)
    {
        cout << "Thoi gian khong hop le. Vui long nhap so am." << endl;
        return 1;
    }
    cin.ignore(); // Xóa ký tự newline khỏi bộ đệm

    // Nhập tên và thời gian của vận động viên thứ hai
    cout << "Nhap ten van dong vien thu hai: ";
    getline(cin, name2);
    cout << "Nhap thoi gian hoan thanh (phut): ";
    cin >> time2;
    if (time2 < 0)
    {
        cout << "Thoi gian khong hop le. Vui long nhap so am." << endl;
        return 1;
    }
    cin.ignore(); // Xóa ký tự newline khỏi bộ đệm

    // Nhập tên và thời gian của vận động viên thứ ba
    cout << "Nhap ten van dong vien thu ba: ";
    getline(cin, name3);
    cout << "Nhap thoi gian hoan thanh (phut): ";
    cin >> time3;
    if (time3 < 0)
    {
        cout << "Thoi gian khong hop le. Vui long nhap so am." << endl;
        return 1;
    }

    // Xếp hạng vận động viên dựa trên thời gian
    cout << "\nXep hang cuoc dua:\n";
    if (time1 <= time2 && time1 <= time3)
    {
        cout << "Nhat: " << name1 << " (" << time1 << " phut)\n";
        if (time2 <= time3)
            cout << "Nhi: " << name2 << " (" << time2 << " phut)\n"
                 << "Ba: " << name3 << " (" << time3 << " phut)\n";
        else
            cout << "Nhi: " << name3 << " (" << time3 << " phut)\n"
                 << "Ba: " << name2 << " (" << time2 << " phut)\n";
    }
    else if (time2 <= time1 && time2 <= time3)
    {
        cout << "Nhat: " << name2 << " (" << time2 << " phut)\n";
        if (time1 <= time3)
            cout << "Nhi: " << name1 << " (" << time1 << " phut)\n"
                 << "Ba: " << name3 << " (" << time3 << " phut)\n";
        else
            cout << "Nhi: " << name3 << " (" << time3 << " phut)\n"
                 << "Ba: " << name1 << " (" << time1 << " phut)\n";
    }
    else
    {
        cout << "Nhat: " << name3 << " (" << time3 << " phut)\n";
        if (time1 <= time2)
            cout << "Nhi: " << name1 << " (" << time1 << " phut)\n"
                 << "Ba: " << name2 << " (" << time2 << " phut)\n";
        else
            cout << "Nhi: " << name2 << " (" << time2 << " phut)\n"
                 << "Ba: " << name1 << " (" << time1 << " phut)\n";
    }
    return 0;
}