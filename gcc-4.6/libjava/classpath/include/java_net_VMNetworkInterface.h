/* DO NOT EDIT THIS FILE - it is machine generated */

#include <jni.h>

#ifndef __java_net_VMNetworkInterface__
#define __java_net_VMNetworkInterface__

#ifdef __cplusplus
extern "C"
{
#endif

JNIEXPORT void JNICALL Java_java_net_VMNetworkInterface_initIds (JNIEnv *env, jclass);
JNIEXPORT jobjectArray JNICALL Java_java_net_VMNetworkInterface_getVMInterfaces (JNIEnv *env, jclass);
JNIEXPORT jboolean JNICALL Java_java_net_VMNetworkInterface_isUp (JNIEnv *env, jclass, jstring);
JNIEXPORT jboolean JNICALL Java_java_net_VMNetworkInterface_isLoopback (JNIEnv *env, jclass, jstring);
JNIEXPORT jboolean JNICALL Java_java_net_VMNetworkInterface_isPointToPoint (JNIEnv *env, jclass, jstring);
JNIEXPORT jboolean JNICALL Java_java_net_VMNetworkInterface_supportsMulticast (JNIEnv *env, jclass, jstring);

#ifdef __cplusplus
}
#endif

#endif /* __java_net_VMNetworkInterface__ */
