# include<iostream>
using namespace std;
int main()
{int a,b,c,d,e,i,j,max;
int *ar[5];
ar[0]=&a;
ar[1]=&b;
ar[2]=&c;
ar[3]=&d;
ar[4]=&e;
cout<<"Enter values in array\n";
for(i=0;i<5;i++)
{cin>>*ar[i];
}
max=*ar[0];
for(i=0;i<5;i++)
{if(*ar[i]>max)
{max=*ar[i];
}
}
cout<<"\n Maximum value is\n"<<max;;

}
