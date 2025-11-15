# nr2003
So this is what I am using to change what is packed in the cabs in NR2003. This is pretty much all you need to add tracks/cars/layout or whatever files so that they are there in the install.

Then I just put them with with the demo install setup.files to get around some issues with the regular setup.exe. While it should work with the regular setup.exe I am still using the demo.

These files also should have everything patched up to 1.2.0.1. 

It should also have all the cars and tracks that the patched stock game gives you (I might have added :))

So you can git clone https://github.com/kingwinkie/nr2003.git and get all you need.

Make your changes and remake the cabs that you changed with the info in the batch file then copy the cabs to the install_files directory and install with setup.exe

Download the release and i6comp.exe. Extract the updated files from the cab, make changes repack the cabs and replace them in the updated install folder. 

Or you just download the cabs folder and i6comp.exe and make you own folder structure with the updated cabs. You will probably need to make your own install as both the demo and stock setup will throw errors and while they might not led into a broken install they are still errors that will pop up on the screen and look bad.

You can even just download i6comp.exe and use your own cabs. Just don’t forget that those cabs will probably need to be updated to 1.2.0.1 to get any other series then cup. Using your own cab will also mean that you are on your own getting using it with a setup.exe.

The i6comp.exe comes with source and some documentation in the i6comp020 folder. As well there is a command line cheat sheet in i6comp.exe_help.txt

Troubleshooting

What can go wrong….

File paths 

	When you look at the folder structure some folders are nested (/Tracks/tracks/). This because how I am extracting /replacing/compressing it uses that to know where to put things, and that it goes in a folder named tracks. Then some folders like “programs files” are not nested and when installed are placed in the root install directory (ie nr2003.exe) 

So you really need to check the install to make sure the files go where you want them to go.

Folders not showing up

	If you create a folder there MUST be something in it as the setup seems not to like creating folders that are empty. That’s why there is the folder called “replay” in the program files folder as it seemed to have stopped creating it and I did look for why.

Files or anything really not showing up.

	As we are recycling a setup.exe there are things that are hard coded in the exe if it will create something or not so always look to where you a placing it. I have had issues adding folders to the root install directory, that’s why the replay folder is in the program files directory :).

All this was done on a trial and error basis so I am still changing things and the commands that we need to run, as I find out more. That is one of the reasons that I put this up to see if anyone else would care to lend a hand.

If you make changes I would like to know the whats and the whys.

Some advanced bits

	There are more files and folders in the cabs but if all you are doing is run of the mill mods you don’t need them and I have not put them here for simplicity’s sake. If you get into it where you need access to them you should be ok with getting into them, Install changes really I think.
