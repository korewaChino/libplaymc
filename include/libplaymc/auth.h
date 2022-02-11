#pragma once
#include "export.h"

class Authentication {
    // auth type can be msft or mojang
    public:
        std::string authType;
        std::string token;
        std::string refreshToken;
        std::string username;
        void printToken(){
            std::cout << token << std::endl;
        }
};

//functions that return instances of the Authentication class with the token



// Mojang Authentication
// Logs in to the Mojang authentication server, then creates an instance of the Authentication class with the returned token.
Authentication MojangAuth(std::string username, std::string password);

// Microsoft Authentication
// Logs in to the Microsoft authentication server, then creates an instance of the Authentication class with the returned token.
Authentication MSAuth(std::string username, std::string password);


// Offline Authentication
// Creates an offline (cracked) session, yarr!
Authentication OfflineAuth(std::string username);

