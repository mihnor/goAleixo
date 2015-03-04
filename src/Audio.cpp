//
//  Audio.cpp
//  OF_CONVERSION
//
//  Created by Clelio de Paula on 6/9/14.
//
//

#include "Audio.h"


Audio::Audio(){

    

};

Audio::~Audio(){
    
    
    
}

void Audio::setup(){
    
    
    width = ofGetWidth();
    height = ofGetHeight();
    fbo.allocate(width,200);
    
    //mySound.loadSound("of_data/aleixo/tempo.mp3");
    //mySound.setLoop(true); //Sound will loop
    //mySound.play();
}

void Audio::drawOn(){
//    stroke(255);
    // strokeWeight(1);
    for(int i = 0; i < 1; i= i +0.005)
    {
        float x1 = ofMap( i, 0, mySound.getPosition(), 0, width );
        float x2 = ofMap( i+1, 0, mySound.getPosition(), 0, width );
//        float &foo  =ofSoundGetSpectrum(i);
//        ofLine( x1, width/2+ 50 + mySound.left.get(i)*50, x2, width/2+50 + mySound.left.get(i+1)*50 );
//        ofLine( x1, width/2+ 50 + foo * 50.0, x2, width/2+50 + (ofSoundGetSpectrum(i+1)) * 50.0 );
//        line( x1, width/2+150 + mySound.right.get(i)*50, x2, width/2+150 + mySound.right.get(i+1)*50 );
        
        
    }
}
void Audio::draw(){
    fbo.begin();
    //  pg.background(0);
//    pg.stroke(255);
    
    
    // draw the waveforms
    // the values returned by left.get() and right.get() will be between -1 and 1,
    // so we need to scale them up to see the waveform
    // note that if the file is MONO, left.get() and right.get() will return the same value
//    for(int i = 0; i < mySound.getBufferSize() - 1; i++)
//    {
////        float x1 = map( i, 0, player.bufferSize(), 0, width );
////        float x2 = map( i+1, 0, player.bufferSize(), 0, width );
////        pg.line( x1, width/2+ 50 + player.left.get(i)*50, x2, width/2+50 + player.left.get(i+1)*50 );
////        pg.line( x1, width/2+150 + player.right.get(i)*50, x2, width/2+150 + player.right.get(i+1)*50 );
//    }
    
    fbo.end();
    fbo.draw(0,0);
}

void Audio::setCanvasActive(bool cond){
    this->canvasIsActive = cond;
}
