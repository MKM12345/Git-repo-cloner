#ifndef GIT_CLONER_H
#define GIT_CLONER_H
#include <string>

class GitCloner {
public:
    static bool cloneRepository(const std::string& url, const std::string& path);
};

#endif  // GIT_CLONER_H
