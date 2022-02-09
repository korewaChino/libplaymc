#include <string>
#include <iostream>

// main authentication class with will have multiple types of authentication
// one can be the plain ol' Mojang auth, the other uses Xbox Live

class Authentication
{
    std::string token;
    std::string username;

public:
    void authenticate();
};
// MojangAuth is a type of Authentication class

class MojangAuth : public Authentication
{
    std::string username;
    std::string password;
    // returns a token
public:
    std::string authenticate();
};

class MSAuth : public Authentication
{
    std::string username;
    std::string password;
    // returns a token
public:
    std::string authenticate();
};

//methods for authentication
