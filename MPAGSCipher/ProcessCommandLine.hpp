#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <string>
#include <vector>

struct ProgramSettings 
{
    bool helpRequested;
    bool versionRequested;
    std::string inputFile;
    std::string outputFile;
    std::string cipher_key;
    bool encrypt;
};

bool processCommandLine(const std::vector<std::string>& args,
                        ProgramSettings& CLArgs);

#endif // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP 
