#include <iostream>
#include <fstream>
#include <string>
#include <format>
using namespace std;

int main()
{
    ofstream app;
    app.open("test.txt");
    if(app.is_open())
    {
        app << "hello" << endl;
    }
    app.close();

    ifstream in("test.txt");
    string text;
    if(in.is_open())
    {
        while(getline(in, text))
        {
            cout << text << endl;
        }
    }
    in.close();

    ofstream out;
    out.open("kod.cpp", ios::app);
    if(out.is_open())
    {
        cout << "open" << endl;
        out << "#include <iostream>" << endl;
        out << "using namespace std;" << endl;
        out << endl;
        out << "int main()" << endl;
        out << "{" << endl;
        out << "\tcout << \"Hello world\" << endl;" << endl;
        out << "}" << endl; 
    }
    out.close();
    cout << "close" << endl;

    ifstream chit("kod.cpp");
    string kod;
    if(chit.is_open())
    {
        while(getline(chit, kod))
        {
            cout << kod << endl;
        }
    }
    chit.close();

    int a {1};
    int b {2};
    cout << format("{} + {} = {}", a, b, a+b) << endl;
}
