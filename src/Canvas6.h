//
//  Canvas6.h
//  OF_CONVERSION
//
//  Created by Clelio de Paula on 7/9/14.
//
//

#ifndef __OF_CONVERSION__Canvas6__
#define __OF_CONVERSION__Canvas6__

#include <iostream>
//#include "PoemaOSX.h"
#include "ofMain.h"

#endif /* defined(__OF_CONVERSION__Canvas6__) */


//class Canvas6 : public PoemaOSX {

class Creature {
    public:
    Creature(float pos_x_, float pos_y_, float phaseC_, int rectSize_);
   
    void update();
    void display();
    void circlePhase(float phase);
    
    ofFbo fbo;
    
    float angle = 0.0; // Changing angle
    float speed = 0.1;
    
    int timeTrigger;
    int timeToTrigger;
    
    int timeAnimation;
    int timeDurationAnimation;
    
    float pos_x;
    float pos_y;
    float phaseC;
    int rectSize;
    int colorGray;
    
};


class Canvas6 : public ofBaseApp{
    public:
        

        

        ofImage fundo;
        Canvas6();

        void setup();
        void draw();
        
        ofFbo fbo;
        ofFbo fbo2;
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
    
    private:
    Creature** myCreature;
    int nCreatures;
    };