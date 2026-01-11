#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
 * Algorithm Challenge – Level 3 | #39 Join Strings
 *
 * This program takes a vector of strings and joins them into a single string using a specified separator.
 *
 * The goal of this challenge is to practice:
 * - Working with vectors
 * - Iterating over collections
 * - Building strings dynamically
 * - Controlling separators during concatenation
 *
 * This type of logic is commonly used when preparing formatted output, logs, or serialized data.
 */

// Joins all strings in a vector using a given delimiter
string JoinString(vector<string> VecString, string Delim)
{
    string Result = ""; // Stores the final joined string

    // Iterate through the vector and append each element
    for (string &s : VecString)
    {
        Result = Result + s + Delim;
    }

    // Remove the last extra delimiter
    return Result.substr(0, Result.length() - Delim.length());
}

int main()
{
    // Hard-coded vector of names
    vector<string> VecString = {"Mohammed", "Fahad", "Salim", "Alya"};

    cout << "After Join Operation:" << endl;
    cout << JoinString(VecString, " - ");

    return 0;
}
