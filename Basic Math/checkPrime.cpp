#include<iostream>
using namespace std;

int main(){

    int i,n;
    cin >> n;

    int count = 0;


    for(i = 2; i < n; i++){
        if(n % i == 0){
          count++;
    }

    if(count == 2){
       cout<<"prime"<<endl;
    }
    else{
       cout<<"not prime"<<endl;
    }
    return 0;
}
