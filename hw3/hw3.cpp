#include<iostream>
#include <iomanip> //std:setw
using namespace std;

int main()
{
    double amount;
	double rate;
    double payments;
	double balance;
	double monthRate;
	double interest;
	int month = 0;
    double principal;
	double totalInterest = 0;
	
// Input data
   cout << "Loan Amount: ";
   cin >> amount;
   cout << endl;
   cout << "Interest Rate (% per year): ";
   cin >> rate;
   cout << endl;
   cout << "Monthly Payments: ";
   cin >> payments;
   cout << endl;
// output data
cout << "******************************************************"<< endl;
cout << "	Amortization Table " << endl;
cout << "******************************************************"<< endl;
cout << left << setw(10)<< "Month" << setw(10) << "Balance" << setw(10) << "Payment" << setw(10) << "Rate" << setw(15) <<"Interest" << setw(15)<<"Principal" <<endl;
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
cout << left << setw(10) << month  << '$' << setw(9)<< amount << setw(10) << "N/A"  << setw(10) << "N/A"<< setw(15) << "N/A" << setw(15) << "N/A" << endl;
// caculation
   balance = amount;
   monthRate = rate/12;
   
   while(balance > 0)
   { 
     interest = balance * monthRate*0.01;
	 
     if(interest+balance > payments)
	 {
     month = month +1;
	 principal = payments - interest;
	 balance = balance - principal;
	 totalInterest = interest + totalInterest;
	 cout << left << setw(10) << month  << '$'<< setw(9) << balance << '$' <<setw(9) << payments << setw(10) << monthRate  << '$'<< setw(14) << interest  << '$' << setw(15) << principal  << endl; 
	 
    }
	 else{
	 month = month +1;
	 payments = interest + balance;
	 principal = balance;
	 balance = 0;
	 totalInterest = interest + totalInterest;
	  cout << left << setw(10) << month  << '$'<< setw(9) << balance << '$' <<setw(9) << payments << setw(10) << monthRate  << '$'<< setw(14) << interest  << '$' << setw(15) << principal  << endl;  
	 }
}	 
	 cout << "******************************************************" << endl;
	 cout << "It takes " << month << " months to pay off the loan." << endl;
	 cout << "Total interest paid is: $" << totalInterest <<endl;
	 
	 
	 
	  


 return 0;
}
