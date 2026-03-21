// factorial 

# include <iostream>
using namespace std;


long long factorial(int n){                        // if you wa'na go for the big number int --> long long.

	if(n < 0){
		return -1;
	}
	
	long long fact = 1;	

	for(int i = 2; i <= n; i++){
	
		fact *= i;
	}
	
	return fact;            // handel case 0 and 1.
}



int main(){

	int n;
	cout << "enter number: ";
	cin >> n;
	
	long long result = factorial(n);
	if(result == -1){
		cout << "undefined." << endl;
	}
	
	else{
		cout << result << endl;
	}
	
	
	return 0;
}