#include <string>
#include <iostream>
#include "../include/auth.h"

// methods for the authentication class

std::string MojangAuth::authenticate()
{
    std::cout << "Authenticating with Mojang\n";
    return "MojangAuth";
}

std::string MSAuth::authenticate()
{
    std::cout << "Authenticating with Microsoft\n";
    return "MSAuth";
}