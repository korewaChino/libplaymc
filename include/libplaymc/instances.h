#pragma once
#include <iostream>
#include <string>

class InstanceConfig{
    public:
        std::string name;
        std::string path;
        std::string version;
};

class Instance{
    // Instance class
    // loads from config
    InstanceConfig config;
    public:
        // Loads the instance configuration
        void loadConfig(InstanceConfig inst){
            config = inst;
        };
        // Gets the instance configuration
        InstanceConfig getConfig(){
            return this->config;
        };
        // Starts the game instance
        void start();
};