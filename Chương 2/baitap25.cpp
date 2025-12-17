/* 25. Word Game
Viết một chương trình chơi chữ với người dùng. Chương trình sẽ thực hiện hỏi những 
dùng những thông tin sau đây:
− Tên của người chơi
− Tuổi của người chơi
Trường Đại học Đại Nam Khoa Công nghệ thông tin
Trang | 9
− Tên thành phố
− Tên trường đại học
− Lĩnh vực chuyên môn
− Loại động vật
− Tên thú cưng
Sau khi người dùng nhập vào những thông tin này, chương trình sẽ hiển thị một câu 
truyện như sau, với việc chèn các thông tin của người dùng vào các vị trí tương ứng 
thích hợp */
#include <iostream>
#include <string>
using namespace std;
int main() {
    string name, city, university, major, petType, petName;
    int age;

    // Nhập dữ liệu từ người dùng
    cout << "Nhap ten cua ban: ";
    getline(cin, name);
    cout << "Nhap tuoi cua ban: ";
    cin >> age;
    cin.ignore(); // Để loại bỏ ký tự newline còn lại trong bộ đệm
    cout << "Nhap ten thanh pho: ";
    getline(cin, city);
    cout << "Nhap ten truong dai hoc: ";
    getline(cin, university);
    cout << "Nhap linh vuc chuyen mon: ";
    getline(cin, major);
    cout << "Nhap loai dong vat: ";
    getline(cin, petType);
    cout << "Nhap ten thu cung: ";
    getline(cin, petName);

    // Hiển thị câu chuyện
    cout << "\nCau chuyen cua ban:\n";
    cout << "Co mot nguoi ban ten la " << name << ", " << age << " tuoi, song o " << city << ".\n";
    cout << name << " dang hoc tai truong " << university << " voi linh vuc chuyen mon la " << major << ".\n";
    cout << "Ban cung co mot con " << petType << " ten la " << petName << ".\n";
    cout << "Moi ngay, " << name << " va " << petName << " cung nhau di dao quanh thanh pho.\n";

    return 0;
}