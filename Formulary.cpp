#include<bits/stdc++.h>
using namespace std;
void formulary()
{
    fstream file2;
    string formula;

    
    file2.open("Formulary.txt", ios::app | ios::out | ios::in );
    if(file2.is_open())
    {
    
         while(!file2.eof())
        {
            getline(file2, formula);
            cout<<formula<<endl;
        }
        cout<<endl;

        }
    file2.close();

}
