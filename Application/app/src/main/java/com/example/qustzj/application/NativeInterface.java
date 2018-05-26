package com.example.qustzj.application;

/**
 * Created by qustzj on 2018/5/26.
 */

public class NativeInterface {

    static {
        System.loadLibrary("Interface");
    }
    public static native void setPosition(int x,int y);
    public static native void setStrParameter(String strParameter);
}
