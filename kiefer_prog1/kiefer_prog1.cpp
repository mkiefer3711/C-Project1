// kiefer_prog1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;
int main()
{   //Declare variables;
    ifstream inFile;  //input file stream variable
    ofstream outFile;  //outputfile stream variable

    double salary1, salary2, salary3;
    double payIncrease1, payIncrease2, payIncrease3;
    double updatedSalary1, updatedSalary2, updatedSalary3;

    string firstName1, firstName2, firstName3;
    string lastName1, lastName2, lastName3;

    //Opens the files
    inFile.open("Ch3_Ex5Data.txt");
    outFile.open("Ch3_Ex5Output.dat");

    //Outputs floating-point numbers in a fixed decimal format
    outFile << fixed << showpoint;
    outFile << setprecision(2);

    cout << "Processing data" << endl;

    //Reads the variables from the input file
    inFile >> lastName1 >> firstName1 >> salary1 >> payIncrease1;
    inFile >> lastName2 >> firstName2 >> salary2 >> payIncrease2;
    inFile >> lastName3 >> firstName3 >> salary3 >> payIncrease3;

    //Formula to get the updated salary
    updatedSalary1 = (salary1 * payIncrease1);
    updatedSalary2 = (salary2 * payIncrease2);
    updatedSalary3 = (salary3 * payIncrease3);
    
    //Outputs the variables to the output file
    outFile << "Employee name: " << firstName1 << " " << lastName1 << " Updated Salary: " <<setw(5) << updatedSalary1 << endl;
    outFile << "Employee name: " << firstName2 << " " << lastName2 << " Updated Salary: " << setw(5) << updatedSalary2 << endl;
    outFile << "Employee name: " << firstName3 << " " << lastName3 << " Updated Salary: " << setw(5) << updatedSalary3 << endl;

    //Closes the files
    inFile.close();
    outFile.close();

    return 0;

}

