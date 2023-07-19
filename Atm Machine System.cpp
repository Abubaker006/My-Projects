#include <iostream>
#include <cstring>
using namespace std;
int main()

{
	int option,pin,accountnum;
	float deposit,balance;
	
	//char customer[4][50];
	int cust_pin[5],money_withdraw[4],money[4];
	
	
char customer[5][50]={"ali","mustafa"}; cust_pin[0]={1228};  money_withdraw[0]={4500};  money[0]={540000};//PRE-BUILT ACCOUNTS
	cust_pin[1]=4321;  money_withdraw[1]=4533;  money[1]=640000;//PRE-BUILT ACCOUNTS
	

cout<<"\t Choose Your Option\n";
cout<<"[1] Customer\n";
cout<<"[2] Admin\n";
cin>>option;
if(option==1) // CUSTOMER BLOCK 
{    
	cout<<"[1] Login\n";
	cout<<"[2] Create Account\n";
	cin>>option;
	if(option==1) // IF FOR LOGIN OR CREATE ACCOUNT
	{ char name[50];
	start:
	  cout<<"\n\t **Login Portal**"<<endl;
	  cout<<"\nEnter Your Name: ";
	  cin>>name;
	  int i=0;
	  while(i<10) //FOR LOOP TO CHECK USER NAME IS VALID OR NOT 
		{
	int res= strcmp(name,customer[i]); // BUILT IN FUNCTION TO COMPARE STRINGS BY RETURNING VALUE IN 0 OR 1 
		if(res==0) 
		{
		break;}
		;
		i++;
    
		}
		
	   	
		
		cout<<"Enter four digit Pin Code: ";
		cin>> pin;
	  for(int w=0;w<=4;w++) // FOR LOOP TO CHECK THE PIN IS VALID OR NOT 
		{
		
		if(pin==cust_pin[w])
        {cout<<"Login Successful :)"<<endl;
        mainmenu:// GOTO STATEMENT TO RETURN BACK TO MAIN SCREEN 
        cout<<"\n\t **MAIN SCREEN**\n";
        cout<<"\n[1] Inquire Balance\n";
        cout<<"[2] Withdraw Cash\n";
        cout<<"[3] Deposit Cash\n";
        cout<<"[4] Admin Bock\n";
        cout<<"[5] Quit \n";
        
        cin>>option;
        switch (option)
       {
		 case 1:
        
        	cout<<"Your current balance is "<<money[w]<<" Rs"<<endl;
        	goto mainmenu;
			
		case 2:
		cout<<"Enter the amount of money: ";
			cin>>money_withdraw[w];
			money[w]=money[w]-money_withdraw[w];
			cout<<"You withdrew: "<<money_withdraw[w]<<" Rs"<<endl;
			cout<<"Your remaining balance is: "<<money[w]<<" Rs"<<endl;
			goto mainmenu;
			
		case 3:
		cout<<"Enter the amount of money: ";
			cin>>deposit;
			money[w]=money[w]+deposit;
			cout<<"You deposited: "<<deposit<<" Rs"<<endl;
			cout<<"Your new balance is: "<<money[w]<<" Rs"<<endl;
			goto mainmenu;
			
					
		case 4:
		goto admin;
		break;
				
		case 5:
			
			
			cout<<"\n Thank You ";
			system("cls");
			break;
			break;
           
            
		
       
	   default:
	   	cout<<"Invalid Option";
		}
		break;}
	//	else if (pin != cust_pin[w])
	//	cout<<"/nInvalid Input :(";
		
}

system ("cls");
cout<<"Too many attempts";


		   
    }
	else if(option==2) // TO CREATE ACCOUNT
    {
    	
    	for(int e=2; e<5;e++)
    	{
    		cout<<"Enter your name in lower case: ";
    		cin>>customer[2];
    	
    		pin:// GOTO STATEMENT FOR VALIDATION OF 4 DIGIT
			cout<<"Enter your pin code of four digits: ";
            cin>>pin ;
            if (pin>999&&pin<10000)
            {cust_pin[2]=pin;
            
			}
			else{cout<<"/n Enter four digit number only";
			goto pin;
			}
    		cout<<"Enter the amount of money you want to add: ";
    		cin>>money[e];
    		goto start;
    		
		}
    	
    		 }
			
		
		
		
		
		
	}
	else if(option == 2)// ADMIN BLOCK 
    	admin:
	{ int admin=122833;
	cout<<"\n Enter your Six digit pin code (Only 1 Attempt) \n";
	cin>>pin;
	adminblock:
	   if(admin==pin)
	{   cout<<"\nAdmin block\n";
	    cout<<"[1] Check balance in Machine\n";
	    cout<<"[2] Check balance in accounts\n";
	    cout<<"[3] Check transaction history\n";
	    cout<<"[4] Add cash in machine\n";
	    cout<<"[5] Quit\n ";
	    cin>>option;
	    int totalamt=2000000;
	    switch(option)
	    {
		case 1:
	    	{
			
			 cout<<"Current amount in machine is: "<<totalamt<<" Rs";
	    	goto adminblock;	}
	    	
	    case 2:
	    	
	    		for(int e=0; e<3;e++)
	    		{ 
	    		cout<<customer[e]<<"  contains  "<<money[e]<<" Rs currently.\n";}
	    		
			goto adminblock;	
		case 3:
			{
			for(int r=0;r<3;r++)
			{cout<<customer[r]<<"  Withdrew  "<<money_withdraw[r]<<" Rs\n";
			}goto adminblock;}
		case 4:
			cout<<"Enter the amount of money: ";
			cin>>balance;
			cout<<"Old amount:"<<totalamt<<endl;
			totalamt=totalamt+balance;
			cout<<"New amount"<<totalamt;
			goto adminblock;
		case 5:
			system("cls");
			cout<<"Thank You :)";
			
	}
		
		
		
	}
	else 
    {
	system("cls");
	cout<<"Invalid input"<<endl<<"System Blocked";
    
	}
	
	}
	
}

	



