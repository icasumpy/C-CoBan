#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    int a[n]; // Khai báo mảng

    // Nhập mảng
    for (int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }

    // Tìm số lớn nhất chia hết cho 3
    int maxChiaHetCho3 = -1e9;

    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0 && a[i] > maxChiaHetCho3) {
            maxChiaHetCho3 = a[i];
        }
    }

    // Xuất kết quả
    if (maxChiaHetCho3 == -1e9)
        cout << "Khong co so nao trong mang chia het cho 3." << endl;
    else
        cout << "So lon nhat chia het cho 3 la: " << maxChiaHetCho3 << endl;

    return 0;
}
