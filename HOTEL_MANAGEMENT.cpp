#include<iostream>
#include<windows.h>
using namespace std;
class hotel_management{
    public:
        void func_room(int& Qrooms,int& Brooms,int& Total_rooms)
        {
        cout<<"\n\n Enter the number of Rooms you want : ";
        int quantity;
        cin>>quantity;
        if(Qrooms-Brooms >=quantity)
        {
           Brooms=Brooms+quantity;
           Total_rooms= Total_rooms+quantity*1200;    // 1200 ====> price of one room
           cout<<"\n\n\t\t"<<quantity<<" Room/Rooms have been alloted to you!\n";
        }
        else{
            cout<<"\n\tOnly "<<Qrooms-Brooms<<" Rooms are remaining in the hotel ";
        }
        }



        void func_pasta(int &Qpasta,int &Spasta,int &Total_pasta)
        {
        cout<<"\n\n Enter Pasta Quantity : ";
        int quantity;
        cin>>quantity;
        if(Qpasta-Spasta >=quantity)
        {
           Spasta=Spasta+quantity;
           Total_pasta= Total_pasta+quantity*250;    // 250 ====> price of one pasta
           cout<<"\n\n\t\t"<<quantity<<" Pasta is your order!\n";
        }
        else{
            cout<<"\n\tOnly "<<Qpasta-Spasta<<" Pasta are remaining in the hotel ";
        }
        }


        void func_chicken(int &Qchicken,int &Schicken,int &Total_chicken)
        {
        cout<<"\n\n Enter Chicken Quantity : ";
        int quantity;
        cin>>quantity;
        if(Qchicken-Schicken >=quantity)
        {
           Schicken=Schicken+quantity;
           Total_chicken= Total_chicken+quantity*500;    // 500 ====> price of one chicken
           cout<<"\n\n\t\t"<<quantity<<" Chicken is your order!\n";
        }
        else{
            cout<<"\n\tOnly "<<Qchicken-Schicken<<" Chicken are remaining in the hotel ";
        }
        }



        void func_burger(int &Qburger,int &Sburger,int &Total_burger)
        {
        cout<<"\n\n Enter Burger Quantity : ";
        int quantity;
        cin>>quantity;
        if(Qburger-Sburger >=quantity)
        {
           Sburger=Sburger+quantity;
           Total_burger= Total_burger+quantity*100;    // 100 ====> price of one burger
           cout<<"\n\n\t\t"<<quantity<<" Burger is your order!\n";
        }
        else{
            cout<<"\n\tOnly"<<Qburger-Sburger<<" Burger are remaining in the hotel ";
        }
        }


        void func_shake(int &Qshake,int &Sshake,int &Total_shake){
        cout<<"\n\n Enter Shake Quantity : ";
        int quantity;
        cin>>quantity;
        if(Qshake-Sshake >=quantity)
        {
           Sshake=Sshake+quantity;
           Total_shake= Total_shake+quantity*120;    // 120 ====> price of one shake
           cout<<"\n\n\t\t"<<quantity<<" Shake is your order!\n";
        }
        else{
            cout<<"\n\tOnly"<<Qshake-Sshake<<" Shake are remaining in the hotel ";
        }
        }


        void func_noodles(int &Qnoodles,int &Snoodles,int &Total_noodles)
        {
        cout<<"\n\n Enter Noodles Quantity : ";
        int quantity;
        cin>>quantity;
        if(Qnoodles-Snoodles >=quantity)
        {
           Snoodles=Snoodles+quantity;
           Total_noodles= Total_noodles+quantity*180;    // 180 ====> price of one noodles
           cout<<"\n\n\t\t"<<quantity<<" noodle is your order!\n";
        }
        else{
            cout<<"\n\tOnly"<<Qnoodles-Snoodles<<" noodle are remaining in the hotel ";
        }
        }




     };

int main()
{
    system("cls");
	system("color 9f");
    hotel_management h;
    int quantity;
    int choice;

    int Qrooms=0;   //stores quantity of rooms
    int Qpasta=0,Qchicken=0,Qburger=0,Qshake=0,Qnoodles=0;    //stores quantity of food

    int Brooms=0;   //stores booked rooms
    int Spasta=0,Schicken=0,Sburger=0,Sshake=0,Snoodles=0;        //stores sold quantity of food

    int Total_rooms=0;    //stores total price of the rooms
    int Total_pasta=0,Total_chicken=0,Total_burger=0,Total_shake=0,Total_noodles=0;     //stores total price of the food items

    cout<<"\n\t\t\t**********HOTEL MANAGEMENT SYSTEM*************\n";
    cout<<"\n\t\t\t\t Quantity of items we have\n";
    cout<<"\n    Rooms available : ";
    cin>>Qrooms;
    cout<<"    Quantity of pasta : ";
    cin>>Qpasta;
    cout<<"    Quantity of chicken : ";
    cin>>Qchicken;
    cout<<"    Quantity of burger : ";
    cin>>Qburger;
    cout<<"    Quantity of shake : ";
    cin>>Qshake;
    cout<<"    Quantity of noodles : ";
    cin>>Qnoodles;


    bool cond;
    cond=true;
    while(cond)
    {
    cout<<"\n\t\t\t    Please select from the menu options ";
    cout<<"\n\n    1) Rooms";
    cout<<"\n    2) Pasta";
    cout<<"\n    3) Chicken";
    cout<<"\n    4) Burger";
    cout<<"\n    5) Shake";
    cout<<"\n    6) noodles";
    cout<<"\n    7) Information Regarding sales and collection ";
    cout<<"\n    8) Exit";

    cout<<"\n\n    Please Enter your choice! ";
    cin>>choice;


    switch(choice)
    {
    case 1:
        h.func_room(Qrooms,Brooms,Total_rooms);
        break;

    case 2:
        h.func_pasta(Qpasta,Spasta,Total_pasta);
        break;


    case 3:
        h.func_chicken(Qchicken,Schicken,Total_chicken);
        break;


    case 4:
        h.func_burger(Qburger,Sburger,Total_burger);
        break;


    case 5:
        h.func_shake(Qshake,Sshake,Total_shake);
        break;


    case 6:
        h.func_noodles(Qnoodles,Snoodles,Total_noodles);
        break;



    case 7:
        cout<<"\n\t\t\tDetails of Sales and Collection ";
        cout<<"\n\n    Number of rooms we had : "<<Qrooms;
        cout<<"\n\n    Number of rooms Booked : "<<Brooms;
        cout<<"\n\n    Remaining Rooms : "<<Qrooms-Brooms;
        cout<<"\n\n    Total rooms collection for the day : "<<Total_rooms;

        cout<<"\n\n    Number of Pastas we had : "<<Qpasta;
        cout<<"\n\n    Number of Pastas we sold : "<<Spasta;
        cout<<"\n\n    Remaining Pastas : "<<Qpasta-Spasta;
        cout<<"\n\n    Total Pastas collection for the day : "<<Total_pasta;

        cout<<"\n\n    Number of Chickens we had : "<<Qchicken;
        cout<<"\n\n    Number of Chickens we sold : "<<Schicken;
        cout<<"\n\n    Remaining Chickens : "<<Qchicken-Schicken;
        cout<<"\n\n    Total Chickens collection for the day : "<<Total_chicken;

        cout<<"\n\n    Number of Burgers we had : "<<Qburger;
        cout<<"\n\n    Number of Burgers we sold : "<<Sburger;
        cout<<"\n\n    Remaining Burgers : "<<Qburger-Sburger;
        cout<<"\n\n    Total Burgers collection for the day : "<<Total_burger;

        cout<<"\n\n    Number of Shakes we had : "<<Qshake;
        cout<<"\n\n    Number of Shakes we sold : "<<Sshake;
        cout<<"\n\n    Remaining Shakes : "<<Qshake-Sshake;
        cout<<"\n\n    Total Shakes collection for the day : "<<Total_shake;

        cout<<"\n\n    Number of Noodles we had : "<<Qnoodles;
        cout<<"\n\n    Number of Noodles we sold : "<<Snoodles;
        cout<<"\n\n    Remaining Noodles : "<<Qnoodles-Snoodles;
        cout<<"\n\n    Total Noodles collection for the day : "<<Total_noodles;
        cout<<"\n";
        break;


    case 8:
        cond=false;
        exit(0);

    default:
        cout<<"\n    Please select the numbers mentioned above!\n";

    }

  }

}
