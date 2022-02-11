#include <string>
#include <iostream>
#include <libplaymc/instances.h>
#include <libplaymc/java.h>
#include <json/json.h>
int main(){
    // calls the MojangAuth function
    Authentication auth = OfflineAuth("korewaChino");

    // creates an instance of the MinecraftInstance class

    // This is a test function. This will not be used in the final program.
    MinecraftInstance gameInstance;
    gameInstance.version = "1.18.1";
    gameInstance.path = "~/.minecraft/bin/1.18.1/minecraft.jar";
    gameInstance.options = "";
    gameInstance.javaPath = "~/.minecraft/bin/1.18.1/jre/bin/java";
    gameInstance.auth = auth;
    gameInstance.MCPath = "~/.minecraft";
    gameInstance.assetsPath = "~/.minecraft/assets";
    gameInstance.libPath = "~/.minecraft/bin/1.18.1";
    gameInstance.minMem = "512M";
    gameInstance.windowWidth = 800;
    gameInstance.windowHeight = 640;

    JavaWrapper java;
    java.start(gameInstance);
    return 0;
};