//
//  Canvas1.h
//  OF_CONVERSION
//
//  Created by Clelio de Paula on 1/9/14.
//
//

#ifndef __OF_CONVERSION__Canvas1__
#define __OF_CONVERSION__Canvas1__

#include <iostream>
#include "ofMain.h"
#include "PoemaOSX.h"
#endif /* defined(__OF_CONVERSION__Canvas1__) */


//class Canvas1: public PoemaOSX{
class Canvas1{    
public:
    
    float inc = 0.06;
    int density = 50;
    float znoise = 0.0;
    
    ofFbo fbo;
    Canvas1();
    void setup();
    void draw();
    
    bool canvasIsActive = false;
    void setCanvasActive(bool cond);
    
    void touchDown(ofTouchEventArgs & touch);
    void touchMoved(ofTouchEventArgs & touch);
    void touchUp(ofTouchEventArgs & touch);
    void touchDoubleTap(ofTouchEventArgs & touch);
    void touchCancelled(ofTouchEventArgs & touch);
    
    //OSX
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
};