#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  ofSetVerticalSync(false);
  capture_layer_ = make_unique<CaptureLayer>();
  detector.startThread();
}

//--------------------------------------------------------------
void ofApp::update(){
  capture_layer_->update();
}

//--------------------------------------------------------------
void ofApp::draw(){
  capture_layer_->draw(0, 0);
}

//--------------------------------------------------------------
void ofApp::exit(){
  detector.stopThread();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  switch (key) {
    case 'c':
      auto& cropped_frame = capture_layer_->getCroppedFrame();
      cout << "crop" << endl;
      break;
  }
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
