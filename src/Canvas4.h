//
//  Canvas4.h
//  OF_CONVERSION
//
//  Created by Clelio de Paula on 1/9/14.
//
//

#ifndef __OF_CONVERSION__Canvas4__
#define __OF_CONVERSION__Canvas4__

#include "ofMain.h"
#include "PoemaOSX.h"
#include <iostream>

#endif /* defined(__OF_CONVERSION__Canvas4__) */
class Ball;
//class Canvas4 : public PoemaOSX{

class Canvas4{
    public:
        

        int fc = 100;
        static const int num = 100;
        int edge = 200;
        vector<Ball> ballCollection;
        bool save = false;
        ofFbo fbo;
        Ball *myBall;
        
        Canvas4();
        void setup();
        void draw();
        void createStuff();
        void keyPressed();
        void mouseReleased();
        Ball getBallById(int id);
      
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




    class Ball {
    public:

        ofVec2f org;
        ofVec2f loc;
        float sz = 10;
        float theta;
        float radius;
        float offSet;
        int s;
        int dir = 60;
        int d = 60;
        Canvas4 *cv;
        Ball(ofVec2f &_org, ofVec2f &_loc, float _radius, int _dir, float _offSet, Canvas4 &_cv);
        void run();
        void move();
        void lineBetween();
        void display();
        
        
    };




