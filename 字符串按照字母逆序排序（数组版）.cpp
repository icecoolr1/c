#include <iostream>
#include<iomanip>
#define WIDTH 5
using namespace std;

void sort(char a1[], int len);
void display(char a1[], int len);

int main() {
	int count = 0;
	cout << "please input string";
	char c = '0';
	char a1[100];
	for (int i = 0; i < 100; i++) {
		
		cin >> c;
		a1[i] = c;
		count++;
		if (cin.get() == '\n')
		break;
	}
	
	cout << "ÅÅÐòÇ°:" << endl;
	display(a1, count);
	cout << endl;
	cout << "ÅÅÐòºó: " << endl;
	sort(a1, count);
	return 0;

}


void display(char a1[], int len) {
	for (int i = 0; i < len; i++) {
		cout <<setw(WIDTH)<< a1[i];
	}
}


void sort(char a1[], int len) {
	char t;
	for (int i = 0; i <= len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if ((int)a1[j] > (int)a1[j + 1]) {
				t = a1[j];
				a1[j] = a1[j + 1];
				a1[j + 1] = t;
			}
		}
	}
	 
	for (int k = len - 1; k >= 0; k--) {
		cout <<setw(WIDTH)<< a1[k];
	}

}
