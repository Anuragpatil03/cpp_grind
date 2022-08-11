#include<iostream>
using namespace std;
int main(){

    int cr[6]={78,5,9,3,5,4};
    for(int i=0;i<6;){
        if(i+1<6){
         int temp=cr[i+1];
         cr[i+1]=cr[i];
         cr[i]=temp;
         i=i+2;
        }
    }
    for(int i=0;i<6;i++){
        cout<<cr[i]<<" ";
    }
    return 0;
}





