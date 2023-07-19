#include <iostream>
#include <string>
#include <windows.h> 
#include <time.h>

using namespace std;
class cybersecurity
{
protected:
	string option;
	string username[5];
	string name;
	int adminkey;
	char a;
	char b;
	int key[5];
	int tempkey;
	
public:
	cybersecurity()
	{
		for (int i = 0; i < 5; i++)
		{
			username[i] = " ";
			key[i] = 0;
		}
		adminkey = 0;
		name = " ";
		option = " ";
		tempkey = 0;
		a = ' ';
		b = ' ';

	}
	~cybersecurity()
	{
		cout << "Your all login and other information has been deleted by groupon security webiste till next login." << endl;
	}
	void set_data()
	{
		username[0] = "ahmad";
		username[1] = "mustafa";
		username[2] = "umer";

		key[0] = 112233;
		key[1] = 223344;
		key[2] = 334455;
		
		adminkey = 956745;

		a = 219;  //initialized for loading bar
		b = 221;  //    ,,       ,,   ,,    ,,

	}
	void introduction()
	{
	start:
		cout << "\n\n";
		cout << "\t\t\t\t\t     $$ Main-Menu $$\n\n";
		cout << "Enter: \n";
		cout << "[1] to LOGIN: " << endl;
		cout << "[2] to CREATE ACCOUNT: " << endl;
		cout << "[3] to goto Admin Block: " << endl;
		cout << "[4] to Exit:" << endl;
		getline(cin >> ws, option);
		if (option == "1")
		{
			login();
		}
		else if (option == "2")
		{
			signup();
		}
		else if (option == "3")
		{
			admin();
		}
		else if (option == "4")
		{
			system("cls");
			cout << "\t\t\t|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|" << endl;
			cout << "\t\t\t|                       THANK YOU! Comeback Later..                  |" << endl;
			cout << "\t\t\t|____________________________________________________________________|" << endl << endl;
		}
		else
		{
			cout << "Invalid input give input again." << endl;
			goto start;
		}
	}
	void login()
	{

		cout << "\t\t\t\t\t|````````````````````````|" << endl;
		cout << "\t\t\t\t\t| Welcome to Login Page! |" << endl;
		cout << "\t\t\t\t\t|________________________|" << endl << endl;
	name:
		cout << "Enter your name: ";
		getline(cin >> ws, name);
		for (int i = 0; i < 5; i++)
		{
			if ((name.compare(username[i])) == 0)
			{
			password:
				cout << "Enter your 6-digit pin-code: ";
				cin >>tempkey;
				while (!cin.good()) //while loop used to check whether input is of related datatype it shouldnt be @ or abc,etc.
				{
					cout << "Inavlid input enter valid input: \n";
					cin.clear();
					cin.ignore(INT_MAX,'\n');
					cin >>tempkey;
				}
				if (tempkey == key[i])
				{
					system("cls");
					cout << "\n";
					account();
					break;
				}
				else if (tempkey != key[i])
				{
					cout << "Pin-code is wrong." << endl;
					goto password;
				}
			}
			else if ((name.compare(username[0])) != 0 && (name.compare(username[1])) != 0 && (name.compare(username[2])) != 0 && (name.compare(username[3])) != 0)
			{
				cout << "\t\t\t\t      This User-name does not exist.\n";
				goto name;
			}
		}
		 
	}
	void account()
	{
		cout << "\t\t\t\t\t|`````````````````````````|" << endl;
		cout << "\t\t\t\t\t|  Logged in Sucessfully  |" << endl;
		cout << "\t\t\t\t\t|_________________________|" << endl << endl;

	mainmenu:
		cout << "Enter:\n";
		cout << "[1] for Networking Security:\n"; //done
		cout << "[2] for Endpoint Security:\n"; //done
		cout << "[3] for Disaster Recovery:\n"; //done
		cout << "[4] for Virus Cleanup:\n";   //done
		cout << "[5] to goto Mainmenu:\n";  //done
		cout << "[6] to Exit:\n";  //done
		getline(cin>>ws, option);

		if (option == "1")    //Networking Secuirty
		{
			system("cls");
			cout << "\t\t\t\t\t## Networking Security ## \n" << endl;
			cout << "\t\t\t\tRunning Network Logistics on your system\n\n";
			cout << " 0%-|";
			for (int i = 0; i < 26; i++)
			{
				cout << a << b;
				Sleep(50);
			}
			cout << "|-100%\n\n";
			cout << " 0%-|";
			for (int i = 0; i < 26; i++)    //these two for-loops are for loading bar 
			{
				cout << a << b;
				Sleep(300);
			}
			cout << "|-100%\n\n";
			cout << "The results are: \n";
			cout << "1-Your Public Network Firewall is on.\n";
			cout << "2-Your Domain Network Firewall is off.\n";
			cout << "3-Your Private Network Firewall is off.\n";
		start1:
			cout << "Enter: \n[y] to Turn all three off:\n[n] to turn on other two:\n[l] to leave:\n";
			getline(cin >> ws , option);
			if (option == "y")
			{
				cout << "\t\t\t\tThe PUBLIC NETWORK Firewall have been Disabled.\n";
				cout << "\t\t\tThe DOMAIN NETWORK Firewall & PRIVATE NETWORK Firewall have been left off.\n\n";
			 enteragain1:
				cout << "Enter 1 to goto Login-Panel or 2 to Exit:\n";
				getline(cin >> ws, option);
				if (option == "1")
				{
					system("cls");
					cout << "Proceeding to Login-Panel\n\n";
					goto mainmenu;
				}
				else if (option == "2")
				{
					system("cls");
					cout << "\t\t\t|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|" << endl;
					cout << "\t\t\t|                       THANK YOU! Comeback Later..                  |" << endl;
					cout << "\t\t\t|____________________________________________________________________|" << endl << endl;
				}
				else
				{
					cout << "Invalid input\n";
					goto enteragain1;
				}
			}
			else if (option == "n")
			{
				cout << "\t\t\t\tThe PUBLIC NETWORK Firewall is left ON.\n";
				cout << "\t\t\t\tThe DOMAIN NETWORK Firewall is turned ON.\n";
				cout << "\t\t\t\tThe PRIVATE NETWORK Firewall is turned ON\n\n";
			 enteragain2:
				cout << "Enter 1 to goto Login-Panel or 2 to Exit:\n";
				getline(cin >> ws, option);
				if (option == "1")
				{
					system("cls");
					cout << "Proceeding to Login-Panel.\n\n";
					goto mainmenu;
				}
				else if (option == "2")
				{
					system("cls");
					cout << "\t\t\t|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|" << endl;
					cout << "\t\t\t|                       THANK YOU! Comeback Later..                  |" << endl;
					cout << "\t\t\t|____________________________________________________________________|" << endl << endl;
				}
				else
				{
					cout << "Invalid input\n";
					goto enteragain2;
				}
			}
			else if (option == "l")
			{
				cout << "\t\t\t\tTHE Settings have been left by default.\n\n";
			enteragain3:
				cout << "Enter 1 to goto Login-Panel or 2 to Exit:\n";
				getline(cin >> ws , option);
				if (option == "1")
				{
					system("cls");
					cout << "Proceeding to Login-Panel\n\n";
					goto mainmenu;
				}
				else if (option == "2")
				{
					system("cls");
					cout << "\t\t\t|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|" << endl;
					cout << "\t\t\t|                       THANK YOU! Comeback Later..                  |" << endl;
					cout << "\t\t\t|____________________________________________________________________|" << endl << endl;
				}
				else
				{
					cout << "Invalid input\n";
					goto enteragain3;
				}
			}
			else
			{
				cout << "Invalid Input.\n";
				goto start1;
			}
		}
		else if (option == "2")   //Endpoint Security
		{
		    system("cls");
			cout << "\t\t\t\t\t## Endpoint Security ## \n\n";
			cout << "\t\t\t\tChecking that is your device in Connection or not.\n\n ";
			cout << "0%-|";
			for (int i = 0; i < 26; i++)
			{
				cout << a << b;
				Sleep(50);
			}
			cout << "|-100%\n\n";
			cout << "The Results are: \n";
			cout << "-You Device have a network with Three devices.\n";
			cout << "1-Server.\n2-Laptop.\n2-Desktop.\n";
			cout << "\n";
		start2:
			cout << "Enter:\n";
			cout << "[y] to activate Endpoint Security:\n";
			cout << "[n] to Leave:\n";
			getline(cin >> ws , option);
			if (option == "y")
			{
				cout << "Activating...\n\n";
				cout << "0%-|";
				for (int i = 0; i < 26; i++)
				{
					cout << a << b;
					Sleep(300);
				}
				cout << "|-100%\n\n";
				cout << "\t\t\t\tYour System Components have been Secured.\n";
				cout << "\n";
			enteragain4:
				cout << "Enter 1 to goto Login-Panel or 2 to Exit.\n";
				getline(cin >> ws , option);
				if (option == "1")
				{
					system("cls");
					cout << "Prpceeding to Login-Panel.\n";
					goto mainmenu;
				}
				else if (option == "2")
				{
					system("cls");
					cout << "\t\t\t|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|" << endl;
					cout << "\t\t\t|                       THANK YOU! Comeback Later..                  |" << endl;
					cout << "\t\t\t|____________________________________________________________________|" << endl << endl;
				}
				else
				{
					cout << "Invalid Input.\n";
					goto enteragain4;
				}
			}
			else if (option == "n")
			{
				cout << "\t\t\tYour System is connected to other devices and you need to Turn-ON Endpoint Security. ";
				cout << " \t\t\t\t\t\tTo secure system components.\n";
			enteragain5:
				cout << "Enter 1 to goto Login-Panel or 2 to Exit.\n";
				getline(cin >> ws, option);
				if (option == "1")
				{
					system("cls");
					cout << "Proceeding to Login-Panel.\n";
					goto mainmenu;
				}
				else if (option == "2")
				{
					system("cls");
					cout << "\t\t\t|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|" << endl;
					cout << "\t\t\t|                       THANK YOU! Comeback Later..                  |" << endl;
					cout << "\t\t\t|____________________________________________________________________|" << endl << endl;
				}
				else
				{
					cout << "Invalid Input.\n";
					goto enteragain5;
				}
			}
			else
			{
				cout << "Invalid Input.\n";
				goto start2;
			}
			
		}
		else if (option == "3") //Disaster Recovery
		{
		 system("cls");
		 cout << "\t\t\t\t\t## Disaster Recovery ## \n\n";
	 start3:
		 cout << "Enter what type of recovery you want: \n";
		 cout << "[y] for Data Recovery:\n";
		 cout << "[n] for Trojan Removal:\n";
		 cout << "[l] for all functionalities & Data rec. & Trojan removal:\n";
		 getline(cin >> ws, option);
		 if (option == "y")
		 {
			 cout << "Recovering..\n\n";
			 cout << "0%-|";
			 for (int i = 0; i < 26; i++)
			 {
				 cout << a << b;
				 Sleep(100);
			 }
			 cout << "|-100%\n\n";
			 cout << "\t\t\tYour 450.7 GB lost data have been recovered in their Conventional Directories.\n\n";
		 enteragain6:
			 cout << "Enter:\n";
		     cout << "1 to goto Login-Panel or 2 to Exit.\n";
			 cin >> ws >> option;
			 if (option == "1")
			 {
				 system("cls");
				 cout << "Proceeding to Login-Panel...\n\n";
				 goto mainmenu;
			 }
			 else if (option == "2")
			 {
				 system("cls");
				 cout << "\t\t\t|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|" << endl;
				 cout << "\t\t\t|                       THANK YOU! Comeback Later..                  |" << endl;
				 cout << "\t\t\t|____________________________________________________________________|" << endl << endl;
			 }
			 else
			 {
				 cout << "Invalid Input.\n";
				 goto enteragain6;
			 }
		 }
		 else if (option == "n")
		 {
			 cout << "Removing trojan.\n\n";
			 cout << "Running Full System Scan OFFline:\n\n";
			 cout << "0%-|";
			 for (int i = 0; i < 26; i++)
			 {
				 cout << a << b;
				 Sleep(50);
			 }
			 cout << "|-100%\n\n";
			 cout << "\t\t\tTrojan was detected and system has taken automatic actions to Remove it.\n\n";
		 enteragain7:
			 cout << "Enter 1 to goto Login-Panel or 2 to Exit.\n";
			 getline(cin >> ws, option);
			 if (option == "1")
			 {
				 system("cls");
				 cout << "Proceeding to Login-Panel.\n";
				 goto mainmenu;
			 }
			 else if (option == "2")
			 {
				 system("cls");
				 cout << "\t\t\t|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|" << endl;
				 cout << "\t\t\t|                       THANK YOU! Comeback Later..                  |" << endl;
				 cout << "\t\t\t|____________________________________________________________________|" << endl << endl;
			 }
			 else
			 {
				 cout << "Invalid option.\n";
				 goto enteragain7;
			 }
		 }
		 else if (option == "l")
		 {
			 system("cls");
			 cout << "\t\t\tRecovering all Functionalities + Data Rec. + clearing all trojan.\n\n";
			 cout << "Removing trojan.\n\n";
			 cout << "Running Full System Scan Offline:\n\n";
			 cout << "0%-|";
			 for (int i = 0; i < 26; i++)
			 {
				 cout << a << b;
				 Sleep(50);
			 }
			 cout << "|-100%\n\n";
			 cout << "\t\t\tTrojan was detected and system has taken automatic actions to Remove it.\n\n";
			 cout << "Recovering Data..\n\n";
			 cout << "0%-|";
			 for (int i = 0; i < 26; i++)
			 {
				 cout << a << b;
				 Sleep(50);
			 }
			 cout << "|-100%\n\n";
			 cout << "\t\t\tYour 450.7 GB lost data have been recovered in their Conventional Directories.\n\n";

			 cout << "Rec. Functionalities..\n\n";
			 cout << "0%-|";
			 for (int i = 0; i < 26; i++)
			 {
				 cout << a << b;
				 Sleep(50);
			 }
			 cout << "|-100%\n\n";

			 cout << "\t\tYour ALL Functionalties, Data and Trojan processes have been successfull and you are good to go.\n\n";

		 enteragain8:
			 cout << "Enter 1 to goto Login-Panel or 2 to Exit.\n";
			 getline(cin >> ws, option);
			 if (option == "1")
			 {
				 system("cls");
				 cout << "Proceeding to Login-Panel.\n";
				 goto mainmenu;
			 }
			 else if (option == "2")
			 {
				 system("cls");
				 cout << "\t\t\t|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|" << endl;
				 cout << "\t\t\t|                       THANK YOU! Comeback Later..                  |" << endl;
				 cout << "\t\t\t|____________________________________________________________________|" << endl << endl;
			 }
			 else
			 {
				 cout << "Invalid option.\n";
				 goto enteragain8;
			 }

		 }
		 else
		 {
			 cout << "Invalid Input.\n";
			 goto start3;
		 }
			
		}
		else if (option == "4") //virus cleanup
		{
			system("cls");
			cout << "\n";
			cout << "\t\t\t\t\t\t## Virus Cleanup ##\n"; //value of a & b are initialized in set_data and declares in private
			cout << "\t\t\t\tScanning your system now. It can take a while.\n\n";
			cout << "\t\t\t";
			cout << "0%-|";
			// Print initial loading bar
			for (int i = 0; i < 26; i++)
			{
				cout << a << b;
				Sleep(300);
			}
			cout << "|-100% \n\n";
			cout << "\t\t\tYour System is scanned and some harmful files are discovered.\n";
			cout << "\t\t\t fill.cpp(contains harmful contents) that can cause damage." << endl;
			cout << "Enter:" << endl;
		start4:
			cout << "[y] to Take Action:\n";
			cout << "[n] to Leave:\n";
			getline(cin >> ws, option);
			if (option == "y")
			{
				cout << "\t\t\tActions have been taken and 'file.cpp' has been removed.\n";
			enteragain9:

				cout << "Enter 1 to goto Login-Panel or 2 to Exit.\n";
				cin >> ws >> option;
				if (option == "1")
				{
					system("cls");
					cout << "Procceeding to Login-panel.\n\n";
					goto mainmenu;
				}
				else if (option == "2")
				{
					system("cls");
					cout << "\t\t\t|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|" << endl;
					cout << "\t\t\t|                       THANK YOU! Comeback Later..                  |" << endl;
					cout << "\t\t\t|____________________________________________________________________|" << endl << endl;

				}
				else
				{
					cout << "Invalid Input.\n";
					goto enteragain9;
				}
			}
			else if (option == "n")
			{
				cout << "\t No action have been taken. You are good to go.\n";
			enteragain10:
				cout << "Enter 1 to goto Login-Panel and 2 to Exit.\n";
				getline(cin >> ws, option);
				if (option == "1")
				{
					system("cls");
					cout << "Procceeding to Login-Panel.\n";
					goto mainmenu;
				}
				else if(option=="2")
				{
					system("cls");
					cout << "\t\t\t|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|" << endl;
					cout << "\t\t\t|                       THANK YOU! Comeback Later..                  |" << endl;
					cout << "\t\t\t|____________________________________________________________________|" << endl << endl;

				}
				else
				{
					cout << "Invalid Input.\n";
					goto enteragain10;
				}
			}
			else if (option != "y" && option != "n")
			{
				cout << "Enter valid option.\n";
				goto start4;
			}
		}
		else if (option == "5")
		{
			system("cls");
			cout << "\n";
			introduction();
		}
		else if (option == "6")
		{
		system("cls");
		cout << "\t\t\t|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|" << endl;
		cout << "\t\t\t|                       THANK YOU! Comeback Later..                  |" << endl;
		cout << "\t\t\t|____________________________________________________________________|" << endl << endl;
		}
		else
		{
		system("cls");
		cout << "Invalid Input\n";
		goto mainmenu;
		}
	}
	void signup()
	{
		cout << "\t\t\t\t\t|``````````````````````````|" << endl;
		cout << "\t\t\t\t\t| Welcome to Sign in Page! |" << endl;
		cout << "\t\t\t\t\t|__________________________|" << endl << endl;
	entername:
		cout << "Enter your name: \n";
		getline(cin >> ws, username[3]);
		if (username[3] != username[0] && username[3] != username[1] && username[3] != username[2])
		{
		setpassword:
			cout << "Create a 6-Digit Pin-Code: \n";
			cin >> tempkey;
			while (!cin.good())
			{
				cout << "PIN cannot have special characters, Enter it again: \n";
				cin.clear();
				cin.ignore(INT_MAX, '\n');
				cin >> tempkey;
			}
			if (tempkey > 10000 && tempkey < 1000000)
			{
				if (tempkey == key[0] || tempkey == key[1] || tempkey == key[2])
				{
					cout << "\t\t\t\t PIN is not available, It exists..." << endl;
					goto setpassword;
				}
				else if (tempkey != key[0] || tempkey != key[1] || tempkey != key[2])
				{
					cout << "PIN is available, Your account is created...\n";
					key[3] = tempkey;
					login();
				}
			}
			else if (tempkey < 100000 || tempkey>100000)
			{
				cout << "\t\t\t\t    The PIN should be only 6-digit. \n";
				goto setpassword;
			}
		}
		else
		{
			cout << "\t\t\t\tThis username exists, Choose another one.\n";
			goto entername;
		}
	}
	void admin()
	{  //adminkey=956745 which is declared in set_data
		cout << "\t\t\tYou have only 1 Chances to login otherwise system will be blocked\n";
		cout << "Enter key: ";
		cin >> ws >> adminkey;
		while (!cin.good())
		{
			cout << "Enter Valid Input: ";
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cin >> adminkey;
		}
		if (adminkey == 956745)
		{
			system("cls");
			cout << "\n";
			cout << "\t\t\t\tThe USER-NAME's & KEY's of user's are as follow: \n\n";
			for (int i = 0; i < 4; i++)
			{
				cout << "\t\t\t\t\t" << username[i] << "  /  " << key[i] << endl;
				cout << "\n";
			}
		enter1:
			cout << "Enter:\n[1] if you want to delete any account:\n[2] to Leave: ";
			cin >> ws >> option;
			if (option == "1")
			{
				cout << "Enter the username of account to Delete it.\n";
				getline(cin >> ws, name);
				for (int i = 0; i < 4; i++)
				{
					if ((name.compare(username[i])) == 0)
					{
						cout << "\tAccount name '" << username[i] << "' & PIN is '" << key[i] <<"' will be deleted."<< endl;
						username[i] = "Username-";
						key[i] = 0;
						cout << username[i] << " Deleted.\n";
						cout << "Pin-Deleted=" << key[i] << endl;
						break;

					}
					else if ((name.compare(username[i])) != 0)
					{
						system("cls");
					}

				}

			}
			else if (option == "2")
			{
				system("cls");
				cout << "Leaving Admin-Block...\n";
			}
			else
			{
				cout << "Invalid Input";
				goto enter1;
			}
		}
		else if (adminkey != 956745)
		{
			system("cls");
			cout << "\t\t\t|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|" << endl;
			cout << "\t\t\t|                          WRONG PIN!                                |" << endl;
			cout << "\t\t\t|         System have been blocked due to security concerns          |" << endl;
			cout << "\t\t\t|____________________________________________________________________|" << endl << endl;
		}
	invalid:
		cout << "Enter:\n";
		cout << "[1] to goto Main-Menu:\n";
		cout << "[2] to Exit:\n";
		cin >> ws >> option;
		if (option == "1")
		{
			introduction();
		}
		else if (option == "2")
		{
			system("cls");
			cout << "\t\t\t|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|" << endl;
			cout << "\t\t\t|                       THANK YOU! Comeback Later..                  |" << endl;
			cout << "\t\t\t|____________________________________________________________________|" << endl << endl;
		}
		else
		{
			cout << "Invalid Input.\n";
			goto invalid;
		}
	}
};
class vpn: public cybersecurity  //class inherited by cybersecurity for VPN.
{
protected:
	string subscription;
	int pin;
	int random_pin;
	
public:
	vpn() :cybersecurity()
	{
		pin = 0;
		random_pin = 0;
		subscription =" ";
		//cout << "Constructor OF CHILD Class\n";
	}
	~vpn()
	{
		//cout << "Desttuctor of Child Class\n";
	}
	void function1()
	{
		cout << "Enter: \n";
	exit2:
		cout << "[1] To Get VPN:\n";
		cout << "[2] to Get to MainMenu::\n";
		getline(cin >> ws, option);
		if (option == "1")
		{
			system("cls");
		exit1:
			cout << "Enter 1 for Vpn subscription or 2 To Exit: \n";
			getline(cin >> ws, option);
			if (option == "1")
			{
				cout << "Random PIN generated.\n";
				srand(time(0)); //srand and rand used to generate a random subsription code and time to measure.
			    pin = rand();   //time of system in nanoseconds
				cout << "Please not this Subscription key for Vpn: " << pin; 
				cout << "\n";
				cout << "Note:\nThis Pin is valid only for this time.\nNext time when you will login it will be a new one." << endl << endl;
			pin:
				cout << "Enter your Subscription PIN: ";
				cin >>ws>> random_pin;
				while (!cin.good())
				{
					cin.clear();
					cin.ignore(INT_MAX,'\n');
					cout << "Invalid Input\n";
					cin >> ws>>random_pin;
				}
				if (random_pin == pin)
				{
					system("cls");
					cout << "Setting Up:" << endl << endl;
					cout << "0%-|";
					for (int i = 0; i < 16; i++)
					{
						cout << a << b;
						Sleep(50);
					}
					cout << "|-100%" << endl;
				exit:
					cout << "\n" << "Enter 'y' to Close Vpn or 'n' to let it continue and exit.\n";
					getline(cin >> ws, option);
					if (option == "y")
					{
						system("cls");
						cout << "VPN Closed.\n\n";
						cout << "Taking you to start.\n";
						goto exit2;

					}
					else if (option == "n")
					{
						cout << "Vpn is Left On.\n";
						cout << "Taking you to Groupon Secuirty.\n";
						introduction();
					}
					else
					{
						cout << "Invalid Input\n";
						goto exit;
					}
				
				}
				else if (random_pin != pin)
				{
					cout << "The PIn Does not match, enter again:\n";
					goto pin;
				}
			}
			else if (option == "2")
			{
				system("cls");
				cout << "\t\t\t|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|" << endl;
				cout << "\t\t\t|                       THANK YOU! Comeback Later..                  |" << endl;
				cout << "\t\t\t|____________________________________________________________________|" << endl << endl;
			    
			}
			else
			{
				cout << "Invalid Input\n";
				goto exit1;
				
			}
		}
		else if (option == "2")
		{
			introduction();
		}
		else
		{
			cout << "Invalid Input.\n";
			goto exit2;
		}
	}
	
};
int main()
{
	cout << "\t\t\t|%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|\n";
	cout << "\t\t\t|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|\n";
	cout << "\t\t\t|                GROUPON SECURITY SYSTEM                   |\n";
	cout << "\t\t\t|__________________________________________________________|\n";
	cout << "\t\t\t|__________________________________________________________|\n";
	

	vpn object;
	object.set_data();
	object.function1();

	return 0;
}