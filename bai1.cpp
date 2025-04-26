#include <iostream>
using namespace std;

// Hàm kiểm tra số nguyên tố
bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
	cout << "IN SO NGUYEN TO NHO HON N";
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Vui long nhap mot so nguyen duong." << endl;
        return 1;
    }

    if (laSoNguyenTo(n))
        cout << n << " la so nguyen to." << endl;
    else
        cout << n << " khong phai la so nguyen to." << endl;

    return 0;
}
