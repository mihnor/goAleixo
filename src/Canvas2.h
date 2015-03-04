//
//  Canvas2.h
//  OF_CONVERSION
//
//  Created by Clelio de Paula on 1/9/14.
//
//

#ifndef __OF_CONVERSION__Canvas2__
#define __OF_CONVERSION__Canvas2__
#include "ofMain.h"
#include <iostream>
#include "PoemaOSX.h"

#endif /* defined(__OF_CONVERSION__Canvas2__) */


//class Canvas2 : public PoemaOSX{

class Canvas2{
    public:
    Canvas2();
    ofFbo fbo;
    float angle = 0.0; // Changing angle
    float speed = 0.1; // Speed of growth
    void setup();
    void draw();
    void circlePhase(float phase);
    
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