// Introduction to recursion
#include<iostream>
#include<string>

using namespace std;


//this function runs basic recursion to print Run N times
void funcRec(int i,int n){
    if(i>n) return;

    cout<<"Run"<<endl;
    funcRec(i+1,n);

}


//this function runs basic recursion 1 to N
void rec1N(int i,int n){
    if(i>n) return;

    cout<<i<<endl;
    rec1N(i+1,n);

}
// recursion 1 to N by backtracking 
void rec1Nb(int i,int n){

    if(i<1) return;
    rec1Nb(i-1,n);
    cout<<i<<endl;
}


//this function runs the recursion from N to 1
void recN1(int i,int n){

    if(i < 1) return;

    cout << i <<endl;
    recN1(i-1,n);
}


// recursion N to 1 by backtracking 
void recN1b(int i,int n){

    if(i>n) return;
    recN1b(i+1,n);
    cout<<i<<endl;
}


int main(){
int n;
cout<<"Enter N: ";
cin>>n;
cout<<"Prints Run N times"<<endl;
funcRec(1,n);
cout<<"\n"<<"prints 1 to N"<<endl; 
rec1N(1,n);
cout<<"\n"<<"prints N to 1"<<endl;
recN1(n,n);
cout<<"\n"<<"prints 1 to N using backtracking "<<endl;
rec1Nb(n,n);
cout<<"\n"<<"prints N to 1 using backtracking"<<endl;
recN1b(1,n);
}