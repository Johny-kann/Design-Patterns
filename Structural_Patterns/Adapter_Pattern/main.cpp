#include <iostream>
#include "interface.h"

using namespace std;

int main(int argc, char *argv[])
{

    MediaPlayer &&player(MediaPlayerAdapter("Padayappa","mp4"));

    player.play();


    return 0;
}
