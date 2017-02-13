#include "header.h"
#include <iostream>


MediaPlayerAdapter::MediaPlayerAdapter(std::__cxx11::string song, std::__cxx11::string type)
{


    if(type.compare("mp4")==0)
    {
       player = std::make_unique<MP4Player>();

    }else
    {

        player = std::make_unique<VLCPlayer>();
    }

    player->getSong(song);
}

void MediaPlayerAdapter::play()
{
    player->play();
}


void VLCPlayer::getSong(std::__cxx11::string name)
{
    //
}

void VLCPlayer::play()
{
    std::cout<<"VLC Playing";
}

void MP4Player::getSong(std::__cxx11::string name)
{
    //
}

void MP4Player::play()
{
    std::cout<<"MP4 Playing";
}
