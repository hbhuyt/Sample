package com.bgstation0.android.sample.listview_;

import android.app.Activity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.widget.ArrayAdapter;
import android.widget.ListView;

public class MainActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        
        // String配列で追加する要素を定義.
        String[] items = new String[3];	// String配列items(要素数3)
        items[0] = "item1";	// item1
        items[1] = "item2";	// item2
        items[2] = "item3";	// item3
        
        // ListViewオブジェクトを取得.
        ListView listview1 = (ListView)findViewById(R.id.listview1);	// findViewByIdでlistview1を取得.
        
        // ArrayAdapter<String>のadapterを生成して, listview1とadapterとitemsを紐付ける.
        ArrayAdapter<String> adapter = new ArrayAdapter<String>(this, R.layout.list_item, items);	// ArrayAdapter<String>コンストラクタにListViewのアイテムテンプレートのlist_itemとリストデータのitemsをセット.(list_itemは単体のTextViewじゃないといけないことに注意.)
        listview1.setAdapter(adapter);	// listview1.setAdapterにadapterをセットして, ListViewとAdapterを紐付ける.
    }
}
