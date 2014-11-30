#include <string.h>
#include <jni.h>

jstring Java_com_exemple_hellondk_Main_invokeNativeFunction(JNIEnv* env, jobject this)
{
	return (*env)->NewStringUTF(env, "Hello Word !");
}
