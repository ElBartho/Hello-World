LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := ndkmain
LOCAL_SRC_FILES := native.c
include $(BUILD_SHARED_LIBRARY)