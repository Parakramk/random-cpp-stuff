#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
    string text = "";
    smatch matches;
    const string Pattern = "";

    // Define the regex pattern / Create a Object of regex class
    regex pattern(Pattern);

    // Search for matches in the text
    if (std::regex_search(text, matches, pattern)) {
        // The first submatch (matches[0]) contains the whole match
        cout << "Full match: " << matches[0] << endl;
    }
    else {
        cout << "No match found." << endl;
    }

    return 0;
}
