# include<iostream>
# include<stdio.h>
using namespace std;
class RUN
{char name[50];
static int ra;
int r;
float d;
public:

		RUN()
	{ra++;
	r=ra;
	};
	void in (void);
	void out (void);
};
void RUN::in(void)
{cout<<"Enter Name of Athlete\n";
gets(name);
cout<<"\nEnter Distance \n";
cin>>d;
}
void RUN::out(void)
{cout<<"\nAthlete Number is\t"<<r;
cout<<"\nName is\t"<<name;
cout<<"\nDistance is\t"<<d;
}
int RUN::ra=0;
int main()
{RUN oa,ob,oc;
oa.in();
ob.in();
oc.in();
cout<<"\nNow Showing Result\n";
oa.out();
ob.out();
oc.out();
system("pause");
return 0;
}
