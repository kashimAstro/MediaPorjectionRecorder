#include "ofApp.h"

ofEasyCam cam;

//public void clickToggleRecording(@SuppressWarnings("unused") View unused)  //questo per avviare il recording

/*std::string ofApp::getJavaString() {
    jmethodID midCallBackStatic = ofGetJNIEnv()->GetStaticMethodID(ofGetJavaOFAndroid(), "innerString", "()Ljava/lang/String;");
    jstring resultJNIStr = (jstring)ofGetJNIEnv()->CallStaticObjectMethod(ofGetJavaOFAndroid(), midCallBackStatic);
    const char *resultCStr = ofGetJNIEnv()->GetStringUTFChars(resultJNIStr, NULL);
    std::string resultStr(resultCStr);
    ofGetJNIEnv()->ReleaseStringUTFChars(resultJNIStr, resultCStr);
    return resultStr;
}*/

/*void ofApp::callRecording(){
	ofLog()<<"RECORDING!!!";
        JNIEnv *env = ofGetJNIEnv();
	//jobject obj;
        jclass mainClass = env->FindClass("cc/openframeworks/androidEmptyExample/OFProjectRecording");
	if(mainClass==0){
                ofLogError("OFProjectRecording") << "Error class OFProjectRecording";
		return;
	}
	jmethodID r = env->GetMethodID(mainClass,"pippo","()V");
	if(r == 0){
		ofLog()<<"Error call Method: pippo!";
	}		
	//env->CallVoidMethod(env, obj, r);
}*/

//--------------------------------------------------------------
void ofApp::setup(){
	//std::string p = getJavaString();
	//ofLog()<<"JAVA CALL METHOD::::"<<p;
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0);
	cam.begin();
	ofSetColor(255,22,109);
	ofDrawBox(200);
	cam.end();
}

//--------------------------------------------------------------
void ofApp::keyPressed  (int key){ 
	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){ 
	
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::touchDown(int x, int y, int id){
	//callRecording();
}

//--------------------------------------------------------------
void ofApp::touchMoved(int x, int y, int id){

}

//--------------------------------------------------------------
void ofApp::touchUp(int x, int y, int id){

}

//--------------------------------------------------------------
void ofApp::touchDoubleTap(int x, int y, int id){

}

//--------------------------------------------------------------
void ofApp::touchCancelled(int x, int y, int id){

}

//--------------------------------------------------------------
void ofApp::swipe(ofxAndroidSwipeDir swipeDir, int id){

}

//--------------------------------------------------------------
void ofApp::pause(){

}

//--------------------------------------------------------------
void ofApp::stop(){

}

//--------------------------------------------------------------
void ofApp::resume(){

}

//--------------------------------------------------------------
void ofApp::reloadTextures(){

}

//--------------------------------------------------------------
bool ofApp::backPressed(){
	return false;
}

//--------------------------------------------------------------
void ofApp::okPressed(){

}

//--------------------------------------------------------------
void ofApp::cancelPressed(){

}
