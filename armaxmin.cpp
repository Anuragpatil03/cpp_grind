#include<iostream>
#include<climits>
using namespace std;

int getmax(int arr[],int size){

    int max = INT_MIN;             

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}


int getmin(int arr[],int size){

    int min = INT_MAX;             

    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}




int main(){

    int size;
    cout<<"enter the size of array:";
    cin>>size;

    int bigboy[100];
    
    for(int i=0;i<size;i++){
        cin>>bigboy[i];
    }

     
    cout<<"maximum element in array is:"<<getmax(bigboy,size)<<endl;
    cout<<"minimum element in array is:"<<getmin(bigboy,size)<<endl;



    return 0;
}
