#include <iostream>

#include "logger.hpp"

using namespace SH;

int main(){

    LOG::Log("Test ");
    LOG::LogLn(1);

    LOG::LogLvlLn<0>("Test log level 0.");
    LOG::LogLvlLn<1>("Test log level 1.");
    LOG::LogLvlLn<2>("Test log level 2.");

    return 0;
}
