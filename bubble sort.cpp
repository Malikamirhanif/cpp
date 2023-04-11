# include<iostream>
using namespace std;
int main()
{int i,j,size,temp,swap,a[8];
cout<<"Enter size of Array\n";
cin>>size;
for(i=0;i<(size) ;i++)
{cin>>a[i];
}
for(i=0;i<(size-1);i++)//for number of passes means it will correct position of elements up to less then size of array
{swap=0;
for(j=0;j<(size-i)-1;j++)//for selection of values for an index element and just after it
{if(a[j]>a[j+1])
{temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
swap=1;
}
if(swap==0)
{break;
}
}
for(i=0;i<size;i++)
{cout<<" "<<a[i];
}
}
system("pause");
return 0;
}
