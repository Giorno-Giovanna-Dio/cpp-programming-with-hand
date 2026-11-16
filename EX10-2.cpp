#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
int main(){
    
    string line, skip_line;
    int credit = 0;
    int total_credit = 0;
    float sgpa = 0.0;
    float gpa = 0.0;

    ifstream in("ex10-2-1.csv");
    if (!in.is_open()){
        cout << "Error: file can't be opened" << endl;
        return -1;
    }
    else{
        getline(in, skip_line);
    while (getline(in, line)){
        stringstream ss(line);

        string cname, grade;

        getline(ss, cname, ',');

        getline(ss, grade, ',');

        //input credit value from ss
        ss >> credit;

        total_credit += credit;

        //gpa calculation
        if (grade == "A+"){
            sgpa += 4.3*credit;
        }else if( grade == "A"){
            sgpa += 4.0*credit;
        }else if( grade == "A-"){
            sgpa += 3.7*credit;
        }else if( grade == "B+"){
            sgpa += 3.3*credit;
        }else if( grade == "B"){
            sgpa += 3.0*credit;
        }else if( grade == "B-"){
            sgpa += 2.7*credit;
        }else if( grade == "C+"){
            sgpa += 2.3*credit;
        }else if( grade == "C"){
            sgpa += 2.0*credit;
        }else if( grade == "C-"){
            sgpa += 1.7*credit;
        }else if( grade == "D"){
            sgpa += 1.0*credit;
        }else if( grade == "E"){
            sgpa += 0*credit;
        }else if( grade == "X"){
            sgpa += 0*credit;
        }

    }
        gpa = sgpa/total_credit;
    }
    
    

    in.close();
    cout << "Total Credits: " << total_credit << endl;
    cout << "GPA: " << fixed << setprecision(2) << gpa << endl;
    return 0;
}