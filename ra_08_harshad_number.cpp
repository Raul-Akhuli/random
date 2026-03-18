// harshad number

/*

	18
	1+8 = 9
	18 % 9 == 0
	
*/

# include <iostream>
using namespace std;

int main(){
	
	int n;
	cout << "enter number: ";
	cin >> n;
		
	if(n <= 0){
	
		cout << "please enter a positive number." << endl;
		return 0;
	}
	
	int original = n;
	
	int sum = 0;
	while(n > 0){
	
		int digit = n % 10;
		sum += digit;
		n /= 10;
	}
	if(original % sum == 0){
	
		cout << "entered number is harshad number.";
	}
	else{
		cout << "entered number is not harshad number.";
	}
}