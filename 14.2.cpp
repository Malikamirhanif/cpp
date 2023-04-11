# include<iostream>
using namespace std;
class acc
{char n[10];
unsigned long an;
char toa[7];
float blnc;
public:
	acc ()
	{char n[]="Malik Aamir";
	an=07307701420303;
	char toa[]="Current";
	blnc=12.3;
	}
	void in (void)
	{
	cout<<"\n\tEnter Account Number\n";
	cin>>an;
	cout<<"\n\tEnter Balance\n";
	cin>>blnc;
	}
	void deposite (float m)
	{blnc=blnc+m;
	}
	void withdraw (float n)
	{if(n<=blnc)
	{blnc-=n;
	}
	else
	{cout<<"\n\tLow Balance\n";
	}
	}
void disp (void)
{cout<<"\n\tYour Name is\t"<< n<<"\n\tYour Account Balance is\t"<<blnc;
}
acc operator + (acc g)
{acc temp;
temp.blnc=g.blnc+blnc;
return temp;
}
};
int main()
{float d,w;
acc o,o1;
cout<<"\n\tEnter Amount for Deposite\n";
cin>>d;
o.deposite(d);
cout<<"\n\tEnter Amount for Withdraw\n";
cin>>w;
o.withdraw(w);
o.disp();
o1.in();
o1.disp();
o=o+o1;
o.disp();
system ("pause");
return 0;
}
