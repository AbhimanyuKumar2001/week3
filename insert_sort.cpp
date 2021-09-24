#include<iostream>
using namespace std;

int c=0,s=0;
int main()
{
    int t,i,j,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        for(j=0;j<n;j++)
            cin>>a[j];

        for(j=1;j<n;j++)
        {
            int k=a[j];
            for(int l=j-i;l>=0;l--,c++)
                if(a[l]>k)
            {
                a[l+1]=a[l];
                s++;
            }
        }
        for(j=0;j<n;j++)
            cout<<a[j]<<" ";
        cout<<endl<<"Comparisiion= "<<c<<endl;
        cout<<"Shifts= "<<s<<endl;
        c=0,s=0;

    }

}
