#pragma once
//ofAleixo.h

//#include "ofxiOS.h"
//#include "ofxiOSExtras.h"

//#include "PoemaOSX.h"

#include "ofMain.h"



#include "Canvas1.h"
#include "Canvas2.h"
#include "Canvas3.h"
#include "Canvas4.h"
#include "Canvas5.h"
#include "Canvas6.h"
#include "Audio.h"
#include "Textos.h"

#ifndef OFALEIXO_H
#define OFALEIXO_H





class OFAleixo : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();
    
    //time
    int time = 0;
    int trigerTime;
    
    
    void touchDown(ofTouchEventArgs & touch);
    void touchMoved(ofTouchEventArgs & touch);
    void touchUp(ofTouchEventArgs & touch);
    void touchDoubleTap(ofTouchEventArgs & touch);
    void touchCancelled(ofTouchEventArgs & touch);
    
    
    OFAleixo();
    ~OFAleixo();
    
//    ofImage fundo;
    
//    Canvas3 canvas1;
//    Canvas3 canvas2;
//    Canvas3 canvas3;
//    Canvas3 canvas4;
//    Canvas3 canvas5;

    
//    Canvas1 canvas1;
//    Canvas2 canvas2;
//    Canvas3 canvas3;
//    Canvas4 canvas4;
//    Canvas5 canvas5;
//    Canvas6 canvas6;

    Canvas1 canvas1;
    Canvas3 canvas2;
    Canvas4 canvas3;
    Canvas5 canvas4;
    Canvas6 canvas5;

    
    Audio audio;
    Textos textos;
    
    
    bool canvasIsActive = false;
    virtual void setCanvasActive(bool cond);
    
    
    //OSX
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    
};

#endif // OFALEIXO_H

