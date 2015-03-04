//
//  Canvas1.cpp
//  OF_CONVERSION
//
//  Created by Clelio de Paula on 1/9/14.
//
//

#include "Canvas1.h"

//--------------------------------------------------------------
Canvas1::Canvas1(){

}
//--------------------------------------------------------------
void Canvas1::setup(){
    fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA);
    
}
//--------------------------------------------------------------
void Canvas1::draw(){
    fbo.begin();
    {
    float xnoise = 0.0;
    float ynoise = 0.0;
    
    for (int y=0; y < ofGetHeight(); y = y+density) {
        for (int x=0; x < ofGetWidth(); x = x + density) {
            float n = ofNoise(xnoise, ynoise,znoise )*256;
            ofFill();
            ofSetColor(n);
            ofDrawRectangle(x,y, density,density);
            xnoise += inc;
        }
        xnoise = 0;
        ynoise += inc;
    }
    znoise += inc;
    fbo.end();
        }
    
    fbo.draw(0,0);
    
}

void Canvas1::setCanvasActive(bool cond){
    this->canvasIsActive = cond;
}


void Canvas1::touchDown(ofTouchEventArgs & touch){
    
}
void Canvas1::touchMoved(ofTouchEventArgs & touch){
    
}
void Canvas1::touchUp(ofTouchEventArgs & touch){
    
}
void Canvas1::touchDoubleTap(ofTouchEventArgs & touch){
    
}
void Canvas1::touchCancelled(ofTouchEventArgs & touch){
    
}

//--------------------------------------------------------------
void Canvas1::keyPressed(int key){
    
}

//--------------------------------------------------------------
void Canvas1::keyReleased(int key){
    
}

//--------------------------------------------------------------
void Canvas1::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void Canvas1::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Canvas1::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Canvas1::mouseReleased(int x, int y, int button){
    
}

