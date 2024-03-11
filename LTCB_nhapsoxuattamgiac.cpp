

#include <iostream>
using namespace std;
int main() {
	int so; cout << "Nhap so:"; cin >> so;
	for (int i = 1; i <= so; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}