#include<iostream>
using namespace std;

int main()
{
    int t,i,j,k,n,c=0,s=0;
    cin>>t;

    for(k=0;k<t;k++)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];

        for(i=0;i<n-1;i++)
        {
            int m=i;
            for(j=i+1;j<n;j++,c++)
                if(a[j]<a[m])
                     m=j;

                     int temp=a[i];
                     a[i]=a[m];
                     a[m]=temp;
                     s++;

        }
      for(i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;

      cout<<"Comparison ="<<c<<endl;
      cout<<"Shifts ="<<s<<endl;

      c=0,s=0;
    }
}
