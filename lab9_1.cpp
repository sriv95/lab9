#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double bal,interest,payment;
    int year=1;
	cout << "Enter initial loan: ";
	cin >> bal;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	do{
	    cout << fixed << setprecision(2); 
	    cout << setw(13) << left << year;
		cout << setw(13) << left << bal;
		cout << setw(13) << left << bal*interest/100;
		bal+=bal*interest/100;
		cout << setw(13) << left << bal;
		if(payment>bal){
			cout << setw(13) << left << bal;
			bal-=bal;
			cout << setw(13) << left << bal;
			break;
		}else{
			cout << setw(13) << left << payment;
			bal-=payment;
			cout << setw(13) << left << bal;
		}
		year++;
		cout << "\n";
	}while(true);
	
	return 0;
}