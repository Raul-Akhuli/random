// fibonacci

# include <iostream>
using namespace std;

int main(){

	int n;
	cout << "enter no of element you want(fibonacci): ";
	cin >> n;

	if(n <= 0){
	
		cout << "enter a positive integer." << endl;
		return 0;
	}

	int a = 0, b = 1;

	for(int i = 0; i < n; i++){
	
		cout << a << " ";
		int c = a+b;
		a = b;
		b = c;
	}
	
	
	return 0;
}