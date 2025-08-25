#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

void Dowork(){
    for (int i = 0; i < 10; i ++){
        cout << "id thread = " << this_thread::get_id() << "\tDowork" << i << endl;
        this_thread::sleep_for(chrono::milliseconds(3000));
    }
}

int matchs(int a, int b){
    this_thread::sleep_for(chrono::milliseconds(3000));
    cout << "_______________start program_____________" << endl;
    this_thread::sleep_for(chrono::milliseconds(3000));
    cout << "a + b = " << a + b << endl;
    this_thread::sleep_for(chrono::milliseconds(3000));
    cout << "_______________finish program!_____________" << endl;

    return a + b;
}

int main(){

    //thread th(Dowork);

    int rezult;

    thread mh([&rezult]() { rezult = matchs(2, 10); });

    for (int i = 0; true; i ++){
        cout << "id thread = " << this_thread::get_id() << "\tmain" << i << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    mh.join();
    //th.join();

}