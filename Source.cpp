#include<iostream>

using namespace std;

int main() {
	int a = 3, b = 5;

	cout << (a & b) << endl;
	cout << (a | b) << endl;
	cout << (a ^ b) << endl;
	cout << ~a << endl;
	cout << (a >> 1) << endl;
	cout << (a << 1) << endl;

	return 0;
}