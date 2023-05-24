cmake_minimum_required(VERSION 3.10)
project(Git-repo-cloner)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the executable
add_executable(GitHubRepositoryCloner main.cpp gitcloner.cpp)

# Specify any additional libraries or dependencies if required
# For example:
# find_package(Threads REQUIRED)
# target_link_libraries(GitHubRepositoryCloner Threads::Threads)
