#include <iostream>
using namespace std;

void dial();
void menu();
void option1();
void option2();
void option3();
void option4();
	 
int main()
{
	dial();
	menu();
	option1();
	option2();
	option3();
	option4();
	
int num;	

 switch (num)
	{
		case 1:
		 	option1();
		break;
		
		case 2:
			option2();
		break;
		
		case 3:
			option3();
		break;
		
		case 4:
			option4();
		break;
		
		default:
				cout<<"Try again.";
				system("pause");
				system("cls");	
				 menu();		
				
	}
	return 1; 
}
void dial()
{
	string number;
	
	cout<<"Enter *303#" <<endl;
	cin>> number;
	if(number != "*303#")
	{
		cout<<"Try again"<<endl;
			system("pause");
			system("cls");
			dial();
	}
	else
	{
	cout<<"Please wait........\n";
	system("pause");
	system("cls");
		menu();
		
	}

	system("cls");
	exit(true);
	
}
void menu(){
	int num;
		
		cout<<"CHOOSE YOUR OPTION \n";
		cout<<"_______________________\n";
		
		cout<<"1. Send Money\n";
		cout<<"2. Airtime & Data \n";
		cout<<"3. Investment \n";
		cout<<"4. My Account \n";
		cout<<"5. Exit \n";
		
		 cin>> num;
		 if(num == 1){
		 	system("cls");
		 	option1();
		 }
		 else if(num == 2)
		 {
		 	system("cls");
		 	option2();
		 }
		 else if(num == 3)
		 {
		 	system("cls");
		 	option3();
		 }
		 else if(num == 4)
		 {
		 	system("cls");
		 	option4();
		 }
		 else
		 system("cls");
		 exit(false);
}
void option1()
{
	int num1;
	string amount, phone;
	
	cout<<"Choose your offer.\n";
	
	cout<<"1. K50" <<endl;
	cout<<"2. K100" <<endl;
	cout<<"3. K300" <<endl;
	cout<<"4. Enter your own amount" <<endl;
	cin>>num1;
	

	 if(num1 == 1){
	 	
	 	 cout<<"Enter contact number.";
			cin>> phone;
			cout<<endl;
		 cout<<"K50 was successfully sent.. Thank you for using our services!!!"<<endl;
		 
		 }
		 else if(num1 == 2)
		 { 
		 
		 	 cout<<"Enter contact number";
			cin>> phone;
			cout<<endl;
				
		 }
		 else if(num1 == 3)
		 {
			 cout<<"Enter contact number.";
			cin>> phone;
			cout<<endl;
		 cout<<"K300 was successfully sent.. Thank you for using our services!!!"<<endl;
		 }
		 else if(num1 == 4)
		 {
		 	cout<<"4. Enter your own amount" <<endl;
			cin>>amount;
			cout<<endl;
			cout<<"Enter contact number.";
			cin>> phone;
			cout<<amount<<" was successfully sent.. Thank you for using our services!!!" <<endl;
		  }
		 else
		
	system("cls");
	exit(true);
	
}

void option2()
{
	int num2;
	int amount;
	
	cout<<"Choose your offer.\n";
	cout<<"1. K50 = 340 Mins, 1.2GB, 14Day" <<endl;
	cout<<"2. K100 = 500 Mins, 5GB, 14Day" <<endl;
	cout<<"3. K300 = 600 Mins, 8GB, 21Day" <<endl;
	cout<<"4. Enter your own amount " <<endl;
	cin>>num2;
	if(num2 == 4){
		system("cls");
		cout<<"4. Enter amount ";
		cin>>amount;
		
		cout<<"you have  purchased a k"<<amount<<" bundle pack"<<endl;
	}
	else{
		if(num2 == 1) amount = 50;
		else if(num2 == 2) amount = 100;
		else if(num2 == 3) amount = 300;
		cout<<"you have  purchased a k"<<amount<<" bundle pack"<<endl;
	}
		cout<<"Successful, Thank you !!!"<<endl;
		system("pause");
		system("cls");
	exit(true);
	
}
void option3()
{
	int num3;
	string amount, phone;
	
	cout<<"Choose your offer.\n";
	
	cout<<"1. Invest plan" <<endl;
	cout<<"2. Education plan" <<endl;
	cout<<"3. Business plan" <<endl;
	cout<<"4. Exit"<<endl;
	cin>>num3;
	switch(num3)
	{
		case 1:
			
			cout<<"System under maintenance."<<endl;
				break;
		case 2:
		cout<<"System under maintenance."<<endl;
				break;
		case 3:
			cout<<"System under maintenance."<<endl;
				break;
		default:
			exit(4);				
										
	} 

	cout<<"Successfully saved. Your account number is "<< amount <<endl;
	system("cls");
	exit(true);
}
void option4()
{
	int num4, digit;
	string number, phone;
	
	cout<<"Choose your offer.\n";
	
	cout<<"1. Change number" <<endl;
	cout<<"2. Check balance" <<endl;
	cout<<"3. Pay the owner of this service....Lol" <<endl;
	cin>>num4;
 
if(num4 == 1){
	cout<<"Enter number" <<endl;
	cin>>number;
}
else if(num4 == 2)
{
	cout<<"Enter numbers in the range of 1000 - 50000.\n";
	cin>> digit;
	cout<<"Your balance is: "<< digit * 300 <<endl;
}
else if(num4 == 3)
{
	option1();
	
}
else
{
	cout<<"Thank you for using our services!!!"<<endl;
	
}
	system("cls");
	exit(true);	
}

