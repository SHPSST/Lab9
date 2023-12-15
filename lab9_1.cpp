#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;


int main(){	
	double Loan,InT,Pay;
	cout << "Enter initial loan: ";
	cin >> Loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> InT ;
	cout << "Enter amount you can pay per year: ";
	cin >> Pay ; 

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
	for(int i=1 ;true ;++i){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << Loan;
	cout << setw(13) << left << Loan*InT/100;
	cout << setw(13) << left << Loan*InT/100+Loan;
	if((Loan*InT/100+Loan)<=Pay)Pay=Loan*InT/100+Loan;
	cout << setw(13) << left << Pay;
	cout << setw(13) << left << (Loan*InT/100+Loan)-Pay;
	cout << "\n";
	Loan=(Loan*InT/100+Loan)-Pay;
	if(Loan<=0)break;
	}	
	
	return 0;
}
