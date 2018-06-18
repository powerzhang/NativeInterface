//
// Created by qustzj on 2018/5/26.
//

#include "NativeInterface.h"
#include "LogUtils.h"
#include "bodymarkparser.h"

JNIEXPORT void JNICALL Java_com_example_qustzj_application_NativeInterface_setPosition
(JNIEnv *, jclass, jint x, jint y)
{
    LOGD("NativeInterface :(%d,%d)",x,y);
    vector<BodyMarkBean> bodymarkBeanList1;
    BodyMarkParser bodyMarkParser;
    bodyMarkParser.read(xmlPath,bodymarkBeanList1);

    LOGD("NativeInterface read finished Size:%d",bodymarkBeanList1.size());
    for(auto i = bodymarkBeanList1.begin(); i != bodymarkBeanList1.end();i++)
    {
        LOGD("NativeInterface text : %s ,filename:%s,isDefault : %d,page : %d,row : %d,column : %d",
               i->text.c_str(),
               i->filename.c_str(),
               i->isDefault,
               i->page,
               i->row,
               i->column);
    }
    bodyMarkParser.write(savePath,bodymarkBeanList1);


}

JNIEXPORT void JNICALL Java_com_example_qustzj_application_NativeInterface_setStrParameter
(JNIEnv *env, jclass, jstring jstr)
{
    const char* jcstr = (env)->GetStringUTFChars(jstr, 0);
    LOGD("NativeInterface : %s",jcstr);

}

JNIEXPORT jstring JNICALL Java_com_example_qustzj_application_NativeInterface_getStr
        (JNIEnv *env, jclass){
    return env->NewStringUTF( "Hello C++");;
}