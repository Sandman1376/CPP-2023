#include <iostream>
using namespace std;

class Diem {
		float x, y;

	public:
		void nhap(char ten) {
			cout << "Nhap toa do diem " << ten << ": ";
			cin >> x >> y;
		}

		void xuat() {
			cout << "(" << x << ", " << y << ")";
		}
};

class XuatDiem {
		Diem A, B, C;

	public:
		void nhap() {
			A.nhap('A');
			B.nhap('B');
			C.nhap('C');
		}

		void xuat() {
			cout << "Toa do cua diem la:" << endl;
			cout << "Diem A: ";
			A.xuat();
			cout << endl;
			cout << "Diem B: ";
			B.xuat();
			cout << endl;
			cout << "Diem C: ";
			C.xuat();
			cout << endl;
		}
};

int main() {
	XuatDiem xd;
	xd.nhap();
	xd.xuat();

	return 0;
}

