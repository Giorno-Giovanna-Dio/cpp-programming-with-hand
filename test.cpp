#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    
    //writing into the file
    ofstream out("input.txt");

    //out << "hello world";
    
    for (int i = 0; i < 10; i++)
    {
        out << i << endl;
    }
    out.close();

    ifstream in("input.txt");
    //declare a string variable
    string text;
    
    while (getline(in, text)){
        cout << text << endl;
    }

    in.close();
    return 0;
}