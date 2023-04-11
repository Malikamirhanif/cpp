# include<iostream>
using namespace std;
struct race
{int d;
 float tm;
 float ts;
};
int main()
{race r1,r2;
cout<<"Enter distance of 1st\n";
cin>>r1.d;
cout<<"Enter time in Minutes\n";
cin>>r1.tm;
cout<<"Enter time in seconds\n";
cin>>r1.ts;
r1.ts=r1.ts/60;
r1.tm=r1.tm+r1.ts;
r1.d=r1.d/r1.tm;
cout<<"Enter distance of 2nd\n";
cin>>r2.d;
cout<<"Enter time in minutes\n";
cin>>r2.tm;
cout<<"Enter time in seconds\n";
cin>>r2.ts;
r2.ts=r2.ts/60;
r2.tm=r2.tm+r2.ts;
r2.d=r2.d/r2.tm;
if(r1.d>r2.d)
{cout<<"1st is winner\n";
}
else
{cout<<"2nd is winner\n";
}
system ("pause");
return 0;
	
	
	
	
}
