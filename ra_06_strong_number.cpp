// strong

/*
	145 = 1! + 4! + 5!
	40585 = 4! + 0! + 5! + 8! + 5!
*/

# include <iostream>
using namespace std;


int factorial(int num){

	if(num == 0) return 1;
	if(num == 1) return 1;
	
	int fact = 1;
	for(int i = 2; i <= num; i++){       // you can create a factorial array and access the elements index wise.
	
		fact = fact*i;
	}
	return fact;
}




int main(){

	int n;
	cout << "enter number:";
	cin >> n;
	int actual = n;
	
	int sum = 0;
	while(n != 0){
	
		int digit = n % 10;
		sum += factorial(digit);
		n /= 10;
	}
	
	if(actual == sum){
	
		cout << "entered number is strong.";
	}
	else{
	
		cout << "entered numbers is not strong.";
	}
	
	return 0;
}