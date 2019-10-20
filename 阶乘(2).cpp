#include <iostream>
using namespace std;

int main(){
	int sum = 0;
	int del =1;
	for(int i = 1; i<= 12; i++){
		del *= i;
		sum += del; 
	}
	cout<<sum;
}
