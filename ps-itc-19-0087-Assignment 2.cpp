#include <iostream>

using namespace std;

int main()
{
    double quantity,phonePrice=650,printerPrice=3500,tablePrice=150;
    double vat=0.12;
    double balance;
    double total;
    cout<<"//Two things sold are done in the company but option one works for now.//"<< endl;
    cout <<"1.purchase an item"<<endl;
    cout <<"2. make Enquiries "<<endl;

    int option=1,option2=2;
    cout<<"select an option"<<endl;
    cin>>option;



    cout<<" Please enter your name " <<endl;
    string name;
    cin>> name;

cout<< endl;

      cout<<"please enter your uniqueID"<<endl;
      int uniqueID;
      cin>>uniqueID;

      cout<<endl;


    cout<<"Item sold"<< endl;

    cout<<"A.Printer"<<endl;
    cout<<"B.Phone"<<endl;
    cout<<"C.Table"<<endl;

    cout<<endl;

    cout<<"what would you want to buy"<<endl;
     string buy;
     cin>> buy;

     cout<<endl;


     double moneynow;
     cout<<"how much are you having to pay this item"<<endl;
     cin>>moneynow;



     if(moneynow<printerPrice||moneynow<phonePrice||moneynow<tablePrice){
        cout<<"sorry you can't buy"<<endl;



     }
       if(buy=="Printer" || buy=="printer"){


    cout<<endl;

     cout<<"how many items do you want to buy"<<endl;
    cin>>quantity;
    cout<<"Total amount to be paid is " <<endl;

    total=(printerPrice*quantity)*vat;

   cout<<total<<endl;

    balance=moneynow-total;

    cout<<endl;}

     else  if(buy=="phone" || buy=="phone"){
    cout<<endl;

     cout<<"how many items do you want to buy"<<endl;
    cin>>quantity;
    cout<<"Total amount to be paid is " <<endl;

    total=(phonePrice*quantity)*vat;

   cout<<total<<endl;

     balance=moneynow-total;

    cout<<endl;}

     else  if(buy=="table" || buy=="table"){
    cout<<endl;

     cout<<"how many items do you want to buy"<<endl;
    cin>>quantity;
    cout<<"Total amount to be paid is " <<endl;

    total=(tablePrice*quantity)*vat;

   cout<<total<<endl;

     balance=moneynow-total;


    cout<<endl;}





    cout<<"RECEIPT"<<endl;
    cout<<"Name of customer: "<< name <<endl;
    cout<<"The uniqueID: "<< uniqueID <<endl;
    cout<<"Item Bought: "<< buy <<endl;
    cout<<"Quantity bought: "<< quantity<<endl;
    cout<<"Vat Amount: "<< vat<<endl;
    cout<<"Total cost: "<< total<<endl;
    cout<<"Balance/change if any: "<<balance<<endl;






    return 0;
}
