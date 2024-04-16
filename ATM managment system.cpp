#include <iostream>
using namespace std;
int main(){
	int input;
	
	cout << "************ ATM MANAGMENT SYSTEM ************"<<endl<<endl;
	cout << "Press 1 for Balance Inquiry: "<<endl;
	cout << "Press 2 for cash Withdrawal: "<<endl;
	cout << "Press 3 for Pin Change: "<<endl;
	cout << "Press 4 for Services: "<<endl;
	cout << "Press 5 for Fund Transfer: "<<endl;
	
	cout <<endl<< "Enter your choice: ";
	cin >> input;
	
	switch(input){
		int pin;
		case 1:
			cout<<endl<< "Balance Inquiry:-"<<endl;
			cout << "Total amount: 50k"<< endl;
			cout << "Deducted Amount: 30k"<< endl;
			cout << "Current Amount: 20k"<< endl;
			break;
			
			case 2:
			cout<<endl<< "Cash Withdrawal:-"<<endl;
			cout << "Total amount: 90k"<< endl;
			cout << "Amount Withdrawal: 55k"<< endl;
			cout << "Account balance: 35k"<< endl;
			break;
			
			case 3:
			cout<<endl<< "Pin Change:-"<<endl;
			cout << "Enter Old Pin: ";
			cin >> pin;
			cout << "Enter New Pin: ";
			cin >> pin;
			cout << "Re-Enter New Pin: ";
			cin >> pin;
			cout << "Your Pin Code Is Change Now: ";
			break;
			
			case 4:
			cout<<endl<< "Services:-"<<endl;
			cout << "Cash Withdrawals: "<< endl;
			cout << "Balance Checking: "<< endl;
			cout << "Transferring Credit: "<< endl;
			break;
			
			case 5:
			cout<<endl<< "Funds Transfer:-"<<endl;
			cout << " Insert your debit/ATM card: "<< endl;
			cout << " Enter your ATM PIN "<< endl;
			cin >> pin;
			cout << "Enter the required bank details. "<< endl;
			cout << "Enter the amount and click on 'Yes'";
			break;
	}
	
}
