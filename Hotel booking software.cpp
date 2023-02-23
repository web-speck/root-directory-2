#include <iostream>
#include <string.h>
using namespace std;

int main()
{
		char name[20] ;
	cout<< "\n\n Enter Your Name: ";
	cin>>name;
	cout<< " Welcome, "   << name << "    select  package 1, 2 or 3 below;";
	
		cout<< "\n\n  OUR PACKAGES";
		
		cout<< "\n\n   DURATION ";
			    cout<< "\n 1) \t 1 week ";
				cout<< "\n 2) \t 3 days ";
				cout<< "\n 3) \t 2 days ";
				cout<< "\n 4) \t 1 day ";
				
			     int number ;
				cout<< "\n\n Select package : "	;
				cin>>number;
				if (number==1)
				{
					
				
					
					int input,  acc=10000, meal=0  ;
					int sum = acc + meal;
						
						cout<< "\n ACCOMODATION \t sh. 10,000 \n MEALS  \t sh. 0.00  \n\n Click '9' to checkout or any button to cancel:";
					    cin>> input;
						if(input ==9 )
                         {
							
							cout<< "\n\n Room successfully booked for  "  <<name <<"\n ACCOMODATION \t sh. 10,000 \n MEALS  \t sh. 0.00 \n Total Payout(ksh) "  <<sum <<"\n\n" ;
                         } else
						{
							cout<<" \n\n welcome again !! \n\n";
						}
				}			
									
						
						
						
						
               else if(number==2)
				 	
				{
						int input, acc=8000, meal=5000 ;
					    int sum = acc + meal;
					
						cout<< "\n ACCOMODATION \t sh. 8,000 \n MEALS  \t sh. 5,0000  \n\n Click '9' to checkout or any button to cancel:";
					    cin>> input;
						if(input ==9 )
						{
							cout<< "\n\n Room successfully booked for  "  <<name ;
							cout<< "\n ACCOMODATION \t sh. 8,000 \n MEALS  \t sh. 5,000 \n Total Payout(ksh) "  <<sum <<"\n\n"; 	
						} else
						{
							cout<<" \n\n welcome again \n\n";
						}
				}	
					
					
				 else if(number==3)
				 	
				{
						int input, acc=6000, meal=5000 ;
					    int sum = acc + meal;
					
						cout<< "\n ACCOMODATION \t sh. 6,000 \n MEALS  \t sh. 5,0000  \n\n Click '9' to checkout or any button to to cancel:";
					    cin>> input;
						if(input == 9 )
						{
							cout<< "\n\n Room successfully booked for  "  <<name ;
							cout<< "\n ACCOMODATION \t sh. 6,000 \n MEALS  \t sh. 5,000 \n Total Payout(ksh) "  <<sum <<"\n\n"; 	
						} else
						{
							cout<<" \n\n welcome again \n\n";
						}
				}	
				
				
				 else if(number==4)
				 	
				{
						int input, acc=5000, meal=3000 ;
					    int sum = acc + meal;
					
						cout<< "\n ACCOMODATION \t sh. 5,000 \n MEALS  \t sh. 3,0000  \n\n Click '9' to checkout or any button to cancel:";
					    cin>> input;
						if(input ==9 )
						{
							cout<< "\n\n Room successfully booked for  "  <<name ;
							cout<< "\n ACCOMODATION \t sh. 5,000 \n MEALS  \t sh. 3,000 \n Total Payout(ksh) "  <<sum <<"\n\n"; 	
						} else
						{
							cout<<" \n\n welcome again \n\n";
						}
				}	
				
				else
				{
					cout<<" \n\n Invalid input !!!\n\n";
				}	
					
					
					
					
					
						
				
				
				
				
				
					
					
					
				

	
	

	
	
	
	
	return 0;
}
     
	

