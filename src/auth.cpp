#include <string>
#include <iostream>
#include <libplaymc/auth.h>

std::string authServer = "https://authserver.mojang.com";


// functions that will create instances of the Authentication class

Authentication MojangAuth(std::string username, std::string password){
    Authentication auth;
    auth.authType = "mojang";
    auth.token = "mojang token";
    auth.username = username;
    return auth;
};

Authentication MSAuth(){
    Authentication auth;
    //TODO: implement this
    return auth;
};


Authentication OfflineAuth(std::string username){
    Authentication auth;
    auth.authType = "offline";
    auth.username = username;
    auth.token = "0";
    return auth;
};