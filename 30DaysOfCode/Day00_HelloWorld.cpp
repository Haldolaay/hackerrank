#include <iostream>// calling a library into our programe, we can't use cout without it
using namespace std;// strings need std:: operater, using namespace saves us from writing std everytime

int main() {
    string str;
    getline(cin, str);
    cout << "Hello, World." << endl; // cout is a stream, using the << operater, we are sending the message to be shown on the stream
    cout << str << endl;
}
