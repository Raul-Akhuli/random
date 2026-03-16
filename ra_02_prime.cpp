// prime

# include <iostream>
using namespace std;


bool isPrime(int num){
    
	/*
	if(num <= 1) return false;
	for(int i = 2; i*i <= num; i++){
	
		if(num % i == 0) return false;
	}
	
	return true;
	*/



	if(num <= 1) return false;
	
	if(num == 2) return true;
	
	if((num % 2) == 0) return false;

	for(int i = 3; i*i <= num; i +=2){
	
		if(num % i == 0) return false;
	}
	
	return true;

}




int main(){

	int n;
	cout << "enter number: ";
	cin >> n;
	
	if(isPrime(n)){
	
		cout << "entered number is prime.";
	}
	else{
	
		cout << "entered number is not prime.";
	}
	
	return 0;
}