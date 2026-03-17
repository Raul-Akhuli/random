// armstrong number.

# include <iostream>
# include <cmath>
using namespace std;



int intPow(int base, int exp){
	
	int result = 1;
	
	for(int i = 0; i < exp; i++){
	
		result *= base;
	}
	return result;	
}




int main(){
	
	int n;
	cout << "enter number: ";
	cin >> n;
	int actual = n;

	int temp = n, digits = 0;
	while(temp != 0){
		digits++;             // exp is depent on the no of digits in the number.
		temp /= 10;
	}


	int sum = 0;
	while(n != 0){
	
		int digit = n % 10;
		sum += intPow(digit, digits);          // pow return double value -- you need to convert it into int
		n /= 10;
	}
	
	if(actual == sum){
		cout << "It is armstrong number.";
	}
	else{
		cout << "It is not an armstrong number.";
	}
	
	return 0;
}