//
//  Canvas2.cpp
//  OF_CONVERSION
//
//  Created by Clelio de Paula on 1/9/14.
//
//

#include "Canvas2.h"


Canvas2::Canvas2(){

}


void Canvas2::setup(){
//    ofEnableSmoothing();
    fbo.allocate(ofGetWidth(),ofGetHeight());
    ofBackground(0);
}

void Canvas2::draw() {
    fbo.begin();
    ofSetCircleResolution(1000);
    ofBackground(0);
    
    this->circlePhase(0.0);
    this->circlePhase(HALF_PI/2);
    this->circlePhase(HALF_PI);
    
    angle += speed;
    fbo.end();
    fbo.draw(0,0);
}

void Canvas2::circlePhase(float phase) {
    float diameter = 400 + (sin(angle + phase) * 45);
    ofFill();
    ofSetColor(250,92,79);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, diameter/2);

    ofNoFill();
    ofSetColor(255);
    ofSetLineWidth(0.5);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, diameter/2);

}

void Canvas2::setCanvasActive(bool cond){
    this->canvasIsActive = cond;
}


void Canvas2::touchDown(ofTouchEventArgs & touch){
    
}
void Canvas2::touchMoved(ofTouchEventArgs & touch){
    
}
void Canvas2::touchUp(ofTouchEventArgs & touch){
    
}
void Canvas2::touchDoubleTap(ofTouchEventArgs & touch){
    
}
void Canvas2::touchCancelled(ofTouchEventArgs & touch){
    
}

//--------------------------------------------------------------
void Canvas2::keyPressed(int key){
    
}

//--------------------------------------------------------------
void Canvas2::keyReleased(int key){
    
}

//--------------------------------------------------------------
void Canvas2::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void Canvas2::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Canvas2::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Canvas2::mouseReleased(int x, int y, int button){
    
}