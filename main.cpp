#include <iostream>

using namespace std;
class card_in
{
protected:
    int x;
    short int y;
public:
    void accept()
    {
        cout<<"please!insert the card:"<<endl;
        cout<<"select the language preference:\n 1.English\n 2.Hindi\n 3.Marathi\n"<<endl;
        cin>>x;
   }
    void display()
    {
        cout<<"card is inserted,successfully!\n"<<endl;
        if(x==1)
        {
            cout<<"English\n";
        }
        if(x==2)
        {
            cout<<"Hindi\n";
        }
        if(x==3)
        {
            cout<<"Marathi\n";
        }
        cout<<"ENTER THE PIN"<<endl;
        cin>>y;
    cout<<" Continue->>\n"<<endl;
    }
};

class option:public card_in
{
protected:
    int z;
public:
    void dashboard()
    {
    cout<<"****************************************DASHBOARD***********************************************"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~                                                                                              ~"<<endl;
    cout<<"~ << 1.FAST CASH                                                             2.BALANCE INFO >> ~"<<endl;
    cout<<"~                                                                                              ~"<<endl;
    cout<<"~                                                                                              ~"<<endl;
    cout<<"~ << 3.DEPOSIT                                                             4.CASH WITHDRAWL >> ~"<<endl;
    cout<<"~                                                                                              ~"<<endl;
    cout<<"~                                                                                              ~"<<endl;
    cout<<"~ << 5.PIN CHANGE                                                           6.FUND TRANSFER >> ~"<<endl;
    cout<<"~                                                                                              ~"<<endl;
    cout<<"~                                                                                              ~"<<endl;
    cout<<"~                                                                                              ~"<<endl;
    cout<<"~                                                                                              ~"<<endl;
    cout<<"~  *** SELECT  PROPER OPTION ***                                                               ~"<<endl;
    cout<<"~                                                                                              ~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    }
   void input()
   {
       cout<<"Account preference:\n 1.Current\n 2.Savings\n 3.Credit\n "<<endl;
       cin>>z;
       if(z==1)
       {
           cout<<"Current\n";
       }
       if(z==2)
       {
           cout<<"savings\n";
       }
       if(z==3)
       {
           cout<<"Credit\n";
       }
   }
};
int main()
{
    option O;
    int a,b,choice;
    short int c;
    char ch;
   O.accept();
   O.display();
   O.dashboard();

   do{
    cout<<"Select the preference:\n 1.FAST CASH\n 2.BALANCE INFO\n 3.DEPOSIT\n 4.CASH WITHDRAWL\n 5.PIN CHANGE\n 6.FUND TRANSFER\n"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1: O.input();
                cout<<"1.5000Rs \n 2.10000Rs\n 3.15000Rs\n 4.20000Rs\n";
               cin>>a;
               if(a==1)
               {
                   cout<<"5000Rs\n";
               }
               if(a==2)
               {
                   cout<<"10000Rs\n";
               }
               if(a==3)
               {
                   cout<<"15000Rs\n";
               }
               if(a==4)
               {
                   cout<<"20000Rs\n";
               }
              cout<<"Transaction completed!\n";
              break;

       case 2:O.input();
                cout<<"Your balanced is displayed\n";
                break;
       case 3:O.input();
              cout<<"ADD The Amount to be deposited:\n";
              cin>>b;
              cout<<"Amount is Deposited\n"<<endl;
              break;
       case 4:O.input();
              cout<<"Enter the Amount to be Withdraw:\n";
              cin>>b;
              if(b<=20000)
              {
                  cout<<b<<"\n"<<endl;
                  cout<<"Transaction Completed!\n"<<endl;
              }
            cout<<"Transaction Cancelled!\n"<<endl;
              break;
       case 5:cout<<"Enter the new password:\n";
              cin>>c;
              cout<<"Pin changed successfully!\n";
              break;
       case 6:cout<<"Fund transfer option is currently not available\n";
              break;
       default:cout<<"invalid choice\n"<<endl;
              break;
    }
    cout<<"Do you want check the balance:(y/n)"<<endl;
    cin>>ch;
   }while(ch=='y' || ch=='Y');
    return 0;
}





