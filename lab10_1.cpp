#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan,interest,pay;
	int i =1;
	cout << "Enter initial loan: ";
	cin>>loan;
	cout << "Enter interest rate per year (%): ";
	cin>>interest;
	cout << "Enter amount you can pay per year: ";
	cin>>pay;

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
	while (true){
	double Interest = (loan*interest)/100,Total =loan+Interest;

	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << loan;
	cout << setw(13) << left << Interest;
	cout << setw(13) << left << Total;
	if (pay>= Total){
	cout << setw(13) << left << Total;
	cout << setw(13) << left << 0.00;
	cout << "\n";
	break;
	}
	else{
	cout << setw(13) << left << pay;
	Total = Total - pay;
	cout << setw(13) << left << Total;
	cout << "\n";
	}
	i++;
	loan = Total;
	}
	return 0;
}
