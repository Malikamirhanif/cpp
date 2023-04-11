# include <iostream>
# include <iomanip>
using namespace std;
int main()
{int a,b,c,i,j=2,max1,max2,temp;
cout<<"Enter No of Students in Class";
cin>>a;
cout<<"Enter Marks of"<<"\t"<<"1"<<"\t"<<"Student";
cin>>b;
max1=b;
max2=b;
for(i=1;i<a;i++)
{cout<<"Enter Marks of"<<"\t"<<j<<"\t"<<"Student";
cin>>c;
if(c>max2)
max2=c;
if(max2>max1)
{temp=max1;
max1=max2;
max2=temp;
}
j++;
}
cout<<"First highest is"<<"\t"<<max1<<"\n";
cout<<"Second highest is"<<"\t"<<max2;
system ("pause");
return 0;

}
