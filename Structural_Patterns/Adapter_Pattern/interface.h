#ifndef INTERFACE_H
#define INTERFACE_H
#include <memory>
#include <string>


// Something that the client wants
class MediaPlayer
{
public:
    virtual void play() = 0;
};


class AdvancedMediaPlayer
{
public:
    virtual void getSong(std::string song) = 0;
    virtual void play() = 0;
};



class MediaPlayerAdapter : public MediaPlayer
{
public:
    MediaPlayerAdapter(std::string song, std::string type);
    void play();

private:
   std::unique_ptr<AdvancedMediaPlayer> player;

};

#endif // INTERFACE_H

