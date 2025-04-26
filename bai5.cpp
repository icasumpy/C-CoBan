#include <iostream>
using namespace std;

// Hàm đệ quy tính Fibonacci
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;

    if (n < 0) {
        cout << "Vui long nhap so nguyen khong am." << endl;
        return 1;
    }

    cout << "Day Fibonacci tu 0 den " << n << " la: ";
    for (int i = 0; i <= n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
