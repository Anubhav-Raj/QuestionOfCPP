#include<iostream>
using namespace std;
    
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    
    cout<<"Enter elements:"; 
    int **p = new int *[n];
    
    for(int i=0;i<n;i++){
        p[i] = new int[i+1];
        for(int j=0;j<(i+1);j++){
            cin>>p[i][j];
        }
    } 
    
    cout<<"Jagged Array:"<<endl; 
    for(int i=0;i<n;i++){
        for(int j=0;j<(i+1);j++){
            cout<<p[i][j]<<" ";           
        }
        cout<<endl;
    }
    
    for(int i=0;i<n;i++){
        delete []p[i];
    }
    delete []p;
}
    