// perfect

# include <iostream>
using namespace std;


bool isPerfect(int n){
	
	if(n <= 1) {
	
		cout << "entered number is not perfect.";
		return false;
	}
	
	int sum = 1;
	for(int i = 2; i*i <= n; i++){
	
		if(n % i == 0){
	
			sum += i;
			
			if(i != n/i){             // int pairDev = n/i, you can take another variable also.
		
				sum +=n/i;
			}
		}
		
	}
	return sum == n;	
		
}





int main(){

	int n;
	cout << "enter number: ";
	cin >> n;

	
	if(isPerfect(n)){
	
		cout << "entered number is perfect.";
	}
	else{
	
		cout << "entered number is not perfect.";
	}
	
	
	return 0;
}