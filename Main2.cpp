#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//listdir
string init(string a) {
    int sum = 0;
    string line;
    ifstream measFile(a);
    if (measFile.is_open()) {
        while (getline(measFile, line)) {
            sum += line.size() + 1;
        }
        sum++;
    }
    else {
        cout << "Error ocurred with file: " << a << endl;
    }
    measFile.close();
    return to_string(sum);
}

int main(int argc, char** argv) {
    if (argc == 1) {
        cout << "Please provide name of files." << endl;
    }
    else {
        ofstream fp("hola.json");
        fp << "{ \"files\": [\n";
        for (int i = 0; i < argc - 2; i++) {
            fp << "\t{\"name\":\"" << argv[i + 1] << "\", \"size\":" << init(argv[i + 1]) << "},\n";
        }
        fp << "\t{\"name\":\"" << argv[argc - 1] << "\", \"size\":" << init(argv[argc - 1]) << "}\n";
        fp << "]}\n";
    }
    return 0;
}
