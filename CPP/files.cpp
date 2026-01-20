#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <ctime>

using namespace std;


string getTime() {
    auto now = chrono::system_clock::now();
    time_t currentTime = chrono::system_clock::to_time_t(now);

    return ctime(&currentTime);
}

int main() {

    fstream file("./data.txt", ios::in | ios::out | ios::app);

    if (!file) {
        cout << "File Could not be opened!!";
        return 1;
    }

    string logHead = "Log details on `"+ getTime() +"`: ";
    file << logHead + "My New Fstream file write" << endl;


    cout << file.tellg() << endl;
    file.seekg(0);

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();

}

// int main() {
//     ofstream o_file("./data.txt");
    
//     if (!o_file) {
//         cout << "File could not be opened!!";
//         return 1;
//     }

//     o_file << "My name is Ankit" << endl;
//     o_file << "I am a boy" << endl;

//     o_file.close();

//     ifstream i_file("./data.txt");

//     if (!i_file) {
//         cout << "File could not be opened!!";
//         return 1;
//     }



//     // string line;
//     // // i_file.seekg(0);
//     // // while(getline(i_file, line)) {
//     //     //     cout << line << endl;
//     //     // }
        
        
//     //     getline(i_file, line);
//     //     cout << line << i_file.tellg() << endl;
        
//     //     i_file.close();
        
//     //     i_file.open("./data.txt");
//     //     i_file.seekg(18);
//     // getline(i_file, line);
//     // cout << line << i_file.tellg() << endl;

    
    

//     // char ch;
//     // while(i_file.get(ch)) {
//     //     cout << ch;
//     // }

//     // string name;
//     // getline(i_file, name);
//     // cout << name;

//     i_file.close();
// }