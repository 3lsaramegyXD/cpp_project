//import computer files 
#include<iostream>
using namespace std;

/*Search fincation*/
bool find_item(string arr[],int size,string itme){
    /*fan varaples*/
    bool found =false;int i;
    //for to move in array itams
    for ( i = 0; i <size ; i++)
    {
        /*if to chack itme found or not*/
        if (arr[i]==itme)
        {
            /* code */
            found = true;
        }   
    }
    //fanction return 
    return found;
}

/*----main function----*/
int main(){
//array data     
string dataarr[]={"Donia","Manar","Emain","Ahmed","Mohammed","Menna"};
// string var to store user input
string name;
//Massage to user
cout<<"Enter frist litter Captial\n";
//ask to user
cout <<"What Name you want search in saramegy life?\n";
// take answer
cin>>name;
//condtion to know user found or not
if (find_item(dataarr,6,name)==true)
{
    /* code */
    cout<<"Found\n";
}else
{
    /* code */
    cout<<"Not Found\n";
}
}
/* Ceart By 3lsaramegy*/
