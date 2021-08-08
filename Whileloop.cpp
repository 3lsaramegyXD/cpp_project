#include<iostream>

using namespace std;


int main(){

int Man_num = 1 , Chack ;

float sum_chacks;
while (Man_num<=10)
{
    cout<<"Enter Total Your Chack:"<<"\n";
    cin >> Chack;
    sum_chacks+= Chack;
    Man_num ++;
}
cout<<"avrage To Chacks ="<<sum_chacks/Man_num<<"\n";
}