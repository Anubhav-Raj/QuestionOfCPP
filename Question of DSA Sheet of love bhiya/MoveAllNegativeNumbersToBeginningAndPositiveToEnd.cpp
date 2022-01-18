  
  #include<iostream>
  #include <vector>
   using  namespace std;


   vector<int> separateNegativeAndPositive(vector<int> &nums){
    // Write your code here
    int n= nums.size();
     vector<int> temp;
     // Time Complicity is O(n)
    //negtive move  Beginning 
     for(int i=0; i<n;i++){
               if(nums[i]< 0){
                    temp.push_back(nums[i]);
               }

           }

    //Postive move End
           for(int i=0; i<n;i++){
               if(nums[i]>=0){
                    temp.push_back(nums[i]);
               }
           }
     return temp;
        
}
// more optinize ans 
vector<int> separateNegAndPos(vector<int> &nums){

     // Time Complicity is O(n)
    // Write your code here.
     int n= nums.size();
   int negative_pointer=0;
      for(int i=0;i<n;i++){
           if(nums[i]<0){
                 swap(nums[i],nums[negative_pointer]);
                negative_pointer++;
           }
      }
     return nums;
}


    int main(){
         vector<int> nums;
           nums.push_back(1);   
            nums.push_back(-4);    
            nums.push_back(10);    
            nums.push_back(0);    
            nums.push_back(-2);    
         vector<int> arr= separateNegativeAndPositive(nums);
         vector<int> arr2=separateNegAndPos(nums);

         for (int i:arr){
               cout<<i<<" ";
              } 
    }

   