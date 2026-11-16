#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main(){
    setlocale(LC_ALL, "ru-RU");

    string name_file;
    char sign;
    vector<char> text;
    map<char, int> element;

    cout << "input name file: ";
    getline(cin, name_file);

    ifstream file;
    try{
        file.open(name_file);
        if(!file.is_open()){
            throw("no_open_file");
        }
    }
    catch(const char *error){
        cout << "ERROR: " << error << endl;
    }

    while(file.get(sign)){
        if (element.count(sign)){
            for (const auto& [el, znach]: element){
                if (el == sign){
                    element[sign] = znach + 1;
                }
            }
        }
        else{
            if (sign != ' '){
                element[sign] = 1;
            }
        }
        text.push_back(sign);
    }
    file.close();

    cout << endl;
    cout << "text from file:" << endl;

    for(char i: text){
        cout << i;
    }

    cout << endl;
    cout << endl;

    int max = 0;
    char let;

    for (const auto& [letter, num]: element){
        if (num > max){
            max = num;
            let = letter;
        }
    }

    cout << "frequent letter: " << let << endl;
    cout << "it occurs: " << max << " once" << endl;

}