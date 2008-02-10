/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.24
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_playercore_java_WRAP_H_
#define SWIG_playercore_java_WRAP_H_

class SwigDirector_Driver : public Driver, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls);
    SwigDirector_Driver(JNIEnv *jenv, ConfigFile *cf, int section, bool overwrite_cmds, size_t queue_maxlen, int interf);
    SwigDirector_Driver(JNIEnv *jenv, ConfigFile *cf, int section, bool overwrite_cmds = true, size_t queue_maxlen = PLAYER_MSGQUEUE_DEFAULT_MAXLEN);
    virtual ~SwigDirector_Driver();
    virtual int Setup();
    virtual void Update();
    virtual void MainQuit();
    virtual int Shutdown();
    virtual void Main();
public:
    bool swig_overrides(int n) {
      return (n < 5 ? swig_override[n] : false);
    }
protected:
    bool swig_override[5];
};


#endif