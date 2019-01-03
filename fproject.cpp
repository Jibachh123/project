#include <iostream>

using namespace std;

int main()
{
    int c=0;
    int m=0;
    int b=0;
    int o=0;
     int input;
     int amount=0, count=0;
     //menu
     while (true)
     {

    cout << "press 1 for motorbike" << endl;
    cout << "press 2 for cars" << endl;
    cout << "press 3 for bus" << endl;
    cout << "press 4 for others" << endl;
    cout << "press 5 to show the record" << endl;
    cout <<"press 6 to delete the record"<<endl;
    cin>>input;
    if (input==1)
    {
        if(count<=50)
        {
          m++;

        amount=amount+100;
        count =count+1;
    }
    else
        cout<<"no more cars parking is full"<<endl;
    }
     else if (input==2)
    {
        if(count<=50)
        {
             c++;
        amount=amount+200;
        count =count+1;
    }
    else
        cout<<"parking is full"<<endl;
    }
     else if (input==3)
    {
        if(count<=50)
        {
            b++;

        amount=amount+300;
        count =count+1;
    }
    else
        cout<<"parking is full"<<endl;
    }
    else if(input==4)
    {
        if(count<=50)
        {
            o++;
            amount=amount+400;
            count=count+1;
        }
        else
            cout<<"parking is full"<<endl;
    }
     else if (input==5)
    {
        cout<<"####################################"<<endl;
        cout<<"the total amount is ="<<amount<<endl;
        cout<<"the total number of vehicles parked is="<<count<<endl;
        cout<<"the total number of motorbike parked is="<<m<<endl;
        cout<<"the total number of cars parked is="<<c<<endl;
        cout<<"the total number of buses parked is="<<b<<endl;
        cout<<"the total number of others vehicles is="<<o<<endl;
        cout<<"####################################"<<endl;
    }
     else if (input==6)
    {
        amount=0;
        count =0;
        m=0;
        c=0;
        b=0;
        o=0;
        cout<<"####################################"<<endl;
        cout<<"record deleted"<<endl;
        cout<<"####################################"<<endl;
    }
     else
    {
     cout<<"invalid number"<<endl;
    }

     }
    return 0;
}
