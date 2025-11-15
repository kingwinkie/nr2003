NASCAR® Racing 2003 Season Demo
1.0.0.1
Readme File
01/30/03
[ To read this file, select Edit/Word Wrap from the menu above ]


		    	TABLE OF CONTENTS

		  I.	MINIMUM REQUIREMENTS
		 II.	GENERAL TECHNICAL ISSUES
		III.	GENERAL GAME ISSUES


I. MINIMUM REQUIREMENTS
=======================

Operating Systems:
	Windows 98/ME/2000/XP*

* NOTE: Users on 2000 and XP may need to be logged in to Windows with local administrator privileges.

Minimum:
	Pentium II 450 MHz processor
	64 MB of RAM
	16 MB Direct3D compatible video card
	8X CD-ROM drive
	DirectX 9.0 or later
	OpenGL* 1.1 or later

Recommended:
	Pentium III 800 MHz or higher
	128 MB or more of RAM
	32 MB or higher Direct3D compatible video card
	DirectSound compatible sound card
	DirectInput compatible game controller
	56 Kbs modem


* NOTE: The OpenGL renderer may not work on all cards and/or system configurations.  Leaving the game's "Show Intro/Exit Sequences" option enabled may help eliminate some initialization problems on subsequent game launches.  If you continue to experience problems using the OpenGL renderer it is recommended that you instead use the game's default DirectX renderer. 


The following video cards have known issues:

- ATI R7000 series
	ATI R7000 series chipsets do not currently render the Track Specular Highlights option properly.

- ATI R8000 and R9000 series
	Catalyst 3.0 or earlier drivers have both DirectX and OpenGL issues, but the current beta driver has fixed all known DirectX issues and most of the OpenGL issues.  The next official Catalyst driver release should resolve the remaining OpenGL issues.  Additionally on 8500 cards the backfire effect may appear to come from the center of the 3D car model instead of the driver's side exhaust pipes.

- Intel I845 on-board Video
	Current video driver (.3317) has issues with NR2003 in full-screen mode.  It is recommended to run DirectX in windowed mode until Intel releases updated drivers to allow full-screen modes to function properly.

- Matrox Parhelia
	The Matrox 1.03 drivers have OpenGL issues which have been fixed in 1.04 drivers.  Unfortuntely the 1.04 drivers have introduced some DirectX issues.  Until the 1.05 drivers are released it is recommended to use the 1.03 drivers with DirectX and the 1.04 drivers with OpenGL.

Matrox G400 and G500 series
	Matrox's latest 'beta' drivers are recommended, especially for Win98/ME users.

- NVIDIA Geforce4 MX
	The Geforce4 MX chipset boards have a known crash under DirectX when Car Detail is set to High and the on-car Shadows are enabled.  An NVIDIA driver release post-41.09 is being targeted to resolve the issue.

- NVIDIA 2X and Quinunox Antialiasing
	When using 2X Quinunox Antialiasing you may experience garbled graphics if the game's on-car shadows option is enabled.  This appears to be a diver issue, which NVIDIA will hopefully be able to address.  Until that time it is recommended that on-car shadows not be used in conjunction with 2X or Quinunox Antialiasing.
 

The following sound cards have known issues:

- Diamond Monster Sound MX 300 and other Aureal Vortex 2 based cards
	3D Sound may have significant issues and is not recommended.

- Creative Labs SB Live! and Audigy
	The cockpit engine sound may not always play when 3D sound is enabled.

- Turtle Beach Santa Cruz
	User interface audio may not function on initial run of the game prior to entering the car to drive.  Enabling 3D sound on the Options screen should fix the problem.

- Nforce2 on-board sound
	nForce2 motherboards using on-board audio has known issues with pre-2.0 drivers.  2.0 or later drivers should resolve the issue.  People using third-party audio cards should make sure the on-board audio has been disabled in the BIOS, and NR2003 should run fine.  If using the ASUS nForce2 Deluxe motherboard and having issues with motherboard audio, you can try to copy the ASUS audio .INF file into the same directory as the nForce 2.0 universal driver set's audio drivers and re-run the audio setup/installer program.  


II. GENERAL TECHNICAL ISSUES
============================


STARTING THE GAME

1) From the Windows Start menu, select Programs\Papyrus\NASCAR Racing 2003 Season Demo.
4) If this is the first time launching the game the 3D Configuration program will launch.
5) Use the 3D Configuration program to select the desired Renderer, Display Device, and Game Resolution.
6) After the 3D Configuration completes, the game will automatically launch.


16-BIT VS. 32-BIT COLOR

Because of the large amount of textures used in NASCAR® Racing 2003 Season Demo, it is recommended that 32-bit color only be used on video cards with 64 MB or more texture memory.  Note that even for 64 MB cards 16-bit color will likely result in significantly better performance.


TEXTURE MEMORY DETECTION

As part of the 3D Configuration test NASCAR® Racing 2003 Season Demo will attempt to detect the total amount of texture memory available on your video card.  Note that as you increase the video resolution more memory is required for the frame buffer resulting in less for textures.

If you would like to try running the game with a higher setting, you may manually edit the "TextureSetSize" value (in bytes) in the game's REND_D3D.INI (for Direct3D) or REND_OGL.INI (for OpenGL).  Increasing this value above the detected value may prevent the game from dropping mip levels as more textures are loaded, but note that setting too large of a value may result in SIGNIFICANT performance hits as textures begin to swap in and out of memory.


ANISOTROPIC FILTERING

A problem with the way polygons are drawn is that as you look at the polygon at low angles the texture tends to get very blurry. You can see this particularly in a car racing game, as the armco, fences, road surface and grass are usually at very low angles. Anisotropic filtering is a neat trick that can help the texture look better at these low angles. If your video card and drivers support this feature, you will be able to enable Anisotropic Filtering by selecting "Extreme" from the Texture Filtering Quality drop-down of on the game's Graphics Options screen.

As part of the 3D Configuration test, NASCAR® Racing 2003 Season Demo will detect the maximum levels of anisotropic filtering that your video card supports.  This will be recorded in the "AnisotropicLevel" value in the game's REND_D3D.INI (for Direct3D) or REND_OGL.INI (for OpenGL).  Valid values are powers of 2, where 1 or 0 = none, 2 = 1 level, 4 = 2 levels, 8 = 3 levels, 16 = 4 levels, etc.

For example, GeForce1 and Geforce2 cards can do 1 level of anisotropy (2^1=2) which is reported as "AnisotropicLevel=2".  GeForce3 cards can do 3 levels of anisotropy (2^3=8) which is reported as "AnisotropicLevel=8".  Setting this value too high is harmless, it will only apply as much anisotropy as the drivers claim they can support.


MOUSE ISSUES

Using animated mouse cursors can create cursor anomalies in NASCAR® Racing 2003 Season Demo.  If you encounter problems, restore your windows mouse cursor to its default settings.  Additionally some users may encounter problems using the hardware mouse cursor.  If this occurs, it is recommended that you re-run the 3D Configuration Test and check the "Use Software Cursor" checkbox to use the game's software mouse cursor instead.


SOUND ISSUES

If you find that you have no sound in the game, it may be necessary to go to the Audio tab of your Windows Multimedia Control Panel and select the proper playback device.  You may also want to disable the "Use only preferred devices" option if it is currently enabled.  Additionally there are a couple of CORE.INI variables which improve the quality of sound on some sound cards.  The default values are as follows:

	[Sound]
	allow_buffer_recreation=1
	enable_3d_interpolation=1
	force_default_buffer_size=0

You can set allow_buffer_recreation to 0 to disable sound buffer re-creation, which may ever so slightly improve performance, but at the cost of quality for some sound cards.  For example, some cards such as Aureal Vortex2 based cards don't seem to work very well when this is not enabled.

When 3d sound is enabled, positions of newly played sounds take some time to reach their destination.  On some system this may result in sounds being played loudly for a brief moment, even though they *should* have a low volume given their distance from the listener.  The enable_3d_interpolation setting can help to work around this problem.  If a system properly (instantly) sets the 3d position of a sound, then this solution, when enabled, might make the sound seem to "fade-in", so setting this to 0 would be called for in those systems.

The force_default_buffer_size setting default sound buffer read-ahead size to a given value, defined in 1/36 second increments, which may help sound issues on Win2000 machines. 


USING MICROSOFT GAME VOICE OR OTHER VOICE CHAT PROGRAMS

By default NASCAR® Racing 2003 Season Demo will run at highest priority.  This is perfectly fine for most users, however if you experience problems using Microsoft's Game Voice or other similar programs you may need to force NASCAR® Racing 2003 Season Demo to run at a lower priority by adding a "-kh0" (that's dash K H Zero) command line parameter to the shortcut:

	"C:\Papyrus\NASCAR Racing 2003 Season Demo\NR2003Demo.exe" -kh0


III. GENERAL GAME ISSUES  
========================

CREATING A PLAYER

When NASCAR® Racing 2003 Season Demo is first launched you will be taken to the Controls screen where you will calibrate and assign your driving controls.  Once this has been done, you'll be able to hit the track in either Testing or Single Player mode.  Note that if you wish to customize your player, you will first need to visit the Player Info screen where you can fill in the First and Last Name fields and select the car you wish to drive.


DIRECTINPUT JOYSTICK DRIVER

If you have a DirectInput joystick/wheel and you can't calibrate it in NASCAR® Racing 2003 Season Demo, exit the game and ensure that the device is properly set up and calibrated in the Windows Game Controllers Control Panel applet.


OPTIMIZED JOYSTICK DRIVER

In addition to DirectInput support, NASCAR® Racing 2003 Season Demo also includes an optimized joystick driver.  The optimized driver may provide more precise joystick input than can be obtained with DirectInput, but is only compatible with standard PC joysticks.  Note that joysticks which are designed for DirectInput, such as USB or ForceFeedback controllers, will not work with the Optimized driver.


GEARBOX SELECTION

NASCAR® Racing 2003 Season Demo offers 3 different gearbox choices.  In Sequential mode controls assigned to the Shift Up and Shift Down commands are used to change gears in the following sequence: reverse, neutral, 1st, 2nd, 3rd, 4th.  In Direct Selection mode, you may assign a control to shift directly to any gear, or to neutral.  The H Pattern mode is intended for use only with controllers featuring a gated shifter such as the ActLabs RS Shifter.  In this mode, you may shift directly to any of the forward gears as well as to reverse gear.  Once the shifter is moved out of an assigned gate, the transmission will shift to neutral automatically.


DRIVING AIDS

"Anti-Lock Brakes" equips your car with an anti-lock braking system.  While anti-lock brakes make the car easier for the novice driver to control, the experienced driver will be able to brake more efficiently with this option turned off.  NOTE: If braking has been assigned to a button or a key rather than a controller axis, this aid will be turned on and cannot be turned off.  Otherwise, the car would be very difficult to control while braking.

"Automatic Shifting" equips your car with an automatic transmission.  The automatic transmission shifts more slowly than its manual counterpart, resulting in slower lap times for the experienced driver.

"Automatic Clutch" equips your car with an automatic clutch.  While the manual clutch can provide greater shifting precision, it requires proper heel and toe downshift technique and therefore is recommended only for experienced users.  The manual clutch is not available if Automatic Shifting has been selected.

"Traction Control" equips your car with a traction control system.  While traction control makes the car easier for the novice driver to control, the experienced driver will be able to accelerate and corner more efficiently with this option turned off.  NOTE: If the throttle has been assigned to a button or a key rather than a controller axis, this aid will be turned on and cannot be turned off.  Otherwise, the car would be very difficult to control while accelerating.

"Show Ideal Racing Line" causes the ideal racing line around the track to be highlighted.  This line is a guide for the fastest racing line around the track, and is color coded red and green to indicate braking and acceleration zones.  The aid may be turned on or off while in the car by pressing the R key.

"Stability Control" equips your car with a magical device that tries to help the car to not get too sideways. While this makes the driving experience less frustrating for a novice driver, the experienced driver will be able to corner more efficiently with this option turned off.

"Steering Assistance" makes it more difficult to spin the car. This aid is particularly useful for novice drivers and for those who are steering with buttons or the keyboard, but disabling it will provide greater steering precision. NOTE: The level of steering assistance (0-100%) can be set through the Advanced Controller Options dialog.


KEYBOARD DRIVING CONTROLS

By default NASCAR® Racing 2003 Season Demo only allows keyboard driving controls to be assigned to the numeric pad keys so as to prevent them from interfering with the in-car chat functionality.  Many laptop users may not have numeric pads, so it is possible to override this and allow any of the normal keyboard keys to be assigned as driving controls.  Note that, for example, if you were to assign throttle to the B key, that you would not be able to type the letter [b/B] in a chat message while you were out driving.  Each time you pressed the B key, you would engage the throttle.  You can enable this feature in the Advanced Controller Options dialog on the game's controls screen.


SPEED SENSITIVE STEERING

By default, NASCAR® Racing 2003 Season Demo uses a speed-sensitive steering ratio such that at low speeds your steering ratio will be set to somewhere between 7:1 and the ratio defined in your car setup.  NASCAR® Racing 2003 Season Demo does this to make it possible to exit your pit stall when pit road is crowded.  You can disable this feature in the Advanced Controller Options dialog on the game's controls screen.


CAR SETUPS

Each players' car setups in are stored in individual track directories located in "Papyrus\NASCAR Racing 2003 Season Demo\Players\Player__Name\Setups".


TAKING SCREENSHOTS

At any time within the game you may press the PrintScreen button on your keyboard to take a screenshot.  These will be saved into your NASCAR® Racing 2003 Season Demo directory as sequentially numbered TGA files (NR2003ss001.TGA).  These files may be viewed in most 3rd party image viewers.


SAVING AND VIEWING REPLAYS

Replays can be saved from the Race Weekend screen by clicking on the folder icon under the 3D window.  You will be prompted for a filename.  To view the replay later, or to view replays which you have obtained from other players, select View Replay from the Main Menu.  Replays are stored in the Replay directory in the "Papyrus\NASCAR Racing 2003 Season Demo" directory.  To view replays obtained from other players, simply copy them into the Replay directory before starting the game.


REPLAY CONTROLS KEYBOARD SHORTCUTS

	C - Change to Next Camera
	V - Change Focus to Next Driver
	CTRL+N - Unfocus Current Camera from Driver	
	CTRL+V - Change Focus Back to Player Car
	SHIFT+C - Change to Previous Camera
	SHIFT+V - Change Focus to Previous Driver
	Keypad1 (END) - Fast Forward to End
	Keypad4 (Left Arrow) - Frame Rewind
	Keypad5 - Play/Pause
	Keypad6 (Right Arrow) - Frame Advance
	Keypad7 (Home) - Rewind to Start
	Keypad8 - Slow Motion Mode
	SHIFT+Keypad4 - Rewind
	SHIFT+Keypad6 - Fast Forward
	Keypad. (Del) - Switch to Live Feed Mode
	S - Display Standings (Full-screen replay only)
	Space - Toggle On-screen Display of Replay Controls

Note that all of the replay keypad shortcuts listed above may not function properly if NumLock is enabled on your keyboard.  If you experience problems, it is recommended that you turn off NumLock.


DRIVING CONTROLS KEYBOARD SHORTCUTS

	ESC - Open ESC menu (Use Arrows and ENTER to Navigate)
	F1 through F9 - Pit Service Controls (Use Arrows and SPACE to Navigate)
	PageUp & PageDown - Change Driving Views
	PauseBreak - Pause Game
	PrintScreen - Take Screen Shot
	F - Toggle Framerate Counter
	G - Toggle Gauges in External Driving Views
	H - Display Keyboard Shortcuts
	M - Toggle Mirror Detail Level
	N - Toggle Car Interior Display in Mirror
	O - Toggle Trackside Object Detail Level
	S - Toggle Speed/Gear/Flag Indicator
	V - Change Focus to Next Driver (Car must be stopped)
	CTRL+V - Change Focus Back to Player Car
	SHIFT+V - Change Focus to Previous Driver (Car must be stopped)
	CTRL+I - Toggle Lap Info Messages
	CTRL+L - Check Leader Position
	SHIFT+R - Return to Pit
	SHIFT+T - View/Reset Tachometer Telltale


PITTING

When pitting, use the animated pit sign as a guide to position the car for an optimal stop.  If you are too far forward in the stall or not close enough to the sign you will not receive service, and in order to receive left side tires you must take care to not stop too close to the inside pit wall.


COMMAND LINE OVERRIDE FOR GAME .INI SETTINGS

You can override any of NASCAR® Racing 2003 Season Demo's .INI file options from the command line.  The command line overrides will not be saved to the .INI file, so there is no need to backup the .INI file.  The format of a command line override is as follows...

	-ko"numeric_id:section_name:key_name:value"

...where...

numeric_id is the ID of the .INI file that contains the value to be overridden.  The mapping is as follows:

	0  = CORE.INI,
	10 = APP.INI
	20 = PLAYER.INI
	40 = TRACK.INI
	50 = ADDRESS.INI

section_name is the name of the section within the .INI file in which the key exists.  [PLAYER], for example.  The brackets ([, and ]) should not be specified.

key_name is the name of the key.  lastPlayer, for example.

Lets say you want to be able to launch the game and have it automatically switch to one of multiple players you have created.  To do this, you would need to override the lastPlayer key in the [Player] section of APP.INI.  So if you had two players, John Smith and Fred Jones, you could create separate shortcuts to launch the game for each:

"C:\Papyrus\NASCAR Racing 2003 Season Demo\NR2003Demo.exe" -ko"10:player:lastPlayer:Smith__John"
"C:\Papyrus\NASCAR Racing 2003 Season Demo\NR2003Demo.exe" -ko"10:player:lastPlayer:Jones__Fred"

The first command line would launch NASCAR® Racing 2003 Season Demo with the player John Smith.  The second command line would NASCAR® Racing 2003 Season Demo with the player Fred Jones.


CONTROLLING REPLAY MEMORY

By default NASCAR® Racing 2003 Season Demo will try to use a much free memory as is available for replays.  This should be fine for most users, however if you find that you need to force this to a larger value to save longer replays, or wish to force it to a smaller value if performance is suffering, you may edit the "replayMemoryOverride" value in [Replay] section of CORE.INI.  This value is in KB, so for a 64MB replay buffer you would set this value to 65,536 (64MB x 1024KB/MB).


TEXTURE COMPRESSION IN THE PAINT SHOP

By default, NASCAR® Racing 2003 Season Demo's Paint Shop will save files using DXTC (DirectX Texture Compression).  This reduces the texture memory requirements for the car textures by a nearly 4:1 margin, allowing more high detailed car textures to fit in the same amount of memory.  If you would prefer that the Paint Shop not compress the car textures when they are saved, edit the save_textures_with_compression line in your PLAYER.INI, changing the 1 to a 0:

	[Paintkit]
	save_textures_with_compression=1	; Enable texture compression on saved textures.


-----------------------------------------------------------------------
Sierra Entertainment's end user license agreement, limited warranty and return policy is set forth in the EULA.txt, found on the CD, and is also available during the install of the product.

Copyright ((c)2003 Sierra Entertainment)  
(c)1998-2003 Sierra Entertainment, Inc. 
Sierra is a trademark of Sierra Entertainment.