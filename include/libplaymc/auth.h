#pragma once
#include "export.h"

class Authentication {
    // auth type can be msft or mojang
    public:
        std::string authType;
        std::string token;
        void printToken(){
            std::cout << token << std::endl;
        }
};

//functions that return instances of the Authentication class with the token



//Mojang Authentication
//Logs in to the Mojang authentication server, then creates an instance of the Authentication class with the returned token.
Authentication MojangAuth(std::string username, std::string password) {
    // logs in to mojang servers here
    // we will return a test token for now
    std::string token = "mojang_token";
    Authentication auth;
    auth.token = token;
    return auth;
};

//Microsoft Authentication
//Logs in to the Microsoft authentication server, then creates an instance of the Authentication class with the returned token.