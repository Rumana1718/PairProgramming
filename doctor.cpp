#include<bits/stdc++.h>
using namespace std;
int main()
{
   
  char text[200];
    string texts;
    int n,m,a,b;
    do
    {
   cout<<"Enter your choice::"<<endl
        <<"1.Current Medication"<<endl
        <<"2.New Medication"<<endl
        <<"3.Show the formulary"<<endl
        <<"4.I don't need anything"<<endl;
    cin>>n;
    
   if(n==1)
    {
        currentMedication();


    }
       
    else if(n==2)
       
    {
       
        newMedication();
       
    }
       
    else if(n==3)
       
    {
       
        formulary();
       
    }
       
    }
    while(n!=4);


    return 0;
}
