#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Employee{
    string name;
    string position;
    int salary;
};

Employee add();

string command(){
    string command;
    cout << "input command: " << endl;
    cout << "---------------------------" << endl;
    cout << "add - add an employee" << endl;
    cout << "---------------------------" << endl;
    cout << "delete - delete an employee" << endl;
    cout << "---------------------------" << endl;
    cout << "search - search an employee" << endl;
    cout << "---------------------------" << endl;
    cout << "all - the whole list" << endl;
    cout << "---------------------------" << endl;
    cout << "exit - exit program" << endl;
    cout << "---------------------------" << endl;
    cout << "> ";
    cin >> command;
    cout << endl;
    return command;
}

void all(vector<Employee>* emp);

void search(vector<Employee>* emp);

vector<Employee> deleted(vector<Employee>* emp);

int main(){

    vector<Employee> employees;
    int exit;

    while (exit != 1){
        string time_command = command();
        
        if (time_command == "add"){
                employees.push_back(add());
                cout << "add new employee!" << endl;
        }
        else if (time_command == "delete"){
            employees = deleted(&employees);
            cout << "employee deleted" << endl;
            cout << endl;
        }
        else if (time_command == "search"){
            search(&employees);
        }
        else if (time_command == "all"){
            cout << "all employees:" << endl;
            all(&employees);
            cout << endl;
        }
        else if (time_command == "exit"){
            exit = 1;
        }
        else
            cout << "no commant" << endl;

        time_command = "";
    }
}

Employee add(){
    string name;
    string position;
    int salary;
    cout << "input name: ";
    cin >> name;
    cout << endl;
    cout << "input position: ";
    cin >> position;
    cout << endl;
    cout << "input salary: ";
    cin >> salary;
    cout << endl;

    Employee employee;
    employee.name = name;
    employee.position = position;
    employee.salary = salary;

    return employee;

}

void all(vector<Employee>* emp){
    int cnt = 1; 
    for (const Employee& em: *emp){
        cout << cnt << ":" << endl;
        cout << "name: " << em.name << endl;
        cout << "position: " << em.position << endl;
        cout << "salary: " << em.salary << endl;
        cout << endl;
        cnt ++;
    }
}

void search(vector<Employee>* emp){
    string name;
    cout << "input name: ";
    cin >> name;
    cout << endl;

    for (const Employee& em: *emp){
        if (em.name == name){
            cout << endl;
            cout << "rezulted in search:" << endl;
            cout << "name: " << em.name <<endl;
            cout << "position: " << em.position << endl;
            cout << "salary: " << em.salary << endl;
            cout << endl;
            break;
        }
    }
}

vector<Employee> deleted(vector<Employee>* emp){
    string name;
    cout << "input name: ";
    cin >> name;
    cout << endl;
    for (vector<Employee>::iterator iter = (*emp).begin(); iter < (*emp).end(); iter++){
        Employee object = *iter;
        if (object.name == name){
            (*emp).erase(iter);
            break;
        }
    }


    return *emp;
}