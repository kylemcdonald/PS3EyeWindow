#include "testApp.h"

void testApp::setup() {
	ofSetFrameRate(60);
	ps3eyeInit();
}

void testApp::update() {
	if(ps3eyeIsFrameNew()) {
		timer.tick();
	}
}

void testApp::draw() {
	ofBackground(0);
	ofSetColor(255);
	ofDrawBitmapString(ofToString((int) timer.getFrameRate()), 10, 20);
}
