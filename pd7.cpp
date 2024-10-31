#include <iostream>
using namespace std;
main(){
	string name;
	int adult_ticket_price;
	int child_ticket_price;
	int adult_ticket_sold;
	int child_ticket_sold;
	float amount_percentage_donation;
	int totalamount;
	float charity_amount;
	int remaining_amount;
		
	cout<<"Enter Price of Adult Ticket: "<<endl;
	cin>>adult_ticket_price;
	
	cout<<"Enter Price of Child Ticket: "<<endl;
	cin>>child_ticket_price;

	cout<<"Total Number of Adult Tickets Sold: "<<endl;
	cin>>adult_ticket_sold;
 	
	cout<<"Total Number of Child Tickets Sold: "<<endl;
	cin>>child_ticket_sold;

 	cout<<"Enter Percentage to be Donated to Charity(in %age): "<<endl;
	cin>>amount_percentage_donation;

	totalamount=child_ticket_price*child_ticket_sold + adult_ticket_price*adult_ticket_sold;
	charity_amount=totalamount*0.1;
	
	remaining_amount=totalamount-charity_amount;

	cout<<"Total amount generated from ticket sales: "<<totalamount<<endl;
	cout<<"Donation to charity(10%): "<<charity_amount<<endl;
	cout<<"Remaining Amount After Donation: "<<remaining_amount<<endl;
	
	
	
			



	




}