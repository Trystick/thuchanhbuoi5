 #include <iostream>

using namespace std;
int cong(int a, int b);//SV A
int tru(int a, int b);//SV B
int nhan(int a, int b);//SV C
int chia(int a, int b);//SV D

bool kiemTraSoNguyenTo(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}
//Thay đổi ở câu 8
int main()
{
	int a=4, b=10;
	int n = 7;
	cout << "CHUONG TRINH TINH TOAN CO BAN" << endl;
	//Cac ban code tai day

	cout<<"ket qua phep tru la"<<a-b;

	cout << "Tong la: "<< a+b;

	cout << "Nhan la: "<< nhan(400,500);

	if (kiemTraSoNguyenTo(n) == true) {
		cout << n << " la so nguyen to";
	}
	else {
		cout << n << " khong la so nguyen to";
	}
	cout << endl;
	system("pause");
	return 0;
}

int nhan(int a, int b){
		return a * b;
}