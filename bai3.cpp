#include <iostream>
#include <iomanip> // để dùng setw
#include <string>
using namespace std;

struct SinhVien {
    string ten;
    float toan, ly, hoa;
    float diemTB;
};

// Hàm nhập 1 sinh viên
void nhap(SinhVien &sv) {
    cin.ignore(); // Xóa bộ đệm trước khi nhập chuỗi
    cout << "Nhap ten: ";
    getline(cin, sv.ten);
    cout << "Nhap diem Toan: ";
    cin >> sv.toan;
    cout << "Nhap diem Ly: ";
    cin >> sv.ly;
    cout << "Nhap diem Hoa: ";
    cin >> sv.hoa;

    sv.diemTB = (sv.toan + sv.ly + sv.hoa) / 3;
}

// Hàm in sinh viên
void inSinhVien(const SinhVien &sv) {
    cout << setw(20) << left << sv.ten
         << setw(10) << sv.toan
         << setw(10) << sv.ly
         << setw(10) << sv.hoa
         << fixed << setprecision(2)
         << " -> DTB: " << sv.diemTB << endl;
}

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    SinhVien ds[n];

    // Nhập danh sách sinh viên
    for (int i = 0; i < n; i++) {
        cout << "\nNhap sinh vien thu " << i + 1 << ":\n";
        nhap(ds[i]);
    }

    // In sinh viên có điểm trung bình >= 8
    cout << "\nDanh sach sinh vien co diem trung binh >= 8:\n";
    for (int i = 0; i < n; i++) {
        if (ds[i].diemTB >= 8.0) {
            inSinhVien(ds[i]);
        }
    }

    return 0;
}
