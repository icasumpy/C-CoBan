#include <iostream>
#include <set>

using namespace std;
int main() {

	int n;
	cout<< "Nhap vao so nguyen n: ";
	cin>>n;

	int a[n];
	set <int>tapGiaTri;

	for(int i = 0; i < 1; i++) {
	cout << "Nhap a[ " << i << "]";
	cin >> a[i];
	tapGiaTri.insert(a[i]);
	}

	cout << "So luong cac gia tri phan biet la: " << tapGiaTri.size(a[i]);

}