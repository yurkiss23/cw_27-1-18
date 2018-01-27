#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	const int SIZE = 5;
	int arrA[SIZE] = {};
	int arrB[SIZE] = {};
	srand(unsigned(time(0)));
	cout << "array A" << endl;
	for (int i = 0; i < SIZE; ++i) {
		arrA[i] = rand() % 10;
		cout << arrA[i] << "\t";
	}
	cout << endl;
	/*cout << "array B" << endl;
	for (int i = 0; i < SIZE_B; ++i) {
	arrB[i] = rand() % 10;
	cout << arrB[i] << "\t";
	}
	cout << endl;
	const int SIZE = SIZE_A + SIZE_B;
	int arr[SIZE] = {};
	for (int i = 0; i < SIZE_A; ++i) {
	arr[i] = arrA[i];
	}
	for (int i = 0; i < SIZE_B; ++i) {
	arr[i + (SIZE_A)] = arrB[i];
	}
	cout << "array all" << endl;
	for (int i = 0; i < SIZE; ++i) {
	cout << arr[i] << "\t";
	}
	cout << endl;

	cout << "new array A" << endl;
	for (int i = 0; i < SIZE_A; ++i) {
	arrA[i] = arr[i];
	cout << arrA[i] << "\t";
	}
	cout << endl;
	cout << "new array B" << endl;
	for (int i = 0; i < SIZE_B; ++i) {
	arrB[i] = arr[i+SIZE_A];
	cout << arrB[i] << "\t";
	}
	cout << endl;*/


	/*int tmp = arrA[0];
	for (int i = 0; i < SIZE-1; ++i) {
	arrA[i] = arrA[i+1];
	cout << arrA[i] << "\t";
	}
	arrA[SIZE - 1] = tmp;
	cout << arrA[SIZE - 1] << endl;



	for (int i = 0; i < SIZE - 1; ++i) {
	arrB[i] = arrA[i + 1];
	cout << arrB[i] << "\t";
	}
	arrB[SIZE - 1] = arrA[0];
	cout << arrB[SIZE - 1] << endl;*/

	int tmp = arrA[SIZE - 1];
	for (int i = SIZE - 1; i > 0; --i) {
		arrA[i] = arrA[i - 1];
	}
	arrA[0] = tmp;
	for (int i = 0; i < SIZE; ++i) {
		cout << arrA[i] << "\t";
	}
	cout << endl;
	return 0;
}
// arr : 1 2 3 4 
// barr  2 3 4 1
// arr
