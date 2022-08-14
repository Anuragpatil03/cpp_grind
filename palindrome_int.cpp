#include<iostream>
using namespace std;

int reverse(int X){
    int Y=0;
    while(X>0){
    int digit = X%10;
    Y=Y*10+digit;
    X=X/10;
    }
    return Y;
}



int main(){
    int X=474;
    int temp=X;
    int ninput= reverse(X);
    if(temp==ninput){
        cout<<"palindrome number"<<endl;
    }
    else{
        cout<<"Not a palindrome number"<<endl;
    }



    return 0;
}
