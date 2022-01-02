#include<iostream>
 using namespace std;
    void function1(int candies[],int n, int extraCandies)
    {  string output[n];
         for (int i = 0; i < n; i++)
         {
                 for (int j = 0; j < n; j++)
                 {
                   if(candies[i]+extraCandies < candies[j])
                   {
                        output[i]= "False";
                         break;
                   } else{
                         output[i]= "True";
                   }
                 }
                        
         }
      for (int k = 0; k < n; k++)
     {
          cout<<output[k]<<" ";
     }
      return; 
         
    }
  int main()
  {
       int n;
    cout<<"Enter the  size of candies:";
    cin>>n;
    int  candies[n];
     for (int l = 0; l < n; l++)
     {
          cin>>candies[l];
     }
   
   
   
   //accoding to leet code solution
   class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
             vector<bool> temp;
            int n= candies.size();
         string output[n];
          for (int i = 0; i < n; i++)
         {
                 for (int j = 0; j < n; j++)
                 {
                   if(candies[i]+extraCandies < candies[j])
                   {
                         output[i]= "False";
                         break;
                   } else{
                            output[i]= "Ture";
                   }
                 }
                        
         }
         for(int i=0;i<n;i++){
              if(output[i]=="False"){
              temp.push_back(false);
              } else {             
               temp.push_back(true);
              }
         }
       
         return temp;
            
    }
};
      int extraCandies;
      cout<<"Enter the Extra Candies:";
      cin>>extraCandies;
     
     function1(candies,n,extraCandies);
       
  }
