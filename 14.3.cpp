# include<iostream>
using namespace std;
int i,j,k;
class array
{int ar[5];
public:
	array()
	{ar[5]=-1;
	}
	void in(void)
	{cout<<"\n\tEnter Values in Array\n";
	for(i=0;i<5;i++)
	{cin>>ar[i];
	}
	}
	void disp (void)
	{cout<<"\n\tValues of Array Elements Are\n";
	for(i=0;i<5;i++)
	{cout<<ar[i];
	}
	}
	int operator == (array z)
	{for(i=0;i<5;i++)
	{if(z.ar[i]==ar[i])
	{return 1
	;}
	else 
	{return 0;
	}
	}
	}
};
int main()
{array o1,o2;
cout<<"\n\t1st objects Values\n";
o1.in();
o1.disp();
cout<<"\n\t2nd object values\n";
o2.in();
o2.disp();
if(o1==o2)
{cout<<"\n\tyes\n";
}
else
{cout<<"\n\tNo\n";
}
system ("pause");
return 0;
}
