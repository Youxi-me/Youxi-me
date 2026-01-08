#include<iostream>
using namespace std;
int main(void){
    int heads,legs;
    int chickens,rabbits;
    cin>>heads>>legs;
    rabbits=(legs-heads*2)/2;
    chickens=heads-rabbits;
        cout<<chickens<<" "<<rabbits;
        return 0;
}