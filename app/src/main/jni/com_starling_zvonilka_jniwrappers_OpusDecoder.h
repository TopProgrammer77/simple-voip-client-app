/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_starling_zvonilka_jniwrappers_OpusDecoder */

#ifndef _Included_com_starling_zvonilka_jniwrappers_OpusDecoder
#define _Included_com_starling_zvonilka_jniwrappers_OpusDecoder
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_starling_zvonilka_jniwrappers_OpusDecoder
 * Method:    nativeInitDecoder
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_com_starling_zvonilka_jniwrappers_OpusDecoder_nativeInitDecoder
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_starling_zvonilka_jniwrappers_OpusDecoder
 * Method:    nativeDecodeBytes
 * Signature: ([B[S)I
 */
JNIEXPORT jint JNICALL Java_com_starling_zvonilka_jniwrappers_OpusDecoder_nativeDecodeBytes
  (JNIEnv *, jobject, jbyteArray, jshortArray);

/*
 * Class:     com_starling_zvonilka_jniwrappers_OpusDecoder
 * Method:    nativeReleaseDecoder
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_starling_zvonilka_jniwrappers_OpusDecoder_nativeReleaseDecoder
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
