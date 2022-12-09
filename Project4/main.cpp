#include "car.h"
#include "car_linked_list.h"
#include "passenger.h"
#include "passenger_linked_list.h"
#include "date.h"
#include <stdlib.h>
using namespace std;

int main() {
	PassengerLinkedList receipt("receipt.txt");
	cout << "Ho va Ten" << "   " << "  So Dien Thoai  " << "So Ve " << "    Diem Den  " << "     Bien So Xe " << "Thoi Gian " << "    Gio " << "  Gia Tien" << endl;
	cout << receipt;
	CarLinkedList car("car.txt");
	cout << car;
	//receipt.findPassenger("1");
	int n, chon, a;
	string pn;
	do {
		cout << "============MENU=============" << endl;
		cout << "1: Them khach hang. " << endl;
		cout << "3: Xem hoa don dat xe" << endl;
		cout << "2: Xem thong tin xe." << endl;
		cout << "4: Tim hoa don Theo So Dien Thoai." << endl;
		cout << "5: Tim xe theo bien so xe." << endl;
		cout << "6: Sua thong tin xe." << endl;
		cout << "0: Thoat Chuong Trinh." << endl;
		cout << "Moi nhap lua chon cua ban :"; cin >> chon;
		switch (chon)
		{
		case 1:
			system("cls");
			cin.ignore();
			cin >> receipt;
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			cout << "Ho va Ten" << "   " << "  So Dien Thoai  " << "So Ve " << "    Diem Den  " << "     Bien So Xe " << "Thoi Gian " << "    Gio " << "  Gia Tien" << endl;
			cout << receipt;
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			cout << car;
			system("pause");
			system("cls");
			break;
		case 4:

			system("cls");
			cout << "Moi Nhap Vao So Dien Thoai Cua Khach Hang  : ";
			cin.ignore();
			getline(cin, pn);
			receipt.findPassenger(pn);
			system("pause");
			system("cls");
			break;
		case 5:

			system("cls");
			cout << "Moi Nhap Vao Bien So Cua Xe : ";
			cin.ignore();
			getline(cin, pn);
			car.findCar(pn);
			system("pause");
			system("cls");
			break;
		case 6:

			system("cls");
			cout << "Moi Nhap Vao Bien So Cua Xe : ";
			cin.ignore();
			getline(cin, pn);
			car.editCar(pn);
			system("pause");
			system("cls");
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (chon);
	return 0;
}