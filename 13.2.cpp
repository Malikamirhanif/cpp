# include<iostream>
# include<string.h>
using namespace std;
class account
{char ahn[50];char toa[20];
long double an,ba;
public:
account(char n[50],char ta[20],long double no,long double b);
void diposite (int a);
void withdraw (int b);
void disp (void);

};



	account::account  (char n[50],char ta[20],long double no,long double b)
	{strcpy(ahn,n);
	strcpy(toa,ta);
	an=no;
	ba=b;
	}
void account::diposite(int a)
{ba=ba+a;
}
void account::withdraw(int b)
{ba=ba-b;
}
void account::disp(void)
{cout<<"\nName of Account Holder is\t"<<ahn;
cout<<"\nBalanc Amount is\t"<<ba;
}


int main()
{long double x,y;

char c[50],ch[20];
long double ano,aba;
cout<<"Enter Name of Account Holder\n";
cin.getline(c,50);
cout<<"\nEnter Type of Account\n";
cin.getline(ch,20);
cout<<"\nEnter Account Number\n";
cin>>ano;
cout<<"\nEnter Amount Balance\n";
cin>>aba;
account o1(c,ch,ano,aba);
cout<<"\nEnter Amount to Deposite\n";
cin>>x;
o1.diposite(x);
cout<<"\nEnter Amount to Withdraw\n";
cin>>y;
o1.withdraw(y);
cout<<"\nRecord is:\n";
o1.disp();
system("pause");
return 0;
}
