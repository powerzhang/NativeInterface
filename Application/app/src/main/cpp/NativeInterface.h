/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_qustzj_application_NativeInterface */

#ifndef _Included_com_example_qustzj_application_NativeInterface
#define _Included_com_example_qustzj_application_NativeInterface
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_qustzj_application_NativeInterface
 * Method:    setPosition
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_example_qustzj_application_NativeInterface_setPosition
  (JNIEnv *, jclass, jint x, jint y);

/*
 * Class:     com_example_qustzj_application_NativeInterface
 * Method:    setStrParameter
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_example_qustzj_application_NativeInterface_setStrParameter
  (JNIEnv *, jclass, jstring jstr);

JNIEXPORT jstring JNICALL Java_com_example_qustzj_application_NativeInterface_getStr
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
