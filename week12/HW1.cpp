#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    //declaration
    string sp = "89996565";
    string gp = "91098182";
    string fp1 = "54348835";
    string fp2 = "44991397";
    string fp3 = "06595111";

    int totalPrize = 0;

    string input;
    while (getline(cin,input) && input != "END"){
        size_t pos = input.find('-');

        //eight digits: trimming
        int ed = stoi(input.substr(pos+1,8));
        //cout << ed << endl;

        //check sp, gp and fp s:
        if ((ed - stoi(sp)) == 0){
            cout<<input<<": "<<"Special Prize"<<endl;
            totalPrize += 10000000;
            continue;
        }else if((ed - stoi(gp))==0){
            cout<<input<<": "<<"Grand Prize"<<endl;
            totalPrize += 2000000;
            continue;
        }else if((ed - stoi(fp1))==0){
            cout<<input<<": "<<"First Prize"<<endl;
            totalPrize += 200000;
            continue;
        }else if((ed - stoi(fp2))==0){
            cout<<input<<": "<<"First Prize"<<endl;
            totalPrize += 200000;
            continue;
        }else if((ed - stoi(fp3))==0){
            cout<<input<<": "<<"First Prize"<<endl;
            totalPrize += 200000;
            continue;
        }

        //check second - sixth prizes
        int place = 0;
        for (int i = 7; i>=3; i--){
            
            if ((ed - stoi(fp1)) % int(pow(10,i)) == 0){
                place = 9 - i;
                break;
            }else if ((ed - stoi(fp2)) % int(pow(10,i)) == 0){
                place = 9 - i;
                break;
            }else if ((ed - stoi(fp3)) % int(pow(10,i)) == 0){
                place = 9 - i;
                break;
            }
        }
        switch (place)
        {
        case 2:
            cout<<input<<": "<<"Second Prize"<<endl;
            totalPrize += 40000;
            break;
        case 3:
            cout<<input<<": "<<"Third Prize"<<endl;
            totalPrize += 10000;
            break;
        case 4:
            cout<<input<<": "<<"Fourth Prize"<<endl;
            totalPrize += 4000;
            break;
        case 5:
            cout<<input<<": "<<"Fifth Prize"<<endl;
            totalPrize += 1000;
            break;
        case 6:
            cout<<input<<": "<<"Sixth Prize"<<endl;
            totalPrize += 200;
            break;
        default:
            cout<<input<<": "<<"No Prize"<<endl;
            break;
        }

    }
    cout << "Total Prize: " << totalPrize << endl;
    return 0;
}