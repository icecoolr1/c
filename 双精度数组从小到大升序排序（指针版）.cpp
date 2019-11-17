#include <iostream>
#include<iomanip>
using namespace std;
#define WIDTH 5

void sort(double a1[], int len);
void display(double* a, int len);

int main() {
	double a1[] = { 45,6,7,3,88,22,11 };
	cout << "ÅÅÐòÇ°:" << endl;
	display(a1, 7);
	cout << endl;
	cout << "ÅÅÐòºó:" << endl;
	sort(a1, 7);

}


void display(double a1[], int len) {
	for (int i = 0; i < len; i++) {
		cout<<setw(WIDTH)<< a1[i];
	}
}

void sort(double* a, int size) {
	double t;
	double* q;
	for (int p = 1;p < size;p++) {
		q = a;
		for (int i = 0; i < size - p; i++) {
			if (*q > * (q + 1)) {
				t = *q;
				* q = *(q + 1);
				*(q + 1) = t;
				
			}
			q++;
		}
	}
	display(a, size);
}