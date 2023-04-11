# include<iostream>
# include<iomanip>
using namespace std;
int main()
{int i,j,k,ar[20],size,min,loc,temp,l;
cout<<"Enter size of Array\n";
cin>>size;
cout<<"Enter Elements of Array\n";
for(i=0;i<size;i++)
{cin>>ar[i];
}
cout<<"Sorting an Array\n";
for(i=0;i<(size-1);i++)//this loop is for selection of numbers in index it will select nmbers less then size
{min=ar[i];
loc=i;
for(k=i+1;k<size;k++)//it is for selection of number and comparison of number just before it
{if(ar[k]<min)// if we use > sign instead of < then it will sort elements in decending order
{min=ar[k];
loc=k;
}
}
temp=ar[i];
ar[i]=ar[loc];
ar[loc]=temp;
}
for(l=0;l<size;l++)
{cout<<ar[l];
}
system("pause");
return 0;
}
