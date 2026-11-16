#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    fstream out("input.txt", ios::in | ios::out);
    if (out.fail()){
        cout << "Cannot open the file " << "input.txt" <<endl;
        return 1;
    }

    string line;
    out >> line;
    cout << line;
    return 0;
}