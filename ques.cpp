#include<iostream>
#include<climits>
using namespace std;
 
 void getmin(int arr[],int n){
     int min=INT_MAX;
     int smin=INT_MAX;

     for(int i=0;i<n;i++){
         if (arr[i]<min){
            smin=min;
            min=arr[i];
         }
     }
     cout<<"Second smallest no is:"<<smin<<endl;
 }
 void getmax(int arr[],int n){
     int max=INT_MIN;
     int smax=INT_MIN;

     for(int i=0;i<n;i++){
         if (arr[i]>max){
            smax=max;
            max=arr[i];
         }
     }
     cout<<"Second Largest is:"<<smax;
 }




int main(){

    int arr[5]={8,15,3,2,1};
    getmin(arr,5);
    getmax(arr,5);
    
    return 0;
}