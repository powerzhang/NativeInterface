package com.example.qustzj.application;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        NativeInterface.setPosition(5,7);
        NativeInterface.setStrParameter("Hello Native C++");
    }
}
