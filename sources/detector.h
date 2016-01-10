//
//  detector.h
//  shelfie
//
//  Created by YotaOdaka on 1/6/16.
//
//

#ifndef detector_h
#define detector_h

#include <stdio.h>
#include "ofMain.h"
#include "ofxOpenCv.h"

class Detector : public ofThread {
 public:
  // Constructor and destructor
  Detector();
  ~Detector();

  // Disallow copy and assign
  Detector(const Detector&) = delete;
  Detector& operator=(const Detector&) = delete;

  // Accessors
  void setInput(ofImage& input);

  // Status
  bool running();

  // Routine
  void threadedFunction();
  void run();

 private:
  // Properties
  bool running_;

  // Data members
  ofImage input_;
  vector<ofImage> samples_;
};

#endif /* detector_h */
