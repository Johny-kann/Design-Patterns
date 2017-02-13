#ifndef HEADER_H
#define HEADER_H

#include "interface.h"

class VLCPlayer : public AdvancedMediaPlayer
{
public:
    void getSong(std::string name);
    void play();
};


class MP4Player : public AdvancedMediaPlayer
{
public:
    void getSong(std::string name);
    void play();
};

#endif // HEADER_H

