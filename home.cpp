#include<iostream>
using namespace std;

void home(int src,int destination){
    if(src == destination)
    {cout<<"reached"<<endl;
    return ;}

    src++;
    home(src,destination);


}

int main () {
    int destination =10;
    int src =1;

    home(src,destination);


    return 0;
}