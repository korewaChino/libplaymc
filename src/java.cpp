/*
System calls wrapper for java (for Minecraft)
*/

#include <string>
#include <iostream>
#include <libplaymc/instances.h>
#include <libplaymc/java.h>
#include <vector>


int JavaWrapper::start(MinecraftInstance instance){
    // array of args
    // for fuck's sake copilot i want a minecraft client not a server
    // format string
    std::vector<std::string> args = {
        "java",
        "-Xms" + instance.minMem,
        "-Xmx" + instance.maxMem,
        "-Djava.library.path=" + instance.libPath,
        "-Dminecraft.launcher.brand=libplaymc",
        "-Dminecraft.launcher.version=1.0",
        "-XX:+UnlockExperimentalVMOptions",
        "-XX:+UseG1GC",
        "-XX:G1NewSizePercent=20",
        "-XX:G1ReservePercent=20",
        "-XX:MaxGCPauseMillis=50",
        "-XX:G1HeapRegionSize=32M",
        "--username", instance.auth.username,
        "--version", instance.version,
        "--gameDir", instance.MCPath,
        "--assetsDir", instance.assetsPath,
        "--accessToken", instance.auth.token,
        "--assetIndex", instance.version,
        "--width", std::to_string(instance.windowWidth),
        "--height", std::to_string(instance.windowHeight),
        "-cp", "net.minecraft.client.main.Main",
    };

    // then join the args with spaces
    std::string argsString = "";
    for(int i = 0; i < args.size(); i++){
        argsString += args[i] + " ";
    }

    // print the args
    std::cout << argsString << std::endl;
    //system(argsString.c_str());

    // if all goes well, return 0
    return 0;
};