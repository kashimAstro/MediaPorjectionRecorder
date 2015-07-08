LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := androidEmptyExample
LOCAL_SRC_FILES := \
	/home/kashim/OFDroid/of_v0.8.4_android_release/apps/myApps/androidEmptyExample/jni/Application.mk \
	/home/kashim/OFDroid/of_v0.8.4_android_release/apps/myApps/androidEmptyExample/jni/Android.mk \

LOCAL_C_INCLUDES += /home/kashim/OFDroid/of_v0.8.4_android_release/apps/myApps/androidEmptyExample/jni
LOCAL_C_INCLUDES += /home/kashim/OFDroid/of_v0.8.4_android_release/apps/myApps/androidEmptyExample/src/debug/jni

include $(BUILD_SHARED_LIBRARY)
