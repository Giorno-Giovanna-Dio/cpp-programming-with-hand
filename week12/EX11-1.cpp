#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
int main(){
    string line;
    ifstream fin("scores.txt");

    //get five students name and number of scores here:
    for (int i = 0; i <5; i++){
        getline(fin, line);
        //cout << line <<endl;

        stringstream ss(line);
        string name;
        //dynamic array for later
        vector<int> scores;

        ss >> name;
        int score;
        while (ss >> score){
            scores.push_back(score);
        }

        
        int k = scores.size();
        int counter = k;
        int sum = 0;

        double avg;
        for (int i = 0; i< k; i++){
           sum += scores[i];
           avg = double(sum) / k;
        }
        cout << name << ' ' << k << ' ' << fixed << setprecision(1) << avg << endl;
        
    }
    fin.close();
    return 0;
}