//
//  Textos.cpp
//  POESIA
//
//  Created by Clelio de Paula on 25/9/14.
//
//

#include "Textos.h"

Textos::Textos(){
    
}

void Textos::setup(){
    
    ofBackgroundHex(0xff72a1);
    ofSetFrameRate(30);
    
    if(ofGetWidth() > 768){
        myfont.loadFont("of_data/aleixo/darkheart-regular.ttf", 68.5*2);
        //myfont.setLineHeight(150.0f);
        //myfont.setLetterSpacing(1);
    } else{
        myfont.loadFont("of_data/aleixo/darkheart-regular.ttf", 68.5);
    }
    
    //myfont.setLineHeight(40.0f);
    //myfont.setLetterSpacing(1.037);
    //myfont.loadFont("of_data/aleixo/Comicv23D.ttf", 60);
    
    nextLetterTime = ofGetElapsedTimeMillis();
    lineCount      = 0;
    letterCount    = 0;
    
    // this is our buffer to stroe the text data
    ofBuffer buffer = ofBufferFromFile("of_data/aleixo/otempo.txt");
    
    if(buffer.size()) {
        
        // we now keep grabbing the next line
        // until we reach the end of the file
        while(buffer.isLastLine() == false) {
            
            // move on to the next line
            string line = buffer.getNextLine();
            
            // copy the line to draw later
            // make sure its not a empty line
            if(line.empty() == false) {
                seussLines.push_back(line);
            }
            
            //print out the line
            cout << line << endl;
            
        }
        
    }
    
    fbo.allocate(ofGetWidth(), ofGetHeight(), GL_RGBA);
    
    
}


void Textos::draw(){
    fbo.begin();
    ofClear(255,255,255);
    
    ofLog() << xs_global << endl;
    
    
    for (int i = 0; i< nunberOfLines; i++){

        // we are slowy grabbing part of the line
        //        string typedLine = seussLines[lineCount+i].substr(0, letterCount);
        string typedLine = seussLines[lineCount+i];
        
        ofRectangle rect = myfont.getStringBoundingBox(typedLine, 0,0);
        float x = (ofGetWidth()/2) - rect.width/2;
        float y = ((ofGetHeight()-(rect.height*(nunberOfLines)))/2)+(i+1)*rect.height;
        //float y = ((ofGetHeight()/2) - (rect.height*(nunberOfLines/2)))+i*rect.height;
        
        // draw the line
        //        ofSetColor(0);
        //        ofRect(x, y, strWidth, 42);
        ofSetColor(255);
        myfont.drawString(typedLine, x,y);
        //        ofDrawBitmapString(typedLine, x+4, y+11);
        
        
        // this is our timer for grabbing the next letter
        float time = ofGetElapsedTimeMillis() - nextLetterTime;
        
        if(time > 10) {
            
            // increment the letter count until
            // we reach the end of the line
            if(letterCount < (int)seussLines[lineCount].size()) {
                
                // move on to the next letter
                
                letterCount ++;
                
                // store time for next letter type
                nextLetterTime = ofGetElapsedTimeMillis();
                
            }
            else {
                
                // wait just a flash then move on
                // to the next line...
                if(time > 300) {
                    
                 nextLetterTime = ofGetElapsedTimeMillis();
                    
                 
                    
                    
                    int index = ceil(ofRandom(0, 3));
                    
                    if(index == 1){
                        lineCount = 0;
                    }
                    if(index == 2){
                        lineCount = 8;
                    }
                    if(index == 3){
                        lineCount = 16;
                    }
//                    letterCount = 0;
//                    lineCount += 8;
//                    if (lineCount > 16) {
//                        lineCount = 0;
//                    }
                    
                    //                    lineCount %= seussLines.size();
                }
                
            }
        }
        
    }
    fbo.end();
    fbo.draw(0,0);
    
}