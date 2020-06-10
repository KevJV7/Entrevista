#include <iostream>
#include <fstream>
#include <sstream>
#include <dirent.h>
#include <stdlib.h>

using namespace std;
void escribir();
void list_dir(string dir)
{
    DIR* directorio;
    struct dirent* elemento;
    string elem;
    string todo;
    string xx;

    if (directorio = opendir(dir.c_str()))
    {
        while (elemento = readdir(directorio))
        {
            elem = elemento->d_name;
            todo = dir + "\\" + elem;

            /////////////////////////////////////////////////  /////////////////////////////////////////////////  /////////////////////////////////////////////////
            ifstream ifs(todo);

            ifs.seekg(0, ios::end);
            int x;
            x = ifs.tellg();

            stringstream ss;
            ss << x << endl;
            string newString = ss.str();


            xx = "{\"name\":\"" + elem + "\",""\"size:\"" + newString + "}," + "";
            if (elem != "." && elem != "..") cout << xx << endl;

        }
    }
    closedir(directorio);
}

void init()
{
    cout << "Ruta del directorio a listar: ";

    string dir;
    getline(cin, dir);
    cout << "{\"files""\":[\"";
    list_dir(dir);
    cout << "]}\n";
    init();

}

int main(int argc, char* argv[])
{
    init();
    system("PAUSE");
    return 0;
}