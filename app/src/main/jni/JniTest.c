#include "com_example_jnitestapplication_JniTest.h"

JNIEXPORT jstring JNICALL Java_com_example_jnitestapplication_JniTest_sayHello
  (JNIEnv *env, jobject obj){

     return (*env)->NewStringUTF(env,"Hellow World，Jason");
  }