package com.bgstation0.android.sample.activity_;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

// MainActivity�ɂ���ċN�������SubActivity.
public class SubActivity extends Activity {	// SubActivity�̒�`.

	// Activity���������ꂽ�Ƃ�.
	@Override
    protected void onCreate(Bundle savedInstanceState) {	// onCreate�̒�`
		super.onCreate(savedInstanceState);
		
		// "SubActivity!"�̕\��.
		TextView tv = new TextView(this);	// TextView�I�u�W�F�N�gtv�̐���.
		tv.setText("SubActivity!");	// tv.setText��"SubActivity!"�̃Z�b�g.
		setContentView(tv);	// setContentView��tv��\��.
	}	
}