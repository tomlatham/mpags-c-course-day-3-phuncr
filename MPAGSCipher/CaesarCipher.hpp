#ifndef MPAGSCIPHER_CAESARCIPHER_HPP
#define MPAGSCIPHER_CAESARCIPHER_HPP

#include <string>
#include <vector>
#include "CipherMode.hpp"

class CaesarCipher
{
  public:
    explicit CaesarCipher(size_t& key);
    explicit CaesarCipher(std::string& key);

    std::string applyCipher( const std::string& inputText, CipherMode Mode ) ;

  private:
    size_t key_; // The cipher key
    const std::vector<char> alphabet_ = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                                        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
};  

#endif
