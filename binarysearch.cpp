#include<iostream>
using namespace std;


int binarysearch(int arr[],int n, int key){

    int start= 0;
    int end= n-1;

    int mid = start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }

        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

        mid=start+(end-start)/2;
    }
     return -1;
}







int main(){

    int arr[5]={2,4,8,12,15};
    int brr[6]={4,5,7,9,11,13};
    int oddkey;
    cout<<"enter odd key :";
    cin>>oddkey;
    int evenkey;
    cout<<"enter even key :";
    cin>>evenkey;

    int oddindex=binarysearch(arr,5,oddkey);
    int evenindex=binarysearch(brr,6,evenkey);

    cout<<"Index of "<< oddkey <<" " "is:"<<oddindex<<endl;
    cout<<"Index of "<<evenkey <<" " "is:"<<evenindex<<endl;
    


    return 0;
}
