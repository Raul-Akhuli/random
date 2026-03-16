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
	cout << "enter number up to you need prime: " << endl;
	cin >> n;
	
	if(n < 2){
	
		cout << "no prime numbers present.";
		return 0;
	}
	
	for(int i = 2; i <= n; i++){
	
		if(isPrime(i)){
	
			cout << i << " ";
		}
	}
	
	
	
	return 0;
}