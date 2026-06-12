#include<iostream>
using namespace std;

int main() {
	// 1D Array
	int arr[5];
	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

	cout << endl;

	arr[3] = 7;
	cout << arr[3] << endl;

	// 2D Array
	int arr2[3][5];

	arr2[1][3] = 68;
	cout << arr2[1][3] << endl;
	cout << endl;

	string s = "Rishab";
	int len = s.size();
	s[len - 6] = 'r';
	cout << s << endl;
	cout << s.size();

	return 0;
}