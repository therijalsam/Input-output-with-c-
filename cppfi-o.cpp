#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {

	string fileNames[] = {"Receipt1.txt", "Receipt2.txt", "Receipt3.txt"};
	string make;
	string model;
	int price, curbWeight;
	int totalPrice = 0, totalCurbWeight = 0;

	ofstream outputFile("Output.txt");
	if (!outputFile) {
		cout << "Error creating output file!" << endl;
		return 1;
	}

	for (int i = 0; i < 3; i++) {
		ifstream inputFile(fileNames[i]);
		if (!inputFile) {
			cout << "Error opening file: " << fileNames[i] << endl;
			return 1;
		}

		string line;
		while (getline(inputFile, line)) {
			if (line.find("Make:") != string::npos) {
				make = line.substr(6);
			}
			else if (line.find("Model:") != string::npos) {
				model = line.substr(7);
			}
			else if (line.find("Purchase Price:") != string::npos) {
				price = stoi(line.substr(15));
				totalPrice += price;
			}
			else if (line.find("Curb wt:") != string::npos) {
				curbWeight = stoi(line.substr(9));
				totalCurbWeight += curbWeight;
			}
		}

		cout << make << ", " << model << endl;
		outputFile << make << ", " << model << endl;

		inputFile.close();
	}

	cout << "Total Cost: " << totalPrice << endl;
	cout << "Total Curb Weight: " << totalCurbWeight << endl;
	outputFile << "Total Cost: " << totalPrice << endl;
	outputFile << "Total Curb Weight: " << totalCurbWeight << endl;

	outputFile.close();

	return 0;
}
