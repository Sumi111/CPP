#include "main.hpp"

std::string ft_replace(std::string str, std::string s1, std::string s2, std::size_t pos)
{
	str.erase(pos, s1.length());
	str.insert(pos, s2);
	return (str);
}

int main(int argc, char **argv)
{
	std::size_t		pos=0;
	std::ifstream	fin;
	std::ofstream	fout;
	std::string		filename, s1, s2, str;	
	
	if (argc != 4)
	{
		std::cout << "Wrong no. of arg. Needs: File_name string_1 string_2" << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty() || s2.empty())
	{
		std::cerr << "Strings can't be empty. Try again!" << std::endl;
		return (1);
	}
	fin.open(filename.c_str());
	if (fin.fail())
	{
		std::cerr << "Error: No such file present" << std::endl;
		return (0);
	}
	std::string r = ".replace";
	fout.open(filename.append(r.c_str()).c_str());
	while(!fin.eof())
	{
		pos = 0;
		std::getline(fin, str);
		// pos = str.find(s1);
		while ((pos= str.find(s1)) != std::string::npos)
			str = ft_replace(str, s1, s2, pos);
		fout << str;
		if (!fin.eof())
			fout << std::endl;
	}
}
