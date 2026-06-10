#include<iostream>
using namespace std;

class BankAccount
{
    private:

    int AccountNumber;
    string HolderName;
    double BankBalance;

    public:
    BankAccount()
    {
        this->AccountNumber=101;
        this->HolderName="kirti";
        this->BankBalance=1000.0;

    }

    void DisplayAccontDetails()
    {
     cout<<"Bank Accont details :"<<"\n accont number:"<<AccountNumber<<"\n holder name:"<<HolderName<<"\n Bank balance:"<<BankBalance<<endl;
    }

    void CashDeposite(double amount)
    {
     if(amount<=0)
     {
        cout<<"\n cannot deposite or withdraw the negative or zero balance ....!"<<"\n please enter a valid amount "<<endl;
     }
     else{
        BankBalance=BankBalance+amount;
        cout<<"\n amount deposite succesfully !"<<endl;
     }
    }
    void CashWithdraw(double amount)
    {
        if(amount<=0)
     {
        cout<<"\n cannot deposite or withdraw the negative or zero balance ....!"<<"\n please enter a valid amount "<<endl;
     }
     else if(amount> BankBalance)
     {
        cout<<"\n insufficient balance !"<<endl;
     }
     else{
        BankBalance=BankBalance-amount;
        cout<<"\n amount deposite succesfully !"<<endl;
     }

    }
};

int main()
{
    BankAccount BA;
    cout<<"\n default account details"<<endl;
    BA.DisplayAccontDetails();

    int chioce;
    double amount;

    cout<<"\n 1.deposite money"<<endl;
    cout<<"\n 2. withraw money"<<endl;
    cout<<"\n enter your choice"<<endl;
    cin>>chioce;

    cout<<"enter amount"<<endl;
    cin>>amount;

    if(chioce==1)
    {
        BA.CashDeposite(amount);
    }
    else if(chioce==2)
    {
        BA.CashWithdraw(amount);
    }
    else{
        cout<<"invalid choice"<<endl;
    }
    cout<<"\n update accont details"<<endl;
    BA.DisplayAccontDetails();

    return 0;
}