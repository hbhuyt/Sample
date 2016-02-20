package com.bgstation0.android.sample.activity_;

import android.app.Activity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.TextView;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // findViewByIdでR.id.hello_worldのTextViewを取得し, setTextで"Activity.findViewById"に替える.
        TextView tv = (TextView)findViewById(R.id.hello_world);	// R.id.hello_worldなるTextViewを取得し, tvに格納.
        tv.setText("Activity.findViewById");	// tv.setTextで"Activity.findViewById"をセット.
    }
}
