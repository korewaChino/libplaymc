#pragma once
#include <iostream>
#include <string>
#include <libplaymc/auth.h>
#include <json/json.h>
// The actual Minecraft instance that will be called to start the instance
class MinecraftInstance
{
    public:
        // the version string of the instance
        std::string version;

        // path to minecraft.jar
        std::string path;

        // java options
        std::string options;

        // path to java executable
        std::string javaPath;

        // The Authentication data itself
        Authentication auth;

        // Path to the .minecraft folder
        std::string MCPath = "~/.minecraft";
        
        // Minecraft assets
        // defaults to MCPath + "/assets"
        std::string assetsPath = MCPath + "/assets";

        // Minecraft Libraries location
        // defaults to MCPath + "/bin/" + version
        std::string libPath = MCPath + "/bin/" + version;

        // Memory allocated to the instance
        
        // Minimum memory allocated to the instance
        // defaults to 512M
        std::string minMem = "512M";

        // Maximum memory allocated to the instance
        // defaults to 1024M
        std::string maxMem = "1024M";

        // Resolution

        int windowWidth = 800;
        int windowHeight = 640;

};

class InstanceConfig{
    public:
        std::string name;
        std::string path;
        MinecraftInstance game;
        
};

class Instance{
    // Instance class
    // loads from config
    public:
        InstanceConfig config;
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

        // Initializes an instance from an empty folder
        void init();
};