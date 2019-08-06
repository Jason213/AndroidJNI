package com.example.jnitestapplication;

public class JniTest {
    static {
        System.loadLibrary("JniTest");
    }

    //native方法
    public static native String sayHello();
}
