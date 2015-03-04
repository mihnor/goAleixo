//
//  Textos.h
//  POESIA
//
//  Created by Clelio de Paula on 25/9/14.
//
//

#ifndef __POESIA__Textos__
#define __POESIA__Textos__

#include <iostream>
#include "ofMain.h"

#endif /* defined(__POESIA__Textos__) */


class Textos {
    
public:
    Textos();
    ofFbo fbo;
    void setup();
    void draw(int screen_);
    
    float           nextLetterTime;
    int             lineCount;
    int             letterCount;
    int             nunberOfLines = 8;
    vector <string> seussLines;
    
    ofTrueTypeFont myfont;
    
};