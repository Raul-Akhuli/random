// palindrome.

# include <iostream>
using namespace std;

int main(){

	int num;
	cout << "enter number: ";
	cin >> num;
	int actual = num;
	
	int result = 0;
	while(num != 0){                    // safe for the negative numbers.
	
		int digit = num % 10;
		result = result*10 + digit;
		num /= 10;
	}
	
	if(actual == result){
	
		cout << "number is palindromic.";
	}
	else{
		
		cout << "number is not palindromic.";
	}
	
	
	return 0;
}