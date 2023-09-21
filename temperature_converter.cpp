#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Define input and output file paths
    string inputFile = "/Users/tuckerhoneycutt/csprojects/learningC++/helping/temps.txt";
    string outputFile = "/Users/tuckerhoneycutt/csprojects/learningC++/helping/table.txt";

    // Open the input file
    ifstream fin(inputFile);

    if (!fin) {
        cerr << "Error opening input file." << endl;
        return 1;
    }

    // Open the output file for writing
    ofstream fout(outputFile);

    if (!fout) {
        cerr << "Error opening output file." << endl;
        return 1;
    }

    // Skip the first line (headers) in the input file
    string headers;
    getline(fin, headers);

    // Write headers to the output file
    fout << left << setw(15) << "Celsius" << setw(15) << "Fahrenheit" << setw(15) << "Kelvin" << endl;

    double celsius;
    while (fin >> celsius) {
        // Calculate Fahrenheit and Kelvin
        double fahrenheit = (9.0 / 5.0) * celsius + 32.0;
        double kelvin = celsius + 273.15;

        // Write temperature values to the output file
        fout << fixed << setprecision(2) << setw(15) << celsius << setw(15) << fahrenheit << setw(15) << kelvin << endl;
    }

    // Close both input and output files
    fin.close();
    fout.close();

    cout << "Conversion completed. Data written to table.txt." << endl;

    return 0;
}
