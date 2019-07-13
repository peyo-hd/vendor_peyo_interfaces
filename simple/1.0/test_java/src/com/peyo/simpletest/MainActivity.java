package com.peyo.simpletest;

import android.app.Activity;
import android.os.Bundle;
import android.os.RemoteException;
import android.util.Log;
import android.view.View;
import android.widget.EditText;

import vendor.peyo.simple.V1_0.ISimple;

public class MainActivity extends Activity {
    private static final String TAG = "vendor.peyo.simpleJavaTest";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
	    super.onCreate(savedInstanceState);
	    setContentView(R.layout.main);
    }

    @Override
    protected void onResume() {
        super.onResume();
        getWindow().getDecorView().setSystemUiVisibility(View.SYSTEM_UI_FLAG_FULLSCREEN);
    }

    public void onConvertClicked(View v) {
        Log.i(TAG, "onConvertClicked()");

	EditText value = (EditText)findViewById(R.id.value);

	try {
	    ISimple service = ISimple.getService(true);
	    int valueIn = Integer.valueOf(value.getText().toString());
	    Log.i(TAG, "calling convert() " + valueIn);
	    int valueOut = service.convert(valueIn);
	    Log.i(TAG, "valueOut of convert() is " + valueOut);
	    value.setText(Integer.toString(valueOut));
        } catch (RemoteException e) {
            Log.e(TAG, "ISimple usage failed", e);
        }
    }

}
