#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<cmath>
using namespace std;


int main(void) {

    const int MAXSTUDENTS = 5;
    string filename = "grade.dat";
    string name;
    int i;
    double ex1, ex2, hw, fe,fg; // fg is the final grade

    //write code to open file "grade.dat" with handle "outFile" for wrtie
    ofstream outFile;

    outFile.open(filename); //opens the file

    if(!outFile) {
        cerr << "Error: file could not be opened"<<endl;
        exit(1);
    }

    for(i = 0 ; i < MAXSTUDENTS ; i++) {
        cout<<"\nEnter the students's last name ans four scores (XX 0 0 0 0 to exit): \n";
        cin>>name>>ex1>>ex2>>hw>>fe;
        if(name == "XX")
            break;
        
        fg = ( ((20.0 / 100)*ex1) + ((20.0 / 100)*ex2) + ((35.0 / 100)*hw) + ((25.0 / 100)*fe) );

        cout<<endl<<"For this student the following data has been written to the file: \n";

        cout<<name<<" "<<ex1<<" "<<ex2<<" "<<hw<<" "<<fe<<" "<<fg<<endl;

        outFile<<name<<" "<<ex1<<" "<<ex2<<" "<<hw<<" "<<fe<<" "<<fg<<endl;

    }   

    outFile.close();

    return 0;
}