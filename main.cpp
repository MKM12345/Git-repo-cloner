#include <iostream>
#include "gitcloner.h"

int main() {
    // Prompt for repository URL
    std::string url;
    std::cout << "Enter the GitHub repository URL: ";
    std::getline(std::cin, url);

    // Prompt for local path
    std::string path;
    std::cout << "Enter the local path to clone the repository: ";
    std::getline(std::cin, path);

    // Clone repository
    bool success = GitCloner::cloneRepository(url, path);

    if (success) {
       std::cout << "Repository cloned successfully!" << std::endl;
    } else {
       std::cout << "Error cloning repository." << std::endl;
    }


    return 0;
}
