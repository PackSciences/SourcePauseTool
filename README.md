SourcePauseTool
===============

A plugin for all your pausing needs.

##Usage
Place the compiled *spt.dll* into your mod directory (for example: "hl2", "portal", "ep2"), launch the game and type **plugin_load spt** into the developer console. If no warning messages are displayed, then you're good to go.

You can control how the plugin works using the **y_spt_pause** cvar. If it is equal to 1, then the plugin pauses right after the game load, this is the most useful behaviour. If it is equal to 2, the plugin pauses at the earliest possible moment, which is not very useful, because nothing has been loaded yet. If it is equal to anything else, then the plugin doesn't pause the game at all.

##Building
To build it you will need Detours v3.0 (the Express version will do) and SourceSDK.
Go to SourceSDK and create your mod (Source 2007 for New Engine and Source 2006 for Old Engine) with "source code only setting.
For Old Engine, you have to remove line 291 of spt.vcxproj
Place Detours and the SourcePauseTool source code into the *src\utils\serverplugin_sample\* folder, where *src* is the folder with the mod source code. Configure VC++ Directories so that you have your Detours *includes* and *libs* directories listed appropriately.
Built with the Source 2007 code and Visual Studio 2013 Express for Windows Desktop.
