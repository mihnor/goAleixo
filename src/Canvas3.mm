//
//  Canvas3.cpp
//  OF_CONVERSION
//
//  Created by Clelio de Paula on 1/9/14.
//
//

#include "Canvas3.h"



Canvas3::Canvas3(){
    
}


void Canvas3::setup()
{
    
    fbo.allocate(ofGetWidth(),ofGetHeight());
    
}

void Canvas3::draw()
{
    //    ofBackground(255);
    fbo.begin();
    ofClear(255,255,255);
    
    ofBackground(0);
    
    //um dia possui 86.400 segundos
    
//    int timeNow = (ofGetSystemTime()/1000 + 3*60*60)*2;
    
    int timeNow = 86400  - ofGetHours()*3600 - ofGetMinutes()*60 - ofGetSeconds();

    
    ofLog() << ofToString(timeNow) << endl;
    
    //ofDrawBitmapString(timeNow, 10, 10);
    
    
    ofFill();
    
    
    int bordaX = 85;
    int bordaY = 170;
    
    int afastamentoX = 1;
    int afastamentoY = 1;
    
    int nX = 254;
    
    int nY = 340;
    
    int rectSize = 1;
    
    
    int conta = 0;

            for (int j = 0; j < nY; j++){
                for (int i = 0; i < nX; i++){

            
            conta++;
            
            if(conta>timeNow){
                //ofSetColor(255);
                 ofSetColor((int)ofMap(conta, 0, 86400, 0, 255),0,0);
            }else if(conta == timeNow){
            ofSetColor(255,0,0);
            }else if(conta<timeNow){
                ofSetColor(100);
            }
            ofDrawRectangle(((rectSize + afastamentoX)*i)+bordaX, ((rectSize + afastamentoY)*j)+bordaY,rectSize, rectSize);  // create each object from the array
        }
    }
    
    
    //ofBackground(int(ofMap(ofGetHours(), 0, 23, 255, 0)));
    
    fbo.end();
    fbo.draw(0,0);
}

void Canvas3::setCanvasActive(bool cond){
    this->canvasIsActive = cond;
}


void Canvas3::touchDown(ofTouchEventArgs & touch){
    
}
void Canvas3::touchMoved(ofTouchEventArgs & touch){
    
}
void Canvas3::touchUp(ofTouchEventArgs & touch){
    
}
void Canvas3::touchDoubleTap(ofTouchEventArgs & touch){
    
}
void Canvas3::touchCancelled(ofTouchEventArgs & touch){
    
}

//--------------------------------------------------------------
void Canvas3::keyPressed(int key){
    
}

//--------------------------------------------------------------
void Canvas3::keyReleased(int key){
    
}

//--------------------------------------------------------------
void Canvas3::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void Canvas3::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Canvas3::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Canvas3::mouseReleased(int x, int y, int button){
    
}