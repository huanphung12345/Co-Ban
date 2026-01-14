/* 21. Thao tác trên mảng hai chiều (mảng 2D)
Viết chương trình sinhmảng hai chiều được khởi tạo với dữ liệu thử nghiệm. Sử dụng 
bất kỳ kiểu dữ liệu nào bạn muốn. Chương trình cần có các chức năng sau:
− getTotal — Hàm này nhận một mảng hai chiều làm đối số và trả về tổng các giá 
trị trong mảng.
− getAverage — Hàm này nhận một mảng hai chiều làm đối số và trả về trung bình 
của các giá trị trong mảng.
− getRowTotal — Hàm này nhận một mảng hai chiều làm đối số đầu tiên và một 
số nguyên làm đối số thứ hai. Đối số thứ hai ứng với chỉ số con của một hàng 
trong mảng. Hàm sẽ trả về tổng các giá trị trong hàng đó.
− getColumntotal — Hàm này nhận một mảng hai chiều làm đối số đầu tiên và một 
số nguyên làm đối số thứ hai. Đối số thứ hai ứng với chỉ số con của một cột trong 
mảng. Hàm sẽ trả về tổng giá trị trong cột đó.
− getHighestInRow — Hàm này nhận một mảng hai chiều làm đối số đầu tiên và 
một số nguyên làm đối số thứ hai. Đối số thứ hai ứng với chỉ số con của một 
hàng trong mảng. Hàm sẽ trả về giá trị cao nhất trong hàng đó.
− getLowestInRow — Hàm này nhận một mảng hai chiều làm đối số đầu tiên và 
một số nguyên làm đối số thứ hai. Đối số thứ hai ứng với chỉ số con của một 
hàng trong mảng. Hàm sẽ trả về giá trị thấp nhất trong hàng đó.
Hãy demo từng chức năng trong chương trình này */
#include <iostream>
using namespace std;
const int ROWS = 3;
const int COLS = 4;
int getTotal(int arr[ROWS][COLS]) {
    int total = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            total += arr[i][j];
        }
    }
    return total;
}
double getAverage(int arr[ROWS][COLS]) {
    int total = getTotal(arr);
    return static_cast<double>(total) / (ROWS * COLS);
}
int getRowTotal(int arr[ROWS][COLS], int row) {
    int total = 0;
    for (int j = 0; j < COLS; j++) {
        total += arr[row][j];
    }
    return total;
}
int getColumnTotal(int arr[ROWS][COLS], int col) {
    int total = 0;
    for (int i = 0; i < ROWS; i++) {
        total += arr[i][col];
    }
    return total;
}
int getHighestInRow(int arr[ROWS][COLS], int row) {
    int highest = arr[row][0];
    for (int j = 1; j < COLS; j++) {
        if (arr[row][j] > highest) {
            highest = arr[row][j];
        }
    }
    return highest;
}
int getLowestInRow(int arr[ROWS][COLS], int row) {
    int lowest = arr[row][0];
    for (int j = 1; j < COLS; j++) {
        if (arr[row][j] < lowest) {
            lowest = arr[row][j];
        }
    }
    return lowest;
}
int main() {
    int arr[ROWS][COLS] = {
        {3, 5, 7, 2},
        {8, 1, 4, 6},
        {9, 0, 2, 3}
    };
    cout << "Tong cac gia tri trong mang: " << getTotal(arr) << endl;
    cout << "Trung binh cac gia tri trong mang: " << getAverage(arr) << endl;
    for (int i = 0; i < ROWS; i++) {
        cout << "Tong cac gia tri trong hang " << i << ": " << getRowTotal(arr, i) << endl;
        cout << "Gia tri cao nhat trong hang " << i << ": " << getHighestInRow(arr, i) << endl;
        cout << "Gia tri thap nhat trong hang " << i << ": " << getLowestInRow(arr, i) << endl;
    }
    for (int j = 0; j < COLS; j++) {
        cout << "Tong cac gia tri trong cot " << j << ": " << getColumnTotal(arr, j) << endl;
    }
    return 0;
}