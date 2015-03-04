//
//  Canvas5.cpp
//  OF_CONVERSION
//
//  Created by Clelio de Paula on 5/9/14.
//
//

#include "Canvas5.h"

Canvas5::Canvas5(){
    
    
};

void Canvas5::setup() {
    
    fbo.allocate(ofGetWidth(),ofGetHeight());
    
    rectX = *new vector<int>(100);
    rectY = *new vector<int>(100);
    width = ofGetWidth();
    height = ofGetHeight();
    
    int step = rectW;
    int step2 = 30;
    for (int i = 0; i < numRect - 1; i ++) {
        rectX[i] = step -width;
        rectY[i] = step -height;
        
        step = step + rectW * 2;
    }
}


void Canvas5::draw() {
    fbo.begin();
    ofPushStyle();
    ofBackground(255);
    ofFill();
    ofSetColor(0);
    
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofTranslate(width/2, height/2);
    
    
    
    float m = ofGetElapsedTimeMillis()*0.001;
    float deg = sin(m);
    float degree = ofMap(deg, -1, 1, -HALF_PI, HALF_PI);
    float dega = cos(2*m);
    
    
    
    
    
    
    //Rect
    ofPushMatrix();
    
    ofRotate(ofRadToDeg(degree));
    for (int i = 0; i < numRect - 1; i ++) {
        t= int(ofMap(dega, -1, 1, 80, 50));
        for (int j = 0; j < numRect - 1; j ++) {
            
            tra= (int)ofMap(dega, -1, 1, 80, 50);
            ofFill();
            ofSetColor((int)ofMap(ofRadToDeg(degree), 0, 180, 150, 255));
            ofDrawRectangle(rectX[i], rectY[j], t, tra);
            
            
        }
    }
    ofPopMatrix();
    
    
    //Ellipce
    ofPushMatrix();
    ofRotate(ofRadToDeg(-degree*2));
    for (int i = 0; i < numRect - 1; i ++) {
        
        for (int j = 0; j < numRect - 1; j ++) {
            float size = ofMap(t, 80, 50, 20, 0);
            ofFill();
            ofSetColor(0);
            ofDrawCircle(rectX[i], rectY[j], size + 2);
            ofFill();
            ofSetColor(255);
            ofDrawCircle(rectX[i], rectY[j], size);
        }
    }
    ofPopMatrix();
    ofPopStyle();
    fbo.end();
    fbo.draw(0,0);
}

void Canvas5::setCanvasActive(bool cond){
    this->canvasIsActive = cond;
}


void Canvas5::touchDown(ofTouchEventArgs & touch){
    
}
void Canvas5::touchMoved(ofTouchEventArgs & touch){
    
}
void Canvas5::touchUp(ofTouchEventArgs & touch){
    
}
void Canvas5::touchDoubleTap(ofTouchEventArgs & touch){
    
}
void Canvas5::touchCancelled(ofTouchEventArgs & touch){
    
}

//--------------------------------------------------------------
void Canvas5::keyPressed(int key){
    
}

//--------------------------------------------------------------
void Canvas5::keyReleased(int key){
    
}

//--------------------------------------------------------------
void Canvas5::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void Canvas5::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Canvas5::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Canvas5::mouseReleased(int x, int y, int button){
    
}