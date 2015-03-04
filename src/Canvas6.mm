//
//  Canvas6.cpp
//  OF_CONVERSION
//
//  Created by Clelio de Paula on 7/9/14.
//
//

#include "Canvas6.h"
//--------------------------------------------------------------
Canvas6::Canvas6(){
    
}
//--------------------------------------------------------------
void Canvas6::setup(){
        
fbo.allocate(ofGetWidth(),ofGetHeight());
    
    int nX = 40;
    
    int nY = 40;
    
    int rectSize = 50;
    
    nCreatures = nX * nY;
    
    myCreature = new Creature*[nCreatures];
    
    for (int i = 0; i < nX; i++){
        for (int j = 0; j < nY; j++){
            myCreature[((i*nY)+j)] = new Creature(rectSize*i, rectSize*j,((i*nY)+j), rectSize);  // create each object from the array
        }
    }
    

    fbo.begin();
    ofClear(255,255,255,0);
    
    fbo.end();
    
    
    
}
//--------------------------------------------------------------
void Canvas6::draw(){
    fbo.begin();
    
    
    ofBackground(0);
    for (int i = 0; i < nCreatures; i++){
        myCreature[i]->display();
    }
     fbo.end();
    fbo.draw(0,0);
}

void Canvas6::setCanvasActive(bool cond){
    this->canvasIsActive = cond;
    
}


void Canvas6::touchDown(ofTouchEventArgs & touch){
    
}
void Canvas6::touchMoved(ofTouchEventArgs & touch){
    
}
void Canvas6::touchUp(ofTouchEventArgs & touch){
    
}
void Canvas6::touchDoubleTap(ofTouchEventArgs & touch){
    
}
void Canvas6::touchCancelled(ofTouchEventArgs & touch){
    
}


//--------------------------------------------------------------
void Canvas6::keyPressed(int key){
    
}

//--------------------------------------------------------------
void Canvas6::keyReleased(int key){
    
}

//--------------------------------------------------------------
void Canvas6::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void Canvas6::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Canvas6::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Canvas6::mouseReleased(int x, int y, int button){
    
}

///////////////////////////////////////////////////////////////


Creature::Creature(float pos_x_, float pos_y_, float phaseC_, int rectSize_) {

    pos_x = pos_x_;
    pos_y = pos_y_;
    phaseC = phaseC_;
    rectSize = rectSize_;
    colorGray = int(ofRandom(0, 155));
    
}

void Creature::update() {
    
}

void Creature::display() {
    
    angle += speed;
    
    this->circlePhase(phaseC);
}

void Creature::circlePhase(float phase) {
    
    float diameter = sin(angle + phase) * rectSize;
    ofPushStyle();
    ofFill();
    ofSetColor(this->colorGray,0,0);
    ofSetLineWidth(0.5);    //ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, diameter/2);
    ofDrawRectangle(pos_x, pos_y, diameter, diameter);
//    ofNoFill();
//    ofSetColor(255);
//    ofSetLineWidth(0.5);
    
    ofPopStyle();
    
}
