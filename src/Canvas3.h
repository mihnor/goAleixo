//
//  Canvas3.h
//  OF_CONVERSION
//
//  Created by Clelio de Paula on 1/9/14.
//
//

#ifndef __OF_CONVERSION__Canvas3__
#define __OF_CONVERSION__Canvas3__
#include "ofMain.h"
#include <iostream>

#include "PoemaOSX.h"

#endif /* defined(__OF_CONVERSION__Canvas3__) */



//class Canvas3 : public PoemaOSX{
class Canvas3{

public:
    ofFbo fbo;
    
    float number = 1;
    float last,last2;
    
    vector<float> fibs;
    vector<float> xpos;
    vector<float> ypos;
//    float[] fibs= new float [1];
    
    float px,py,r,degree;
//    float[] xpos = new float[0];
//    float[] ypos = new float[0];
    
    float spacing = 6;
    int startWeight = 2;
    int maxWeight = 5;
    float weight = startWeight;
    float guldenSnede = ((sqrt(5) - 1 ) / 2);
    
    float lastX, lastY;

    Canvas3();
    void setup();
    void draw();
    void calculatePoint(float x, float y, float r, float graden);
    
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