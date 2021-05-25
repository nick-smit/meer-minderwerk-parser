#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string line;
    std::ifstream myfile;
    myfile.open("in.txt");

    std::ofstream outFile;
    outFile.open("out.csv");
    
    outFile << "id,omschrijving,prijs" << std::endl;

    if (myfile.is_open()) {
        int cur = 1;
        while (std::getline(myfile, line)) {
            std::cout << "Parsing line" << cur++ << std::endl;
            if (line.compare("15 woningen") + line.compare("Tweekapper") + line.compare("pagina") >= 0) {
                continue;
            }

            std::string id;
            std::string description;

            int len = line.length();
            for (int i = 0; i < len; i++) {
                if (std::isspace(line[i])) {
                    // Rest of the line is description

                    description = line.substr(++i);
                    break;
                }

                id += line[i];
            }

            while (std::getline(myfile, line)) {
                if (line.substr(0, 3).compare("EUR") == 0) {
                    outFile << "\"" << id << "\",\"" << description << "\",\"" << line.substr(4) << "\"" << std::endl;
                    break;
                }
            }
        }
    }
    else std::cout << "Unable to open file";

    outFile.close();
    myfile.close();

    return 0;
}
