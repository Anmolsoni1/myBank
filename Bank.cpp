#include<iostream>
#include "customer.h"
using namespace std;
Customer customer;

void init();
void menu();

// Main Function
int main(){
	cout<<"\n\nWelcome to myBank Simulator\n\n";
	cout<<"Press any key to continue...";
	init();
	menu();
	return 0;
}

// Function to Initialize System
void init() {
	cout << "\n\n Initialization Phase \n\n";
	cout << "\nPlease Enter Initializing Simulation Details";
	cout << "\nCUSTOMER DETAILS";
	cout << "\nEnter Customer Name : ";
	cin>>customer.name;
	cout << "\nEnter Customer PIN : ";
	cin>>customer.pin;
	cout << "\nEnter Inital Deposit : ";
	cin>>customer.balance;
	cout << "\nCUSTOMER DETAILS COMPLETED! Press Any Key to Continue..."; 
}

// Function to Display Menu to User
void menu(){
	int selection;
	do {
		cout << "\nPlease Select one of the following";
		cout << "\n1. Withdraw Cash";
		cout << "\n2. Deposit Cash";
		cout << "\n3. View Account Balace";
		cout << "\n\n9.ADMIN LOGIN\n0. EXIT\n\nYour Selection : ";
		cin>>selection;
		switch(selection){
			case 1 : break;
			case 2 : break;
			case 3 : customer.printDetails();
				 break;

			case 0 : cout<<"\n\nThank You for using myBank";
				 break;
			default : cout<<"\nInvalid Selection.";
		}
	
	} while(selection != 0);

}
