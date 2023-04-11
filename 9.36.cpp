# include<iostream>
using namespace std;
inline float a (float z)
{return 3.14*z*z;
}
int main()
{float b,m;
cout<<"Enter radius to calculate Area\n";
cin>>b;
m=a(b);
cout<<"Area is\t"<<m;
system("pause");
return 0;
}
