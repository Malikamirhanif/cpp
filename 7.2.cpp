# include<iostream>
using namespace std;
int main()
{int i,ar[5],am[5],max=0,loc;
cout<<"Enter  Roll Number & Marks\n";
cout<<"Enter Roll Numbers\n";
for(i=1;i<=10;i++)
{cin>>ar[i];
}
cout<<"Enter Marks\n";
for(i=1;i<=10;i++)
{cin>>am[i];
}
max=am[0];
for(i=0;i<10;i++)
{if(am[i]>max)
{max=am[i];
loc=i;
}
}
cout<<"Topper Roll Number\t";
cout<<(ar[loc]);
cout<<"\n";
cout<<"Toppers Marks\t";
cout<<max;
system("pause");
return 0;
}
