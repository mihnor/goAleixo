    //OFAleixo.cpp
    #include "OFAleixo.h"


//public string ola = "hello world";

//--------------------------------------------------------------
OFAleixo :: ~OFAleixo () {
    cout << "destroying OFAleixo" << endl;
}

    //--------------------------------------------------------------
    OFAleixo::OFAleixo(){
    

    cout << "creating OFAleixo" << endl;

    }
    //--------------------------------------------------------------
    void OFAleixo::setup(){
        
        
        
        ofSetOrientation(OF_ORIENTATION_90_RIGHT);

        //ofSetOrientation(OF_ORIENTATION_DEFAULT);

        canvas1.setup();
        canvas2.setup();
        canvas3.setup();
        canvas4.setup();
        canvas5.setup();
       // canvas6.setup();
        
        audio.setup();        
        canvas2.setCanvasActive(true);
        textos.setup();

    }
    //--------------------------------------------------------------
    void OFAleixo::update(){
    
        time = time + 1;
        if(time > trigerTime){
            
            int numberSelector = (int)ofRandom(1, 6);
            
            canvas1.setCanvasActive(false);
            canvas2.setCanvasActive(false);
            canvas3.setCanvasActive(false);
            canvas4.setCanvasActive(false);
            canvas5.setCanvasActive(false);
           // canvas6.setCanvasActive(false);
            
            if (numberSelector == 1) {
                canvas1.setCanvasActive(true);
            }
            else if (numberSelector == 2){
                canvas2.setCanvasActive(true);
            }
            else if (numberSelector == 3){
                canvas3.setCanvasActive(true);
            }
            else if (numberSelector == 4){
                canvas4.setCanvasActive(true);
            }
            else if (numberSelector == 5){
                canvas5.setCanvasActive(true);
            }
//            else if (numberSelector == 6){
//                canvas6.setCanvasActive(true);
//            }
            ofLog() << "canvas ativo: " + ofToString(numberSelector);
            
            
            time = 0;
        }
    
    }
    //--------------------------------------------------------------
    void OFAleixo::draw(){

        int screen;
        
        if(canvas1.canvasIsActive){
            canvas1.draw();
            screen = 1;
        }else if(canvas2.canvasIsActive){
            canvas2.draw();
            screen = 2;
        }
        else if(canvas3.canvasIsActive){
            canvas3.draw();
            screen = 3;
        }else if(canvas4.canvasIsActive){
            canvas4.draw();
            screen = 4;
        }
        else if(canvas5.canvasIsActive){
            canvas5.draw();
            screen = 5;
        }
//        else if(canvas6.canvasIsActive){
//            canvas6.draw();
//            screen = 6;
//        }
        
        audio.draw();
        textos.draw(screen);
        //textos.draw(5);
    }

void OFAleixo::setCanvasActive(bool cond){
    this->canvasIsActive = cond;

}




//--------------------------------------------------------------
void OFAleixo::touchDown(ofTouchEventArgs & touch){
    
    

    
    if(canvas1.canvasIsActive){
        canvas1.touchDown(touch);
    }else if(canvas2.canvasIsActive){
        canvas2.touchDown(touch);
    }
    else if(canvas3.canvasIsActive){
        canvas3.touchDown(touch);
    }else if(canvas4.canvasIsActive){
        canvas4.touchDown(touch);
    }
    else if(canvas5.canvasIsActive){
        canvas5.touchDown(touch);
    }
//    else if(canvas6.canvasIsActive){
//        canvas6.touchDown(touch);
//    }
    
    int numberSelector = (int)ofRandom(1, 7);

    canvas1.setCanvasActive(false);
    canvas2.setCanvasActive(false);
    canvas3.setCanvasActive(false);
    canvas4.setCanvasActive(false);
    canvas5.setCanvasActive(false);
//    canvas6.setCanvasActive(false);
    
    if (numberSelector == 1) {
        canvas1.setCanvasActive(true);
        
    }
    else if (numberSelector == 2){
        canvas2.setCanvasActive(true);
    }
    else if (numberSelector == 3){
        canvas3.setCanvasActive(true);
    }
    else if (numberSelector == 4){
        canvas4.setCanvasActive(true);
    }
    else if (numberSelector == 5){
        canvas5.setCanvasActive(true);
    }
//    else if (numberSelector == 6){
//        canvas6.setCanvasActive(true);
//    }
    ofLog() << "canvas ativo: " + ofToString(numberSelector);
}

//--------------------------------------------------------------
void OFAleixo::touchMoved(ofTouchEventArgs & touch){
    
    if(canvas1.canvasIsActive){
        canvas1.touchMoved(touch);
    }else if(canvas2.canvasIsActive){
        canvas2.touchMoved(touch);
    }
    else if(canvas3.canvasIsActive){
        canvas3.touchMoved(touch);
    }else if(canvas4.canvasIsActive){
        canvas4.touchMoved(touch);
    }
    else if(canvas5.canvasIsActive){
        canvas5.touchMoved(touch);
    }
//    else if(canvas6.canvasIsActive){
//        canvas6.touchMoved(touch);
//    }
    
    
}

//--------------------------------------------------------------
void OFAleixo::touchUp(ofTouchEventArgs & touch){
    
    
    if(canvas1.canvasIsActive){
        canvas1.touchUp(touch);
    }else if(canvas2.canvasIsActive){
        canvas2.touchUp(touch);
    }
    else if(canvas3.canvasIsActive){
        canvas3.touchUp(touch);
    }else if(canvas4.canvasIsActive){
        canvas4.touchUp(touch);
    }
    else if(canvas5.canvasIsActive){
        canvas5.touchUp(touch);
    }
//    else if(canvas6.canvasIsActive){
//        canvas6.touchUp(touch);
//    }
    
    
    
}

//--------------------------------------------------------------
void OFAleixo::touchDoubleTap(ofTouchEventArgs & touch){
    
    
    if(this->canvasIsActive){
        this->setCanvasActive(false);
        this->audio.mySound.stop();
    }
//    else if(canvas1.canvasIsActive){
//        canvas1.touchDoubleTap(touch);
//        this->setCanvasActive(true);
//        
//    }
//    else if(canvas2.canvasIsActive){
//
//        canvas2.touchDoubleTap(touch);
//        this->setCanvasActive(true);
//    }
    
}

//--------------------------------------------------------------
void OFAleixo::touchCancelled(ofTouchEventArgs & touch){
    
    if(this->canvasIsActive){
        
    }
    else if(canvas1.canvasIsActive){
        canvas1.touchCancelled(touch);
    }else if(canvas2.canvasIsActive){
        canvas2.touchCancelled(touch);
    }
    else if(canvas3.canvasIsActive){
        canvas3.touchCancelled(touch);
    }else if(canvas4.canvasIsActive){
        canvas4.touchCancelled(touch);
    }
    else if(canvas5.canvasIsActive){
        canvas5.touchCancelled(touch);
    }
//    else if(canvas6.canvasIsActive){
//        canvas6.touchCancelled(touch);
//    }

    
}

//--------------------------------------------------------------
void OFAleixo::keyPressed(int key){
    
}

//--------------------------------------------------------------
void OFAleixo::keyReleased(int key){
    
}

//--------------------------------------------------------------
void OFAleixo::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void OFAleixo::mouseDragged(int x, int y, int button){
    trigerTime = ofMap(y, 0, ofGetHeight(), 5, 120);
}

//--------------------------------------------------------------
void OFAleixo::mousePressed(int x, int y, int button){
    
    
    
    
    if(canvas1.canvasIsActive){
        canvas1.mousePressed(x,y, button);
    }else if(canvas2.canvasIsActive){
        canvas2.mousePressed(x,y, button);
    }
    else if(canvas3.canvasIsActive){
        canvas3.mousePressed(x,y, button);
    }else if(canvas4.canvasIsActive){
        canvas4.mousePressed(x,y, button);
    }
    else if(canvas5.canvasIsActive){
        canvas5.mousePressed(x,y, button);
    }
//    else if(canvas6.canvasIsActive){
//        canvas6.mousePressed(x,y, button);
//    }
    

    
}

//--------------------------------------------------------------
void OFAleixo::mouseReleased(int x, int y, int button){
    
}

