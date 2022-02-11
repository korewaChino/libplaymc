#include <string>
#include <iostream>
#include <libplaymc/instances.h>

int main(){
    InstanceConfig inst;
    inst.name = "among us";
    inst.path = "test";
    inst.version = "test";
    Instance instance;
    instance.loadConfig(inst);
    instance.start();
    return 0;

}