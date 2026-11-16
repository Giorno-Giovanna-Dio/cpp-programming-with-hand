#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    ifstream in("ex10-1-1.txt");
    string line;
    int max = 0;
    int total_lines = 0;
    int non_empty_lines = 0;
    while (getline (in, line)){

        //test input: pass
        //cout << line << endl;

        //update the max value
        if(line.length() > max && line.length() > 0){
            max = line.length();
            //test: pass
            //cout << line.length() << "<- the new high score!" << endl;
            non_empty_lines ++;
        }

        total_lines ++;
        
        
    }
    in.close();

    printf("Total Lines: %d\n", total_lines);
    printf("Non-empty Lines: %d\n", non_empty_lines);
    printf("Longest Line Length: %d\n", max);
    
    return 0;
}