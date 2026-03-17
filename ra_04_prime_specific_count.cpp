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
	cout << "no of prime number you want: ";
	cin >> n;
	
	int count = 1, num = 2;       // if count = 0, then while should be (count < n).
	while(count <= n){
	
		if(isPrime(num)){
			cout << num << " ";
			count++;
		}
		num++;
	}
	
	
	return 0;
}