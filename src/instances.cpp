#include <iostream>
#include <string>
#include <libplaymc/instances.h>
#include <libplaymc/java.h>
#include <json/json.h>

void Instance::start(){
    std::cout << "Starting instance: " << this->config.name << std::endl;
    // then some java wrapper code here idk lol
};

void Instance::init(){
    
}