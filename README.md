# SwatchBar
SwatchBar Rainmeter skin. Displays colour swatches in your taskbar, for easy cross application use.

Cacto's pastel theme by @ JustCacto

![SwatchBar Screenshot](./@Resources/Images/swatchbar.png)

# Usage

Swatch controls: 
 * Left-Click to copy the colour HEX to your clipboard.
 * Right-Click a swatch to make it the colour in your clipboard.
 * Middle-Click a swatch to delete it.

Adding a swatch: 
 * Left-Click on + to add a swatch from the clipboard.

Changing + and the + backgrounds colour:
 * Right-Click the + to change the + colour.
 * Middle-Click the + to change the background colour.

# Installation

 1. Prerequisites ([Rainmeter](http://rainmeter.net))
	 a. [Chocolatey](https://chocolatey.org/)
		```choco install rainmeter -y```
	 b. Download installer from [rainmeter.net](http://rainmeter.net) 
 2. SwatchBar 
	 a. [Git Bash](https://gitforwindows.org/)
		```
		cd $USERPROFILE/Documents/Rainmeter/skins
		git clone https://github.com/sceleri/swatchbar.git
		```
	 b. Wait for a release

# TO-DO
 * [x] Write a better readme.md
	* [x] Like install instructions etc.
	* [x] Maybe some usage instructions too ?
 * [x] Get rid of loader.ps1 & SwatchBar\Loader.ini
 * [x] Move settings.ini inc files to @Resources
 * [x] Figure out if distributing Cubano is legal or not, its included in my
	   Adobe subscription. "Includes usage in both personal and commercial projects"
	   Yeah no, still can't embed in applications aka share the font file... 
	   I'll wait for a cease and desist.
 * [x] Comment the code for once
 * [ ] Revise instructions.inc
 * [ ] Move the plus/minus +/- signs in settings.inc around the option.
	* Like this: - WIDTH + 
 * [x] Test if relative addresses work for github readme.md 
	* Hey it works :D
 * [x] Move alignment.inc MouseActions to bangs.inc
    * Used a MeterStyle, they work better