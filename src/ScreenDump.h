#ifndef _SCREENDUMP_H
#define _SCREENDUMP_H

#include <Cariad.h>
#include <SD.h>

class ScreenDump {
    public:
        static void dump565(Cariad &dev, SDClass &sd, const char *filename);
        static void dumpBMP(Cariad &dev, SDClass &sd, const char *filename);
};

#endif
