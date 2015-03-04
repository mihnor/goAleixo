//
//  Audio.h
//  OF_CONVERSION
//
//  Created by Clelio de Paula on 6/9/14.
//
//

#ifndef __OF_CONVERSION__Audio__
#define __OF_CONVERSION__Audio__

#include <iostream>
#include "ofMain.h"

#endif /* defined(__OF_CONVERSION__Audio__) */


class Audio{
    
public:
    
    ofSoundPlayer mySound;
    ofFbo fbo;
    int width;
    int height;
    Audio();
    ~Audio();
    void setup();
    void drawOn();
    void draw();
    
    
    bool canvasIsActive = false;
    void setCanvasActive(bool cond);
    
};