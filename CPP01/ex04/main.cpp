#include <iostream>
#include <fstream>

using std::string;
using std::cout;
using std::endl;
using std::cerr;

int	main(int ac, char **av)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	string			input_line;
	size_t			found;
	
	if (ac != 4)
	{
		cerr << "Invalid" << endl;
		return 0;
	}
	infile.open(av[1]);
	outfile.open("replace.txt");
	if (!infile.is_open())
	{
		cerr << "Error on opening file" << endl;
		return 1;
	}
	while (infile.good())
	{
		std::getline(infile, input_line);
		found = input_line.find(av[2]);
		while (found != string::npos)
		{
			input_line.erase(found, strlen(av[2]));
			input_line.insert(found, av[3]);
			found = input_line.find(av[2]);
		}
		outfile << input_line << endl;
	}
	return (0);
}
