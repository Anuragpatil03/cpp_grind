#include<iostream>
using namespace std;

int linearsearch(int arr[],int key){

    for(int i=0;i<10;i++){
        if(key==arr[i]){
            return 0;
        }
    }
       
}


int main(){

    int arr[10];
    cout<<"enter the values of array:";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"enter a key:";
    cin>>key;
    int val = linearsearch(arr,key);
    if(val==0){
        cout<<"Key Found"<<endl;
    }
    else{
        cout<<"Key Not Found"<<endl;
    }
    
    return 0;
}
