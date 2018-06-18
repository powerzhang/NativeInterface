package com.example.qustzj.application;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    private static final String TAG = "MainActivity";
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        NativeInterface.setPosition(5,7);
        NativeInterface.setStrParameter("Hello Native C++");
        /*TextView textView =  (TextView)findViewById(R.id.textView);
        textView.setText(NativeInterface.getStr());
        FileUtil.verifyStoragePermissions(this);
        try {
            Log.d(TAG, "readFromSD :" + FileUtil.readFromSD("/mnt/user/0/primary/ABD.xml"));
        }catch (Exception e){
            Log.d(TAG,"readFromSD :" +  e);
        }*/
    }
}
