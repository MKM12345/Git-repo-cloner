#include "gitcloner.h"
#include <iostream>
#include <cstdlib>

bool GitCloner::cloneRepository(const std::string& url, const std::string& path) {
    std::string gitCommand = "git clone " + url + " " + path;
    int result = std::system(gitCommand.c_str());

    if (result == 0) {
        std::cout << "Repository cloned successfully!" << std::endl;
        return true;
    } else {
        std::cout << "Error cloning repository." << std::endl;
        return false;
    }
}
