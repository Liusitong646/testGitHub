#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char ch1[11],ch2[11],ch3[11];
        char *p1,*p2,*p3;
        char *p;
        int a1,b1,a2,b2,a3,b3;
        cin>>ch1>>ch2>>ch3;
        p1=ch1,p2=ch2,p3=ch3;
        cin>>a1>>b1>>a2>>b2>>a3>>b3;
        int n;
        int i=0,j,k,h;
        n=b1-a1+b2-a2+b3-a3+1;
        p=new char[n];
        for(j=a1-1;j<b1;j++)
            p[i++]=p1[j];
        for(k=a2-1;k<b2;k++)
            p[i++]=p2[k];
        for(h=a3-1;h<b3;h++)
            p[i++]=p3[h];
        p[i]='\0';
        cout<<p<<endl;
    }
    return 0;
}

