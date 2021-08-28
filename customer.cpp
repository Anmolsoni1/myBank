#include<iostream>
#include "customer.h"
using namespace std;

void Customer::printDetails(){
	cout<<"\n\n\n-------------------------------";
	cout<<"Account Holder : "<<name;
	cout<<"\nAccount Balance : "<<balance;
	cout<<"\n\n\n------------------------------";
}
