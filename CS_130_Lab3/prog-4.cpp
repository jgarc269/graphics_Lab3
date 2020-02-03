#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

void print_cases(const std::string& name)
{
   // Anything that is passed in that is more than size 10 will throw a memory error because
   // it is going out of bounds
   // also need to change to vector becuase if there is not enough input it will print 
   // out garabe 
   // char up[10];
   // char lo[10];

    std::cout << std::endl;
    std::vector<char> up;
    std::vector<char> lo;

    for(size_t i = 0; i < name.size(); i++)
    {
	up.push_back(std::toupper(name[i]));
	lo.push_back(std::tolower(name[i]));
       // up[i] = std::toupper(name[i]);
       // lo[i] = std::tolower(name[i]);
    }

    for(int i = 0; i < lo.size(); i++)
        std::cout << lo[i];

    std::cout << " ";
	
    for(int i = 0; i < up.size(); i++)
	std::cout << up[i];
}

int main()
{
    print_cases("Elizabeth");
    print_cases("John");
    print_cases("Frank");
    print_cases("Fred");

    std::cout << std::endl;
    return 0;
}

