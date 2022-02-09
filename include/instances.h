#include <string>
#include "auth.h"

class InstanceConfig
{
    std::string javaPath;
    std::string javaArgs;
    std::string version;
};

class Instance
{
    std::string id;
    std::string name;
    std::string path;
    InstanceConfig config;
        
    public:
        Instance newInstance(std::string id, std::string name, std::string path, InstanceConfig config);

};