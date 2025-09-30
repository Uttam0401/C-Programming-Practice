//WAP IN C++ TO PRINT BUS RESERVATION SYSTEM.

#include<iostream>
using namespace std;
int main()
{
    int Destination,Arrival,Choice,Choice1,Bus;
    cout<<"Welcome To Our Online Bus Ticket Booking Center\n";
    cout<<"Please Select Your Choice(Given Below)\n";
    cout<<"1. A/c Bus 2*2" <<endl<<"2. A/c Bus 2*1" <<endl<<"3. Non A/c Bus 2*2" <<endl<<"4. Non A/c Bus 2*1 "<<endl;
    cin>>Choice;
    switch(Choice)
    {
   case 1:cout<<"Thank You For Choosing A/c Bus 2*2"<<endl<<"Please Select Your Bus:-\n";
        cout<<"1. Jai Mata Di"<<endl<<"2. Om Sai Ram "<<endl<<"3. Valmiki"<<endl<<"4. Lav Kush"<<endl<<"5. Jai Maa Kali";
        cin>>Bus;
        switch(Bus)
        {
        case 1:cout<<"Thank You For Choosing Jai Mata Di Tour & Travels\t";
        cout<<"Please Select Your Arrival Point\n" <<endl<<"1. ValmikiNagar"<<endl<<"2. Harnatand"<<endl<<"3. Rampur"<<endl<<"4. Bagaha"<<endl;
        cin>>Arrival;
        }
        switch(Arrival)
        {
            case 1:{
                cout<<"ValmikiNagar Is Your Arrival Point";
                break;
            }
            case 2:{
                cout<<"Harnatand Is Your Arrival Point";
                break;
            }
            case 3:{
                cout<<"Rampur Is Your Arrival Point";
                break;
            }
            case 4:{
                cout<<"Bagaha Is Your Arrival Point";
                break;
            }
            default :{
                cout<<"Invalid Arrival Point";
            }
            }
        
        cout<<"Please Select Your Destination Point\n"<<endl<<"1. Chautarwa" <<endl<<"2. Parsauni"<<endl<<"3. Lauriya"<<endl<<"4.Bettiah"<<endl; 
        cin>>Destination;
        switch(Destination)
        {
         case 1:{
            cout<<"Chautarwa is your destination point";
            break;
         }
         case 2:{
            cout<<"Parsauni is your destination point";
            break;
         }
         case 3:{
            cout<<"Lauriya is your destination point";
            break;
         }
         case 4:{
            cout<<"Bettiah is your destination point";
            break;
         }
         default :{
            cout<<"Invalid Destination Point";
         }
        }
        
        case 2: cout<<"Thank You For Choosing A/c Bus 2*1"<<endl<<"Please Select Your Bus:-\n";
        cout<<"1. Jai Mata Di"<<endl<<"2. Om Sai Ram "<<endl<<"3. Valmiki"<<endl<<"4. Lav Kush"<<endl<<"5. Jai Maa Kali";
        cin>>Bus;
        switch(Bus)
        {
            case 1:cout<<"Thank You For Choosing Om Sai Ram Tour & Travels\t";
        cout<<"Please Select Your Arrival Point\n" <<endl<<"1. ValmikiNagar"<<endl<<"2. Harnatand"<<endl<<"3. Rampur"<<endl<<"4. Bagaha"<<endl;
        cin>>Arrival;
        }
        switch(Arrival)
        {
            case 1:{
                cout<<"ValmikiNagar Is Your Arrival Point";
                break;
            }
            case 2:{
                cout<<"Harnatand Is Your Arrival Point";
                break;
            }
            case 3:{
                cout<<"Rampur Is Your Arrival Point";
                break;
            }
            case 4:{
                cout<<"Bagaha Is Your Arrival Point";
                break;
            }
            default :{
                cout<<"Invalid Arrival Point";
            }
            }
            cout<<"Please Select Your Destination Point\n"<<endl<<"1. Chautarwa" <<endl<<"2. Parsauni"<<endl<<"3. Lauriya"<<endl<<"4.Bettiah"<<endl; 
        cin>>Destination;
        switch(Destination)
        {
         case 1:{
            cout<<"Chautarwa is your destination point";
            break;
         }
         case 2:{
            cout<<"Parsauni is your destination point";
            break;
         }
         case 3:{
            cout<<"Lauriya is your destination point";
            break;
         }
         case 4:{
            cout<<"Bettiah is your destination point";
            break;
         }
         default :{
            cout<<"Invalid Destination Point";
         }
        }
        
        }

            
        
        
        


        }

    

