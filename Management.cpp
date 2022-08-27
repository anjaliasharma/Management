#include<iostream>
using namespace std;

int main()
{
	int quant, choice;
	
	int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
	int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
	int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;
	
	cout<<"\n\t Quantity of items we have";
	cout<<"\n Rooms available: ";
	cin>>Qrooms;
	cout<<"\n Quantitiy of pasta: ";
	cin>>Qpasta;
	cout<<"\n Quantitiy of burger: ";
	cin>>Qburger;
	cout<<"\n Quantitiy of noodles: ";
	cin>>Qnoodles;
	cout<<"\n Quantitiy of shake: ";
	cin>>Qshake;
	cout<<"\n Quantitiy of chicken roll: ";
	cin>>Qchicken;
	
	m:
	cout<<"\n\t\t\t Please select from the menu option";
	cout<<"\n\n1) Rooms";
	cout<<"\n\n2) Pasta";
	cout<<"\n\n3) Burger";
	cout<<"\n\n4) Noodles";
	cout<<"\n\n5) Shake";
	cout<<"\n\n6) Chicken roll";
	cout<<"\n\n7) Information regarding sales and collection";
	cout<<"\n\n8) Exit";
	
	cout<<"\n\n Please enter your choice: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\n\n Enter the number of rooms you want: ";
			
			cin>>quant;
			if(Qrooms - Srooms >= quant)
			{
				Srooms = Srooms + quant;
				Total_rooms = Total_rooms + quant*1200;
				cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you.";
			}
			else
			
				cout<<"\n\t Only "<<Qrooms - Srooms<<" rooms remaining in hotel.";
				break;
			
			
				case 2:
			cout<<"\n\n Enter pasta quantity: ";
			
			cin>>quant;
			if(Qpasta - Spasta >= quant)
			{
				Spasta = Spasta + quant;
				Total_pasta = Total_pasta + quant*250;
				cout<<"\n\n\t\t"<<quant<<" pasta is the order.";
			}
			else
			
				cout<<"\n\t Only "<<Qpasta - Spasta<<" pasta remaining in hotel";
				break;
				
			
				case 3:
			cout<<"\n\n Enter burger quantity: ";
			
			cin>>quant;
			if(Qburger - Sburger >= quant)
			{
				Sburger = Sburger + quant;
				Total_burger = Total_burger + quant*120;
				cout<<"\n\n\t\t"<<quant<<" burger is the order.";
			}
			else
			
				cout<<"\n\t Only "<<Qburger - Sburger<<" burger remaining in hotel";
				break;
		
			
				case 4:
			cout<<"\n\n Enter noodles quantity: ";
			
			cin>>quant;
			if(Qnoodles - Snoodles >= quant)
			{
				Snoodles = Snoodles + quant;
				Total_noodles = Total_noodles + quant*150;
				cout<<"\n\n\t\t"<<quant<<" noodles is the order.";
			}
			else
			
				cout<<"\n\t Only "<<Qnoodles - Snoodles<<" noodles remaining in hotel";
				break;
				
			
				case 5:
			cout<<"\n\n Enter shakes quantity: ";
			
			cin>>quant;
			if(Qshake - Sshake >= quant)
			{
				Sshake = Sshake + quant;
				Total_shake = Total_shake + quant*100;
				cout<<"\n\n\t\t"<<quant<<" shakes is the order.";
			}
			else
			
				cout<<"\n\t Only "<<Qshake - Sshake<<" shakes remaining in hotel";
				break;
	
			
				case 6:
			cout<<"\n\n Enter chicken roll quantity: ";
			
			cin>>quant;
			if(Qchicken - Schicken >= quant)
			{
				Schicken = Schicken + quant;
				Total_chicken = Total_chicken + quant*550;
				cout<<"\n\n\t\t"<<quant<<" chicken roll is the order.";
			}
			else
			
				cout<<"\n\t Only "<<Qchicken - Schicken<<" chicken remaining in hotel";
				break;
		
			
			case 7:
				cout<<"\n\t\tDetails of sales and collection";
				cout<<"\n\n Number of rooms we had: "<<Qrooms;
				cout<<"\n\n Number of rooms we gave for rent: "<<Srooms;
				cout<<"\n\n Remaining number of rooms: "<<Qrooms - Srooms;
				cout<<"\n\n Total rooms collection for the day: "<<Total_rooms;
				
				cout<<"\n\n Number of pastas we had: "<<Qpasta;
				cout<<"\n\n Number of pastas we sold: "<<Spasta;
				cout<<"\n\n Remaining number of pastas: "<<Qpasta - Spasta;
				cout<<"\n\n Total pasta collection for the day: "<<Total_pasta;
				
				cout<<"\n\n Number of burgers we had: "<<Qburger;
				cout<<"\n\n Number of burgers we sold: "<<Sburger;
				cout<<"\n\n Remaining number of burgers: "<<Qburger - Sburger;
				cout<<"\n\n Total burger collection for the day: "<<Total_burger;
				
				cout<<"\n\n Number of noodles we had: "<<Qnoodles;
				cout<<"\n\n Number of noodles we sold: "<<Snoodles;
				cout<<"\n\n Remaining number of noodles: "<<Qnoodles - Snoodles;
				cout<<"\n\n Total noodles collection for the day: "<<Total_noodles;
				
				cout<<"\n\n Number of shakes we had: "<<Qshake;
				cout<<"\n\n Number of shakes we sold: "<<Sshake;
				cout<<"\n\n Remaining number of shakes: "<<Qshake - Sshake;
				cout<<"\n\n Total shakes collection for the day: "<<Total_shake;
				
				cout<<"\n\n Number of chicken rolls  we had: "<<Qchicken;
				cout<<"\n\n Number of chicken rolls we sold: "<<Schicken;
				cout<<"\n\n Remaining number of chicken rolls : "<<Qchicken - Schicken;
				cout<<"\n\n Total chicken rolls collection for the day: "<<Total_chicken;
				
				cout<<"\n\n\n Total collection for the day: "<<Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken;
				break;
				
				case 8:
					exit(0);
				
					default:
						cout<<"\n Please select from the numbers mentioned above.";
	}
	goto m;
}
