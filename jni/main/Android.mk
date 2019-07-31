LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := main
LOCAL_SRC_FILES := $(LOCAL_PATH)/main.cpp
LOCAL_C_INCLUDES := $(LOCAL_PATH)/main.hpp

LOCAL_SHARED_LIBRARIES := module1

# 아래는 라이브러리가 아닌 실행파일 만드는 옵션입니다.
# 이 실행 파일을 안드로이드 커널에 업로드 한 뒤 응용 APP에서 시스템
# 호출로 사용하는 기이한 짓을 할 수 있습니다.
include $(BUILD_EXECUTABLE)
