#include<iostream>
//#include<string>
using namespace std;

int main()
{
	/*string text;
	getline(cin, text);
	for (int i = 0; i < text.length(); ++i) {
		if (isupper(text[i])) {
			text[i]=(char)(tolower(text[i]));
		}
		else if (islower(text[i])) {
			text[i] = (char)toupper(text[i]);
		}

	}
	cout << text << endl;
	for (int i = 0; i < text.size(); ++i) {
		cout << text[i] << " ";
	}
	cout << endl;*/

	int sum = 0, mult = 1;
	const int ROWS = 3, COLS = 4;
	int m[ROWS][COLS] = { {1,2},{3,4},5,6,7 };
	for (int r = 0; r < ROWS; ++r) {
		for (int i = 0; i < COLS; ++i) {
			sum += m[r][i];
			mult *= m[r][i];
			cout << m[r][i] << "\t";
		}
		cout << endl;
	}
	
	//cout <<"\nsum: "<< sum << "\tmult: " << mult << endl;
	return 0;
}
