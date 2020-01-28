#ifndef SH_LOGGER_HPP
#define SH_LOGGER_HPP

#define SH_LOGGER

#define SH_LOG_LEVEL 1

#include <iostream>

namespace SH{
namespace LOG{

// Regular logging -------------------------------------------------------------
template <typename T>
void Log(const T& entry){
    std::cout << entry;
}
template <typename T>
void LogLn(const T& entry){
    std::cout << entry << std::endl;
}
// -----------------------------------------------------------------------------

// Error logging ---------------------------------------------------------------
template <typename T>
void LogErr(const T& entry){
    std::cerr << entry;
}
template <typename T>
void LogErrLn(const T& entry){
    std::cerr << entry << std::endl;
}
// -----------------------------------------------------------------------------

// Level based logging ---------------------------------------------------------
// ---
// Will log only if log level matches or is greater than one defined in the top
// of this file
// ---
template <int LOG_LEVEL, typename T>
void LogLvl(const T& entry){
    if(LOG_LEVEL <= SH_LOG_LEVEL){
        std::cout << entry;
    }
}
template <int LOG_LEVEL, typename T>
void LogLvlLn(const T& entry){
    if(LOG_LEVEL <= SH_LOG_LEVEL){
        std::cout << entry << std::endl;
    }
}
// -----------------------------------------------------------------------------

}   // LOG
}   // SH

#endif  // SH_LOGGER_HPP
