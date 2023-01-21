#include "Converter.hpp"

Converter::Converter() : arg("default")
{
}

Converter::Converter(const string& arg) : arg(arg)
{
}

Converter::Converter(const Converter& cpy)
{
	*this = cpy;
}

Converter& Converter::operator=(const Converter& newOne)
{
	this->arg = newOne.arg;
	return (*this);
}

static bool containsOnlyLetters(std::string const &str) {
    return str.find_first_not_of("0123456789.f-") ==
        std::string::npos;
}

static void	handleChar(string arg)
{
	int num = static_cast<int>(arg[0]);
	cout << "Char: '" << arg << "'" << endl;
	cout << "Int: " << num << endl;
	cout << "Float: " << static_cast<float>(num) << ".0f" << endl;
	cout << "Double: " << static_cast<double>(num) << ".0" << endl;
}

static void	handleInt(string arg)
{
	try{
		int num = std::stoi(arg);
		if (num > 32 && num < 128)
			cout << "Char: '" << (char)num << "'" << endl;
		else
			cout << "Char: Non displayable" << endl;
		cout << "Int: " << num << endl;
		cout << "Float: " << static_cast<float>(num) << ".0f" << endl;
		cout << "Double: " << static_cast<double>(num) << ".0" << endl;
	}
	catch(std::out_of_range const& ex)
	{
		cout << ex.what() << endl;
	}
}

static void handleFloat(string arg)
{
	float num = std::stof(arg);
	if (num > INT_MAX || num < INT_MIN)
	{
		cout << "Index out of range" << endl;
		return ;
	}
	int	casted = static_cast<int>(num);
	if (casted > 32 && casted < 128)
		cout << "Char: '" << (char)num << "'" << endl;
	else
		cout << "Char: Non displayable" << endl;
	cout << "Int: " << casted << endl;
	cout << "Float: " << num << "f" << endl;
	cout << "Double: " << static_cast<double>(num) << endl;
}

static void handleDouble(string arg)
{
	double num = std::stod(arg);
	if (num > INT_MAX || num < INT_MIN)
	{
		cout << "Index out of range" << endl;
		return ;
	}
	int	casted = static_cast<int>(num);
	if (casted > 32 && casted < 128)
		cout << "Char: '" << (char)num << "'" << endl;
	else
		cout << "Char: Non displayable" << endl;
	cout << "Int: " << casted << endl;
	cout << "Float: " << static_cast<float>(num) << "f" << endl;
	cout << "Double: " << num << endl;
}

static void	handleImpossible()
{
	cout << "Char: Impossible" << endl;
	cout << "Int: Impossible" << endl; 
	cout << "Float: Impossible" << endl; 
	cout << "Double: Impossible" << endl;
}

static void	handleNan()
{
	cout << "Char: Impossible" << endl;
	cout << "Int: Impossible" << endl; 
	cout << "Float: nanf" << endl; 
	cout << "Double: nan" << endl;
}

static void	handleInf(string arg)
{
	cout << "Char: Non displayable" << endl;
	cout << "Int: " << ((arg[0] == '-') ? "-inf" : "+inf") << endl; 
	cout << "Float: " << ((arg[0] == '-') ? "-inff" : "+inff") << endl;
	cout << "Double: " << ((arg[0] == '-') ? "-inf" : "+inf") << endl;
}

int	Converter::checkForType() const
{
	size_t check = arg.length();
	if (arg == "nan" || arg == "nanf")
		return (5);
	else if (arg == "-inf" || arg == "+inf" || arg == "-inff" || arg == "+inff" ||
			arg == "inff" || arg == "inf")
		return (6);
	if (check == 1 && isprint(arg[0]) && !isdigit(arg[0]))
		return (1);
	else if (check > 1 && !containsOnlyLetters(arg))
		return (0);
	else
	{
		check = arg.find(".");
		if (check == string::npos)
		{
			return (2);
		}
		else
		{
			if (arg[check + 1] == 0)
				return (0);
			size_t check2 = arg.find("f");
			if (check2 != string::npos && check2 - check > 1)
			{
				return (3);
			}
			else
				return (4);
		}
	}
	return (0);
}

void	Converter::convertType(int type) const
{
	switch (type)
	{
	case 0:
		handleImpossible();
		break;
	case 1:
		handleChar(arg);
		break;
	case 2:
		handleInt(arg);
		break;
	case 3:
		handleFloat(arg);
		break;
	case 4:
		handleDouble(arg);
		break;
	case 5:
		handleNan();
		break;
	case 6:
		handleInf(arg);
		break;
	default:
		break;
	}
}
