#include <iostream>
using namespace std;
int main(){
	
	while(true){
	
	 // to store a first value
	float number1;
	cout<<"Enter first value: ";
	cin>>number1;
	
	// to store a second value
	float number2;
	cout<<"Enter second value: ";
	cin>>number2;
	
	// to enter the operator like +,-,*,/
	char op;
	cout<<"Enter the operator: ";
	cin>>op;
	
	// Conditional statements
	if(op=='+'){
		cout<<"The sum is: "<<number1+number2<<endl<<endl;
		cout<<"************************************"<<endl;
	}
	else if(op=='-'){
		cout<<"The subtraction is: "<<number1-number2<<endl<<endl;
		cout<<"************************************"<<endl;
	}
	else if(op=='*'){
		cout<<"The multiplication is: "<<number1*number2<<endl<<endl;
		cout<<"************************************"<<endl;
	}
	else if(op=='/'){
		cout<<"The division is: "<<number1/number2<<endl<<endl;
		cout<<"************************************"<<endl;
	}
	else 
		cout<<"Invalid operator"<<endl;
		
}
}
