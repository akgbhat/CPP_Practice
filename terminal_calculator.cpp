#include <iostream>
using namespace std;

int main(){
	float num1, num2;
	cout << "Welcome to the Terminal Calculator! \nPleae type the first number: \n ";
	cin >> num1;
	cout <<"Please type the second number: \n";
	cin >> num2;
	char optr[] = {'+','-','*','/'};
	char optr_input;
	bool isValid = false;

	do{
	cout <<"Please enter the operator you want: ";
	cin >> optr_input;

	for(char op:optr){
		if (optr_input==op){
			isValid = true;
			if(op == '+'){
				cout<<"Sum is: "<< num1+num2 <<endl;
			}
			else if (op=='-'){
				cout<<"Difference is: "<< num1-num2<<endl;
			}
			else if(op=='*'){
				cout<<"Produt is: "<< num1*num2 <<endl;
			}
			else if (op == '/'&& num2!=0){
				cout<<"Quatient is: "<< num1/num2 <<endl;
			}
			else {
				cout<<"Invalid number"<<endl;
			}
		}
	}
	if (!isValid){
		cout << "Invalid operator! Please try again. \n\n";
	}
	} while (!isValid);	
}
