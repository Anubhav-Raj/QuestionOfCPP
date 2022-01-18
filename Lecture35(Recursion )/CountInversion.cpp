#include<iostream> 
#include<vector>
using namespace std;
// Buert Force Approch
  int  CountInversion(int arr[], int N){
           int inv=0; 
            for(int i=0;i<N; i++){
                 for(int j=i+1;j<N;j++){
                      if(arr[i]>arr[j]){
                           inv++;
                      }
                 }
            }
             return inv;
             // time Compliecty is  O(n^2)
  }
  // Approch 2
  int merge( int arr[], int s, int e){
       int inv=0;
      int mid=s+(e-s)/2;
         int len1=mid-s+1;
         int len2=e-mid;
         int *first=new int[len1];
         int *second=new int[len2];
        
           // copy value 
            int k=s;
            for (int i = 0; i <len1; i++){
                first[i]=arr[k++];
            }
             k=mid+1;
             for (int i = 0; i <len2; i++){
                second[i]=arr[k++];
            }

            //merge 2 sorted array
             int  index1=0,index2=0;
             k=s;
               while(index1<len1 && index2<len2){
                    if(first[index1]>second[index2]){
                        
                         arr[k++]=second[index2++]; 
                         inv += len1-index1;
                    } else{
                         arr[k++]=first[index1++];
                    }
               }
                while (index1 < len1){
                   arr[k++]=first[index1++];
                }
                while (index2 < len2){
                     arr[k++]=second[index2++];
                }
                 
      delete []first;
       delete []second;
        return inv;
            
  }


  int  CountInversion(int arr[], int s, int e){
       int inv=0;
       int mid= s+(e-s)/2;
            if(s<e){
        //sort Left side
           inv+=CountInversion(arr,s,mid);
         //Sort Right side
          inv+= CountInversion(arr,mid+1,e);

          //merge both side
          inv+= merge(arr,s,e);
            }
            return inv;

  }

int main(){
       int arr[1000];
        int size;
         cin>>size;
          for(int i=0; i<size; i++){
               cin>>arr[i];
          }
            //int inv =CountInversion(arr, size);
              int inv=CountInversion(arr,0,size-1);
             cout<<inv<<endl;
}