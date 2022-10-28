 #include <iostream>

using namespace std;
int cong(int a, int b);//SV A
int tru(int a, int b);//SV B
int nhan(int a, int b);//SV C
int chia(int a, int b);//SV D
//Thay đổi ở câu 8
int main()
{
	int a=4, b=10;
	cout << "CHUONG TRINH TINH TOAN CO BAN" << endl;
	//Cac ban code tai day

	cout<<"ket qua phep tru la"<<a-b;

	cout << "Tong la: "<< a+b;

	cout << "Nhan la: "<< nhan(4,5);
	
	cout << endl;
	system("pause");
	return 0;
}

int nhan(int a, int b){
		return a * b;
}