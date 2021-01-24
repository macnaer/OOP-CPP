#include <iostream>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

void Connect(int connect) {

    if (connect == 1) {
        throw exception("404 Not Found");
    }
    else if (connect == 2) {
        throw exception("500 Internal Server Error");
    }
    else if (connect == 3) {
        cout << "Connected " << endl;
    }
    else {
        throw exception("Some exception");
    }
}

using namespace std;

int main()
{

    string path = "file.txt";
    ifstream stream;
    stream.exceptions(ifstream::badbit | ifstream::failbit);

    try
    {
        stream.open(path);

    }
    catch (const ifstream::failure& ex)
    {
        cout << ex.what() << endl;
        cout << ex.code() << endl;
    }
    //srand(unsigned(time(NULL)));

    //int connect = rand() % 5 + 1;


    //try
    //{
    //    Connect(connect);
    //}
    //catch (const exception& ex) {
    //    // cout << "catch " << ex <<endl;
    //    cout << ex.what() << endl;
    //}
  
    return 0;
}
