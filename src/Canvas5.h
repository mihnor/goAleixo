//
//  Canvas5.h
//  OF_CONVERSION
//
//  Created by Clelio de Paula on 5/9/14.
//
//

#ifndef __OF_CONVERSION__Canvas5__
#define __OF_CONVERSION__Canvas5__

#include <iostream>
#include "ofMain.h"

#include "PoemaOSX.h"

#endif /* defined(__OF_CONVERSION__Canvas5__) */


//class Canvas5: public PoemaOSX{
class Canvas5 : public ofBaseApp{

public:
    
    ofFbo fbo;
    
    int width;
    int height;
    int numRect = 100;
    vector<int> rectX ;
    vector<int> rectY ;

//    int[]rectX = new int[numRect];
//    int[]rectY = new int[numRect];
    
    
    int rectW = 80;
    int rectH = 80;
    float t;
    float tra;
    float trb;
    float easing =0.5;
    Canvas5();
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