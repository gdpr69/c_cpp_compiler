package com.pdaxrom.cctools;

import android.app.NativeActivity;
import android.content.Intent;
import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;

import com.pdaxrom.utils.Utils;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class LauncherNativeActivity extends AppCompatActivity {
    private final static String TAG = "LauncherNativeActivity";

    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        String activity_file = getIntent().getStringExtra(BuildConstants.EXTRA_FILE_NAME);

        if (activity_file != null) {
            Log.i(TAG, "activity file " + activity_file);
            if ((new File(activity_file)).exists()) {
                String outfile = (new File(activity_file)).getName();
                String tmpexedir = getCacheDir().getParentFile().getAbsolutePath() + "/root" + "/tmp";
                (new File(tmpexedir)).mkdir();
                if (copyFile(activity_file, tmpexedir + "/" + outfile)) {
                    Utils.chmod(tmpexedir + "/" + outfile, 0755); //S_IRWXU|S_IRGRP|S_IXGRP|S_IROTH|S_IXOTH
                    try {
                        String str = tmpexedir + "/" + outfile;
                        FileOutputStream conf = new FileOutputStream(tmpexedir + "/native-loader.conf");
                        conf.write(str.getBytes());
                        conf.close();
                        Intent myIntent = new Intent(LauncherNativeActivity.this, NativeActivity.class);
                        startActivity(myIntent);

                    } catch (IOException e) {
                        Log.e(TAG, "Can't create native-loader.conf file " + e);
                    }
                }
            }
        }

        finish();
    }

    private boolean copyFile(String srcfile, String dstfile) {
        try {
            FileInputStream in = new FileInputStream(srcfile);
            FileOutputStream out = new FileOutputStream(dstfile);
            byte[] buf = new byte[100 * 1024];
            int i = 0;
            while ((i = in.read(buf)) != -1) {
                out.write(buf, 0, i);
            }
            in.close();
            out.close();
        } catch (IOException e) {
            Log.e(TAG, "Error copying file: " + e);
            return false;
        }
        return true;
    }
}
