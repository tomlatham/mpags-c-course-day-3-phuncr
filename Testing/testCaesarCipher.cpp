//! Unit Tests for MPAGSCipher CaesarCipher interface
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "CaesarCipher.hpp"
#include "CipherMode.hpp"

TEST_CASE("encrypt", "[cipher]")
{
    size_t cipher_key{5};
    CaesarCipher caesarCipher {cipher_key};
    CipherMode mode {CipherMode::Encrypt};
    std::string inputText {"HELLOWORLD"}; 
    std::string outputText { caesarCipher.applyCipher( inputText, mode) };
    REQUIRE( outputText == "MJQQTBTWQI"); 
}

TEST_CASE("decrypt", "[cipher]")
{
    size_t cipher_key{5};
    CaesarCipher caesarCipher {cipher_key};
    CipherMode mode {CipherMode::Decrypt};
    std::string inputText {"MJQQTBTWQI"}; 
    std::string outputText { caesarCipher.applyCipher( inputText, mode) };
    REQUIRE( outputText == "HELLOWORLD"); 
}

