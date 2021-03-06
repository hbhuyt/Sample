package com.bgstation0.android.sample.radiobutton_;

import android.app.Activity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.widget.RadioButton;
import android.widget.RadioGroup;
import android.widget.Toast;

public class MainActivity extends Activity implements OnClickListener{	// View.OnClickListenerを実装.

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        
        // button1を取得し, OnClickListenerとして自身をセット.
        Button button1 = (Button)findViewById(R.id.button1);	// findViewByIdでR.id.button1を取得.
        button1.setOnClickListener(this);	// button1.setOnClickListenerでthis(自身)をセット.
    }
    
    // View.OnClickListenerインタフェースのオーバーライドメソッドを実装.
    public void onClick(View v){	// onClickをオーバーライド.
    	// radiogroup1を取得し, どのラジオボタンがチェックされているかを確認.
    	RadioGroup radiogroup1 = (RadioGroup)findViewById(R.id.radiogroup1);	// findViewByIdでR.id.radiogroup1を取得.
    	int id = radiogroup1.getCheckedRadioButtonId();	// radiogroup1.getCheckedRadioButtonIdでチェックされたRadioButtonのIDを取得し, idに格納.
    	RadioButton radiobutton = (RadioButton)findViewById(id);	// findViewByIdでidが指すRadioButtonオブジェクトを取得.
    	Toast.makeText(this, radiobutton.getText(), Toast.LENGTH_SHORT).show();	// Toastでradiobuttonのtextを表示.
    }
}
