#include <iostream>
#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;

struct car {
    string model;
    unsigned short year_of_reliace;
    string engine;
    unsigned short ls;
    float value_engine;
};

int main(){

    car mustang;
    mustang.model = "Mustang Shelbi";
    mustang.value_engine = 6.0;
    cout << "valie engine mustang shelbi:" << mustang.value_engine << endl; 
    

    //string sled = " ";
    //while(sled != "exit"){
        srand(time(NULL));
        int random = 1 + rand() % 100;
        cout << "random number: " << random << endl;
        //cin >> sled;
    //}

    int *nums = new int[3];
    nums[0] = 1000;
    nums[1] = 1001;
    nums[2] = 1002;
    cout << nums[0] << nums[2] << endl;
    delete[] nums;
    
    ofstream file("file.txt", ios_base::out);
    if(file.is_open()){
        file << "Hello World!";
        file.close();
    }

    //ifstream filein("file.txt");
    //char text[100];
    //string text;
    //filein >> text;
    //filein.getline(text,100);
    //filein.close();
    cout << endl;
    //cout << text << endl;

    float b = 0.0;
    try{
        if (b == 0.0 ){
        throw 444;
        }
        else 2 / b;
    }
    catch(int error){
        if (error == 444){
            cout << "GG" << endl;
        }
    }

    string str1 = "ис";
    string str2 = "-7";
    str1.append(str2);
    cout << str1 << endl;

    str1.pop_back();
    cout << str1 << endl;
    str1.push_back('7');
    cout << str1 << endl;
    str1.resize(2);
    cout << str1 << endl;

    cout << pow(2, 3) << endl;
    cout << abs(-3) << endl;
    cout << sqrt(16) << endl;
    cout << ceil(1.42f) << floor(1.99f) << endl;
    cout << round(1.25f) << endl;

    
}