#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    north = 0;
    northEast = 1;
    east = 2;
    southEast = 3;
    south = 4;
    southWest = 5;
    west = 6;
    northWest = 7;
    
    
    stepSize = 10;
    diam = 10;
    
    locX = ofGetWidth()/2;
    locY = ofGetHeight()/2;
    ofBackground(255);
    ofSetBackgroundAuto(false);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    direction = ofRandom(0, 8);
    
    if(direction == north){
        locY = locY - stepSize;
    }
    else if(direction == northEast){
        locY = locY - stepSize;
        locX = locX + stepSize;
    }
    else if(direction == east){
        //locY = locY - stepSize;
        locX = locX + stepSize;
    }
    else if(direction == southEast){
        locY = locY + stepSize;
        locX = locX + stepSize;
    }
    else if(direction == south){
        locY = locY + stepSize;
    }
    else if(direction == southWest){
        locX = locX - stepSize;
        locY = locY + stepSize;
    }
    else if(direction == west){
        locX = locX - stepSize;
    }
    else if(direction == northWest){
        locX = locX - stepSize;
        locY = locY - stepSize;
    }
    
   // if(locX > GetWidth)
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255, 0, 0, 50);
    ofDrawEllipse(locX, locY, diam, diam);
    
    if(locX > ofGetWidth()){
        locX = 0;
    }
    else if (locX < ofGetWidth()){

    }
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
