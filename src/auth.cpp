#include <string>
#include <iostream>
#include "libplaymc/auth.h"




// functions that will create instances of the Authentication class



// Mojang Authentication
// Logs in to the Mojang authentication server, then creates an instance of the Authentication class with the returned token.
Authentication* authenticate(std::string username, std::string password) {
    // logs in to mojang servers here
    // we will return a test token for now
    std::string token = "testtoken";
    Authentication* auth = new Authentication;
    return auth;
};