#include <iostream>
#include <String>
using namespace std;
int main(){
    while(true){
        string the_equation;
        cout <<"input: ";
        cin >> the_equation;
        string num1;
        string num2;
        char sign;
        unsigned char cnt = 0;
        for(int m = 0; m < the_equation.length(); m++){
            if (the_equation[m] == '@'){
                cnt++;
            }
        }
        while(cnt + 1 != the_equation.length()){
            for(unsigned short i = 0; i < the_equation.length(); i++){
                if (the_equation[i] == '@'){
                    continue;
                }
                if (the_equation[i] == '+' || the_equation[i] == '/' || the_equation[i] == '*' || the_equation[i] == '-'){
                    for(unsigned short j = 0; j < i; j++){
                        num1 += the_equation[j];
                        the_equation[j] = '@';
                    }
                    sign = the_equation[i];
                    the_equation[i] = '@';
                    break;
                }
            }
            for(unsigned short i = 0; i < the_equation.length(); i++){
                if (the_equation[i] == '@'){
                    continue;
                }
                if (the_equation[i] == '+' || the_equation[i] == '/' || the_equation[i] == '*' || the_equation[i] == '-'){
                    for(unsigned short j = 0; j < i; j++){
                        if (the_equation[j] != '@'){
                            num2 += the_equation[j];
                            the_equation[j] = '@';
                        }
                    }
                    break;
                }
                if (i + 1 == the_equation.length()){
                   for(unsigned short j = 0; j < i + 1; j++){
                    if (the_equation[j] != '@'){
                            num2 += the_equation[j];
                            the_equation[j] = '@';
                        }
                    }
                    break; 
                }
            }

            cout << the_equation << endl;
            int num_one = std::stoi(num1);
            int num_two = std::stoi(num2);

            if (sign == '+'){
            cout << num_one + num_two << endl;
            }
            else if(sign == '-'){
                cout << num_one - num_two << endl;
            }
            else if(sign == '/'){
                cout << num_one / num_two << endl;
            }
            else if(sign == '*'){
                cout << num_one * num_two << endl;
            }
            break;
        }
        num1 = "";
        num2 = "";
        the_equation = "";
        cnt = 0;
    }

}