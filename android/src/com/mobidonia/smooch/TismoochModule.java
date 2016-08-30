/**
 * This file was auto-generated by the Titanium Module SDK helper for Android
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 */
package com.mobidonia.smooch;

import org.appcelerator.kroll.KrollModule;
import org.appcelerator.kroll.annotations.Kroll;

import org.appcelerator.titanium.TiApplication;
import org.appcelerator.kroll.common.Log;
import org.appcelerator.kroll.common.TiConfig;

import io.smooch.core.Smooch;
import android.app.Activity;
import android.app.Application;
//import io.smooch.ui.ConversationActivity;
//import io.smooch.ui.*;

@Kroll.module(name="Tismooch", id="com.mobidonia.smooch")
public class TismoochModule extends KrollModule
{

	// Standard Debugging variables
	private static final String LCAT = "TismoochModule";
	private static final boolean DBG = TiConfig.LOGD;

	// You can define constants with @Kroll.constant, for example:
	// @Kroll.constant public static final String EXTERNAL_NAME = value;

	public TismoochModule()
	{
		super();
	}

	@Kroll.onAppCreate
	public static void onAppCreate(TiApplication app)
	{
		Log.d(LCAT, "inside onAppCreate");
		// put module init code that needs to run when the application is created
	}

	// Methods
	@Kroll.method
	public String example()
	{
		Log.d(LCAT, "example calleddddd");
		//ConversationActivity.show(TiApplication.getInstance().getCurrentActivity());
		return "hello world";
		
	}
	
	// Methods
    @Kroll.method
	public void init(String id)
	{
		Log.d(LCAT, "init called"+id);
		
		/*TiApplication appContext = TiApplication.getInstance();
		Activity activity = appContext.getCurrentActivity();
		Application appli=(Application)activity;*/
		Smooch.init(TiApplication.getInstance(), id);
		
		
	}
    
   // Methods
    @Kroll.method
	public void open()
	{
		Log.d(LCAT, "start called");
		
		//ConversationActivity.show(TiApplication.getInstance().getCurrentActivity());
	}

	// Properties
	@Kroll.getProperty
	public String getExampleProp()
	{
		Log.d(LCAT, "get example property");
		return "hello world";
	}


	@Kroll.setProperty
	public void setExampleProp(String value) {
		Log.d(LCAT, "set example property: " + value);
	}

}
