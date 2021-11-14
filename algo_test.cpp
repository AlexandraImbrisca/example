#include "algo.h"
#include <fstream>

int main () {
	int n;
	std::ifstream input_file;
	std::ofstream output_file;
	
    input_file.open("./test.in");
	output_file.open("./test.out");
	
	input_file >> n;
	output_file << square(n) << "\n";
	
	input_file.close();
	output_file.close();
	return 0;
}
