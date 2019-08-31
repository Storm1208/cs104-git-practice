#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

int main()
{
	std::string yosh = "AM BEEG YOSHI";
	std::string define = "ME BEEG";

	stringstream ss;
	std::string final_word = "";

	ss << define;
	ss >> final_word;

	cout << final_word << endl;

}