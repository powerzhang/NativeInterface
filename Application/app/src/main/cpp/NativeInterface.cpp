//
// Created by qustzj on 2018/5/26.
//

#include "NativeInterface.h"
#include "LogUtils.h"

JNIEXPORT void JNICALL Java_com_example_qustzj_application_NativeInterface_setPosition
(JNIEnv *, jclass, jint x, jint y)
{
    LOGD("NativeInterface :(%d,%d)",x,y);
}

JNIEXPORT void JNICALL Java_com_example_qustzj_application_NativeInterface_setStrParameter
(JNIEnv *env, jclass, jstring jstr)
{
    const char* jcstr = (env)->GetStringUTFChars(jstr, 0);
    LOGD("NativeInterface : %s",jcstr);

}