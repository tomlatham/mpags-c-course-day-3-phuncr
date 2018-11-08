//! Unit Tests for MPAGSCipher CaesarCipher interface
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "CaesarCipher.hpp"
#include "CipherMode.hpp"

TEST_CASE("encrypt", "[cipher]")
{
    size_t cipher_key{5};
    CaesarCipher CaesarClass {cipher_key};
    CipherMode Mode {CipherMode::encrypt};
    std::string inputText {"HELLOWORLD"}; 
    std::string outputText { CaesarClass.applyCipher( inputText, Mode) };
    REQUIRE( outputText == "MJQQTBTWQI"); 
}

TEST_CASE("decrypt", "[cipher]")
{
    size_t cipher_key{5};
    CaesarCipher CaesarClass {cipher_key};
    CipherMode Mode {CipherMode::decrypt};
    std::string inputText {"MJQQTBTWQI"}; 
    std::string outputText { CaesarClass.applyCipher( inputText, Mode) };
    REQUIRE( outputText == "HELLOWORLD"); 
}

