#include <jvmti.h>
#include<stdio.h>
#include "_cgo_export.h"

JNIEXPORT jint JNICALL Agent_OnLoad(JavaVM *jvm, char *options, void *reserved) {
    printf("C Agent Started .. about to call go_Agent_onLoad()\n");
    goAgent_onLoad(jvm, options);
    return JNI_OK;
}

const jint cagent_DestroyJvm(JavaVM *jvm) {
    return (*jvm)->DestroyJavaVM(jvm);
}

//Call when agent is unloaded
void Agent_OnUnload(JavaVM *vm)
{
    printf("\nAgent Unloaded\n");
}