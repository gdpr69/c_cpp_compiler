/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_duy_c_cpp_compiler_sdlplugin_Utils */

#ifndef _Included_com_duy_c_cpp_compiler_sdlplugin_Utils
#define _Included_com_duy_c_cpp_compiler_sdlplugin_Utils
#ifdef __cplusplus
extern "C" {
#endif
#undef com_duy_c_cpp_compiler_sdlplugin_Utils_Lib_SDL
#define com_duy_c_cpp_compiler_sdlplugin_Utils_Lib_SDL 0L
#undef com_duy_c_cpp_compiler_sdlplugin_Utils_Lib_SDL_image
#define com_duy_c_cpp_compiler_sdlplugin_Utils_Lib_SDL_image 1L
#undef com_duy_c_cpp_compiler_sdlplugin_Utils_Lib_SDL_mixer
#define com_duy_c_cpp_compiler_sdlplugin_Utils_Lib_SDL_mixer 2L
#undef com_duy_c_cpp_compiler_sdlplugin_Utils_Lib_SDL_net
#define com_duy_c_cpp_compiler_sdlplugin_Utils_Lib_SDL_net 3L
#undef com_duy_c_cpp_compiler_sdlplugin_Utils_Lib_SDL_ttf
#define com_duy_c_cpp_compiler_sdlplugin_Utils_Lib_SDL_ttf 4L
/*
 * Class:     com_duy_c_cpp_compiler_sdlplugin_Utils
 * Method:    setEnv
 * Signature: (Ljava/lang/String;Ljava/lang/String;Z)I
 */
JNIEXPORT jint JNICALL Java_com_duy_c_cpp_compiler_sdlplugin_Utils_setEnv
  (JNIEnv *, jclass, jstring, jstring, jboolean);

/*
 * Class:     com_duy_c_cpp_compiler_sdlplugin_Utils
 * Method:    unSetEnv
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_duy_c_cpp_compiler_sdlplugin_Utils_unSetEnv
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_duy_c_cpp_compiler_sdlplugin_Utils
 * Method:    getEnv
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_duy_c_cpp_compiler_sdlplugin_Utils_getEnv
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_duy_c_cpp_compiler_sdlplugin_Utils
 * Method:    chDir
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_duy_c_cpp_compiler_sdlplugin_Utils_chDir
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_duy_c_cpp_compiler_sdlplugin_Utils
 * Method:    getSDLVersion
 * Signature: (I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_duy_c_cpp_compiler_sdlplugin_Utils_getSDLVersion
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
