#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int start = 0;
    int end= n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main (){

    int arr[6]={7,8,5,6,1,2};
    int brr[5]={65,45,6,2,1};

    reverse(arr,6);
    reverse(brr,5);
    printArray(arr,6);
    printArray(brr,5);



    return 0;
}
