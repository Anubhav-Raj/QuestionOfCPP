 #include<iostream>
using  namespace std;
int main()
{
   int n,sum=0;
    cout<<"Enter  the Postive number:";
   cin>>n;
   while (n>=0)
   {
       /* code */
       sum=sum+n;
       cout<<"Enter  the Postive number:";
       cin>>n;
   }
   cout<<"\n The sum  is"<<sum<<endl;
      
    return 0;
}