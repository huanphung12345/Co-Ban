/* 6. Trường hợp Sửa đổi #1:
Sửa lại Chương trình 9-19 để nó có thể được sử dụng với bất kỳ nhóm quyên góp nào. 
Chương trình nên sử dụng mảng cấp phát động và yêu cầu người dùng nhập các giá trị
của nó.
//Chương trình 9-19:
// This program shows the donations made to the United Cause
// by the employees of CK Graphics, Inc. It displays
/ the donations in order from lowest to highest
// and in the original order they were received.
#include <iostream>
using namespace std;
// Function prototypes
void arrSelectSort(int *[], int);
void showArray(const int [], int);
void showArrPtr(int *[], int);
int main()
{
const int NUM_DONATIONS = 15; // Number of donations
// An array containing the donation amounts.
int donations[NUM_DONATIONS] = { 5, 100, 5, 25,10,19 5, 25, 5, 5, 100, 20 10, 15, 
10, 5, 10};
// An array of pointers to int.
int *arrPtr[NUM_DONATIONS] = { nullptr, nullptr,nullptr, nullptr, nullptr,
nullptr, nullptr,nullptr, nullptr, nullptr,25 nullptr, nullptr,nullptr, nullptr, nullptr};
// Each element of arrPtr is a pointer to int. Make each
// element point to an element in the donations array.
for (int count = 0; count < NUM_DONATIONS; count++)
arrPtr[count] = &donations[count];
// Sort the elements of the array of pointers.
arrSelectSort(arrPtr, NUM_DONATIONS);
// Display the donations using the array of pointers. This
// will display them in sorted order.
cout << "The donations, sorted in ascending order, are: \n";
showArrPtr(arrPtr, NUM_DONATIONS);
// Display the donations in their original order.
cout << "The donations, in their original order, are: \n";
showArray(donations, NUM_DONATIONS);
return 0; */
#include <iostream>
using namespace std;
void arrSelectSort(int* arr[], int n) {
    // Sắp xếp mảng con trỏ theo thứ tự tăng dần (sử dụng thuật toán sắp xếp chọn)
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (*arr[j] < *arr[minIndex]) {
                minIndex = j;
            }
        }
        // Đổi chỗ con trỏ
        int* temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
void showArray(const int arr[], int n) {
    // Hiển thị mảng theo thứ tự ban đầu
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void showArrPtr(int* arr[], int n) {
    // Hiển thị mảng theo thứ tự đã sắp xếp
    for (int i = 0; i < n; i++) {
        cout << *arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int n;
    cout << "Nhap so luong quyen gop: ";
    cin >> n;

    // Cấp phát động mảng quyen gop
    int* donations = new int[n];

    // Nhập giá trị cho mảng quyen gop
    cout << "Nhap cac gia tri quyen gop:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Quyen gop thu " << i + 1 << ": ";
        cin >> donations[i];
    }

    // Tạo mảng con trỏ
    int** arrPtr = new int*[n];
    for (int i = 0; i < n; i++) {
        arrPtr[i] = &donations[i];
    }

    // Sắp xếp mảng con trỏ
    arrSelectSort(arrPtr, n);

    // Hiển thị quyen gop đã sắp xếp
    cout << "Cac quyen gop, sap xep tang dan, la: " << endl;
    showArrPtr(arrPtr, n);

    // Hiển thị quyen gop theo thứ tự ban đầu
    cout << "Cac quyen gop, theo thu tu ban dau, la: " << endl;
    showArray(donations, n);

    // Giải phóng bộ nhớ đã cấp phát
    delete[] donations;
    delete[] arrPtr;

    return 0;
}