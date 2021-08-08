#include<iostream>

using namespace std ;


//This is commit to old code 

/* 
    fancutions definition
// fancution to clac Area
double areaofsphere(float);
// fancution to clac VOLUME
double volumeofsphara(float);
*/



// fancution to clac Area
double areaofsphere(float ra){    
    return  4*3.14*ra*ra;
}
// fancution to clac VOLUME
double volumeofsphara(float rv){
    return 0.75*3.14*rv*rv*rv;
}v

// main fancution 
int main(){
    /*
        var r to store valu of Radius 
        var q to store valu of user Answer 
    */
    float r; string q ;
    //question to user 
    cout<<"If you Waint clac area Enter 'a' If Volume Enter 'v':\n";
    cin>>q;
// Chack user answer  
    if (q == "a")
    {
        cout<<"Enter Radius of sphere:\n";
        cin>>r;
        cout<<"It Area Of Sphere:"<< areaofsphere(r) <<"\n"; 
    }else if (q == "v")
    {
        cout<<"Enter Radius of sphere:\n";
        cin>>r;
        cout<<"It volume Of Sphere:"<< volumeofsphara(r)<<"\n";
    }else{
        cout<<"Error In Input !!\n";
    }            
}

//Solved By </3lsaramegy>;