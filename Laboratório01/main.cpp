#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {


    
  string filename;
  cout << "Digite o nome do arquivo: ";
  cin >> filename;

  ifstream inputFile (filename);
  
  if (!inputFile) {
        cerr << "Não foi possível abrir o arquivo." << endl;
        return 1;
    }
   

    string line;
    while (getline(inputFile,line)) {
        string output;
        for (size_t i = 0; i < line.length(); ++i) {
            if (line[i] == '_') {
                output += "<i>";
                ++i;
                while (i < line.length() && line[i] != '_') {
                    output += line[i];
                    ++i;
                }
                output += "</i>";
                if (i < line.length() && line[i] != '_') {
                    output += line[i];
                }
            } else if (line[i] == '*') {
                output += "<b>";
                ++i;
                while (i < line.length() && line[i] != '*') {
                    output += line[i];
                    ++i;
                }
                output += "</b>";
                if (i < line.length()  && line[i] != '*') {
                    output += line[i];
                }
            } else {
                output += line[i];
            }
        }
        cout << output << endl;
    }
    
    inputFile.close();
  
    return 0;
}
