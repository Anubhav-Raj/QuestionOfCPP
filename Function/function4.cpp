/*Write a program with two functions to print the maximum and the 
minimum number respectively among three numbers entered by user.*/

 #include<iostream>
 using namespace std;
    int large(int a, int b, int c){
         if(a>=b && a>=c)
    {
        return a;
    }else if(b>=a && b>=c)
    {
        return b;

    }else{
        return c;
    }
    
   }

   int shot(int a, int b, int c){
         if(a<=b && a<=c)
    {
         return a;
    }else if(b<=a && b<=c)
    {
       return b;

    }else{
         return c;
    }
    
   }
  int main()
  {
       int  a,b,c;
        cout<<"Enter the three: ";
         cin>>a>>b>>c;
        int l = large(a,b,c);
        int s = shot(a,b,c);
          cout<<l<<" is greater"<<endl;
          cout<<s<<" is smaller";
  }
