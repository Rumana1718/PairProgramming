#include<bits/stdc++.h>
using namespace std;
void newMedication()
{

    fstream file;
    char medic[200],dose[200];

    file.open ("Medicine.txt", ios::app | ios::out | ios::in );

    if(file.is_open())
    {
        cout<<"Your New Medicine: ";
        file<<"Medicine: ";
        cin.getline(medic, sizeof(medic));
        file<<medic;
        cout<<endl<<"Dose: ";
        file<<" Dose: ";
        cin.getline(dose,sizeof(dose));
        file<<dose;
        file<<endl;
        
    }
        cout<<endl;

        file.close();

}


    return 0;
}
