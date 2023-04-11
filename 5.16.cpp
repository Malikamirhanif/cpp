# include<iostream>
using namespace std;
int main()
{int m,c,b,t,n; 
char ch;
cout<<"M for Motorcycle\n C for Car\n B for Bus\n";
cout<<"Enter no of Days for parking\n";
cin>>n;
cout<<"Enter choice for vehical\n";
cin>>ch;
switch(ch)
{case'm':
case'M':
{t=10*n;
cout<<"Total charges:\t"<<t;
break;}
case'C':
case'c':
	{t=20*n;
	cout<<"Total charges:\t"<<t;
	break;
	}
case 'b':
	case'B':
	{t=30*n;
	cout<<"Total charges:\t"<<t;
	break;}
	default:
		{cout<<"invalid";
		}
}
system("pause");
return 0;
}
