//
//  Canvas4.cpp
//  OF_CONVERSION
//
//  Created by Clelio de Paula on 1/9/14.
//
//

#include "Canvas4.h"




Canvas4::Canvas4(){

}

void Canvas4::setup() {
    
    fbo.allocate(ofGetWidth(),ofGetHeight());
    
    ofBackground(0);
    
    
    
//    ballCollection = new ArrayList();
    this->createStuff();
}

void Canvas4::draw() {
    fbo.begin();
    ofBackground(0);
    ofFill();
    ofSetColor(0,20);
    ofSetLineWidth(0);
    //        pg.noStroke();
    ofDrawRectangle(0,0,ofGetWidth(),ofGetHeight());
    
    
    for (int i=0; i<ballCollection.size(); i++) {
//        Ball mb = (Ball) ballCollection.get(i);
        ballCollection[i].run();
//        mb.run();
    }
    
    if (save) {
        //    if (frameCount%1==0 && frameCount < fc + (240*3)) saveFrame("image-####.tif");
    }
    fbo.end();
    fbo.draw(0,0);
}

void Canvas4::keyPressed() {
    fc = ofGetFrameNum();
}

void Canvas4::mouseReleased() {
    ofBackground(0);
    this->createStuff();
}

void Canvas4::createStuff() {
    ballCollection.clear();
    for (int i=0; i<num; i++) {
        ofVec2f org;
        org.set(ofRandom(edge, ofGetWidth()-edge), ofRandom(edge, ofGetHeight()-edge));
        float radius = ofRandom(50, 150);
        ofVec2f loc;
        loc.set(org.x+radius, org.y);
        float offSet = ofRandom(TWO_PI);
        int dir = 1;
        float r = ofRandom(1);
        if (r>.5) dir =-1;
//        myBall = new Ball(radius, dir, offSet, org,loc);
//        Ball myBall = Ball(&org, &loc, radius, dir, offSet);
        ballCollection.push_back(Ball(org, loc, radius, dir, offSet, *this));
    }
}

Ball Canvas4::getBallById(int id){
    
    return ballCollection.at(id);
}



    Ball::Ball(ofVec2f &_org, ofVec2f &_loc, float _radius, int _dir, float _offSet, Canvas4 &_cv) {
    
        
        this->org = _org;
        this->loc = _loc;
        this->radius = _radius;
        this->dir = _dir;
        this->offSet = _offSet;
        this->cv = &_cv;
    }

    
    void Ball::run() {
        this->move();
        this->display();
        this->lineBetween();
    }
    
    void Ball::move() {
        loc.x = org.x + sin(theta+offSet)*radius;
        loc.y = org.y + cos(theta+offSet)*radius;
        theta += (0.0523/2*dir);
    }
    
    void Ball::lineBetween() {
        for (int i=0; i<Canvas4::num; i++) {
            Ball other = cv->getBallById(i);
            float distance = loc.distance(other.loc);
            if (distance >0 && distance < d) {
                ofDrawLine(loc.x, loc.y, other.loc.x, other.loc.y);
            }
        }
    }
    
    void Ball::display() {
//        pg.noStroke();
        for (int i=0; i<10; i++) {
            //ofFill();
            //ofSetColor(255, i*50);

            ofNoFill();
            ofSetColor(255);
            ofSetLineWidth(0.5);
            
            ofDrawCircle(loc.x, loc.y, sz-2*i, sz-2*i);
        }
    }

void Canvas4::setCanvasActive(bool cond){
    this->canvasIsActive = cond;
}


void Canvas4::touchDown(ofTouchEventArgs & touch){
    
}
void Canvas4::touchMoved(ofTouchEventArgs & touch){
    
}
void Canvas4::touchUp(ofTouchEventArgs & touch){
    
}
void Canvas4::touchDoubleTap(ofTouchEventArgs & touch){
    
}
void Canvas4::touchCancelled(ofTouchEventArgs & touch){
    
}

//--------------------------------------------------------------
void Canvas4::keyPressed(int key){
    
}

//--------------------------------------------------------------
void Canvas4::keyReleased(int key){
    
}

//--------------------------------------------------------------
void Canvas4::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void Canvas4::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Canvas4::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Canvas4::mouseReleased(int x, int y, int button){
    
}