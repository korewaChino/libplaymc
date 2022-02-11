/*
Java wrapper class for libPlayMC.
(C) 2022 Cappy Ishihara

This program is under the terms of the MIT license. See the LICENSE file.
*/

#include <libplaymc/instances.h>

class JavaWrapper{
    public:

        // start Minecraft instance
        int start(MinecraftInstance instance);
};