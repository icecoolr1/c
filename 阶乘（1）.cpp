#include <iostream>
using namespace std;

int main(){
	int i,j;
	int del = 1;
	int sum = 0;
	
	for(int i = 1 ; i<= 12 ; i++){
		del = 1;
		for(int  j = 1; j <= i ; j++){
			del *= j;
		}
		sum += del;
	}
	cout<<sum;
} 
