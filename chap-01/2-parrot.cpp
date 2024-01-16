#include <iostream>
#include <sstream> // pour std::string et std::getline
#include <vector>  // pour std::vector

int main() {
    std::stringstream lines;

    while (true) {
        std::string line;
        std::getline(std::cin, line);
        if (line.empty()) { // si ligne vide, on arrête
            break;
        }
        lines << "Craow " << line << std::endl;
    }

    std::cout << lines.str(); // affiche résultat obtenu

    /*
    std::vector<std::string> lines;
    while (true) {
        std::string line;
        std::getline(std::cin, line);
        if (line.empty()) { // si ligne vide, on arrête
            break;
        }
        lines.emplace_back(line);
    }
    for (auto line : lines) {
        std::cout << "Craow " << line << std::endl;
    }
    */
    return 0;
}
