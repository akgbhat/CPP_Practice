#include <iostream>
using namespace std;

int main(){
	srand(time(0));
	int numRan = rand()%100+1;
	cout << "Guess a number between 1 to 100: \n";
	int numIn, count = 1;
	do{
		if(numIn<1 || numIn>100){
			cout<<"Error! Number is not within the range (1,100)\n";
		}
		else{
			if(numIn==numRan){
				cout << "You guessed the right number!\n";
				if (count==1){
					cout<< "You guessed it first attempt. Congrats!\n";
				}
				else{
					cout<<"It took " << count <<" attempts. Well done!\n";
				}
			}
			else if (numIn>numRan){
				cout << "Number guessed is Higher! Guess a lower number: \n";
			}
			else {
				cout <<"Number guessed is Lower! Guess a higher number: \n";
			}	
		}
		count++;
	}while (numIn != numRan);
}
