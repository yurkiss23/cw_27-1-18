#include<iostream>
#include<string>
using namespace std;

int main()
{
	string text;
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
	cout << endl;
	return 0;
}
