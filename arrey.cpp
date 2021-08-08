#include<iostream>

using namespace std ;

string frist_name[5];
string scande_name[5];


void arraystore(){
int i;        
for ( i = 0; i<5 ; i++)
{
        cout<<"Enter name:";
        cin>>frist_name[i];
        cout<<"Enter Dad name:";
        cin>>scande_name[i];
}
}
int main(){

string ask ; int i ;
while (true)
{
        /* code */
        cout <<"Enter in to store data or out to Git data\n ";
        cin>>ask;
        if (ask =="in")
{
        arraystore();
}
else if (ask == "out")
{
        for ( i = 0; i <5 ; i++)
        {
                cout<<"Name:"<<frist_name[i]<<"\n";
        }
        
}
}
}








