#include <iostream>
#include <string>
#include <vector>

std::string transliterate(std::string input)
{
    std::string strOut = "";
    //loop over each character
    for (char iChar : input)
    {
        switch (iChar)
        {
            case '0': strOut += "ZERO"; break; 
            case '1': strOut += "ONE"; break; 
            case '2': strOut += "TWO"; break; 
            case '3': strOut += "THREE"; break; 
            case '4': strOut += "FOUR"; break; 
            case '5': strOut += "FIVE"; break; 
            case '6': strOut += "SIX"; break; 
            case '7': strOut += "SEVEN"; break; 
            case '8': strOut += "EIGHT"; break; 
            case '9': strOut += "NINE"; break; 
            default:
                if ( std::isalpha(iChar) ) strOut += toupper(iChar);
        } 
    }
    return strOut;
}

int main(int argc, char* argv[])
{
    //store arguments in a vector
    std::vector<std::string> args{argv, argv+argc}; 

    //iterate over args and print each out:
    for (std::string iArg : args) printf("%s\n", iArg.c_str());

    //printf("%s\n",transliterate("hello12z*'.3j").c_str());
}
