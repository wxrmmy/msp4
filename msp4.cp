//Cara Gonzales
//12/1
//Msp4
//this program will calculate the average grades from data file 
//and save the results in averages file

#include <iostream>
#include <iomanip> 
#include <fstream> // library for file input and output
using namespace std;

int main() {

    string name;
    int studentId ,grade1, grade2, grade3;
    double average;

    // Declare input file stream variable and open the input file:
    ifstream fin;
    fin.open("Student_data.txt");

    // Declare output file stream variable and open the output file:
    ofstream fout;
    fout.open("averages.txt");



    // Error check to ensure the input file opened:
    if (!fin) {
        cout << "Could not open file. Terminating program." << endl;
        return -1;
    }

    // Write the column headers to the output file:
    fout << left;
    fout << "SID" <<setw(10)<< "Name" <<setw(10)<< "Average" << endl;


        while(fin >> studentId  >>name >> grade1 >> grade2 >> grade3) {
        // Calculate the average

        average = (double)(grade1 + grade2 + grade3)/ 3.0;
        // Write each quarter's data to the output files
        fout <<setw(10)<< studentId << setw(10)<<name<<setw(10)<<average << endl;
    }


    cout << "Data written to averages.txt" << endl;


    // Close the input and output files:
    fout.close();
    fin.close();

    // Exit the program:
    return 0;
}