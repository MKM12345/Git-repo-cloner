# Git-repo-cloner

This is a simple C++ program that allows you to clone GitHub repositories using the command-line Git tool.

## Prerequisites

- C++ compiler
- Git command-line tool

## Getting Started

1. Clone or download this repository.

2. Build the project using your preferred build system or IDE.

3. Run the program and follow the prompts to provide the GitHub repository URL and the local path to clone the repository.

4. The program will execute the Git command to clone the repository and display a success message or indicate any errors encountered during the cloning process.

## Usage

- Ensure that the Git command-line tool is installed and accessible from the command line. Give the necessary input.
## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).

## Alternative

If this doesn't work, just use the below (It will definitely work, only one file requires):

```
#include <iostream>
#include <cstdlib>

int main() {
    std::cout << "GitHub Repository Cloner" << std::endl;

    // Retrieve repository URL from user
    std::string repositoryUrl;
    std::cout << "Enter the URL of the GitHub repository: ";
    std::getline(std::cin, repositoryUrl);

    // Retrieve target directory from user
    std::string targetDirectory;
    std::cout << "Enter the target directory (leave empty for current directory): ";
    std::getline(std::cin, targetDirectory);

    // Construct the git clone command
    std::string command = "git clone " + repositoryUrl;
    if (!targetDirectory.empty()) {
        command += " " + targetDirectory;
    }

    // Execute the git clone command
    int result = std::system(command.c_str());

    if (result == 0) {
        std::cout << "Repository cloned successfully!" << std::endl;
    } else {
        std::cerr << "Failed to clone repository." << std::endl;
    }

    return 0;
}
```
