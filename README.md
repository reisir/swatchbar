# SwatchBar
SwatchBar Rainmeter skin. Displays colour swatches in your taskbar, for easy cross application use.

Cacto's pastel theme by [@JustCacto](https://twitter.com/JustCacto)

![SwatchBar Screenshot](./@Resources/Images/swatchbar.png)

# Usage

## Double click the + to open settings!

Swatch controls: 
 * Left-Click to copy the colour HEX to your clipboard.
 * Right-Click a swatch to make it the colour in your clipboard.
 * Middle-Click a swatch to delete it.

Adding a swatch: 
 * Left-Click on + to add a swatch from the clipboard.

Changing + and the + background colour:
 * Right-Click the + to change the + colour.
 * Middle-Click the + to change the background colour.

# Installation

## Chocolatey and Git Bash

	choco install rainmeter -y
	cd $USERPROFILE/Documents/Rainmeter/skins
	git clone https://github.com/sceleri/swatchbar.git

## Manual installation 

* Download installer from [rainmeter.net](https://rainmeter.net) 
* Download the newest .rmskin from [releases](https://github.com/sceleri/swatchbar/releases)

# TO-DO
 * [x] Add translation support?
   * Impossible due to the settings skin layout
 * [x] Make an option to reset exluding themes.
 * [x] Make swatchbar constantly align itself.
   * [x] Make alignment toggleable.
 * [x] Remove "Apply" button since it's now redundant in all cases.
 * [x] Position the program detection InputText better.
 * [x] Move the plus/minus +/- signs in settings.inc around the option.
	* Like this: - WIDTH + 
 * [x] Make program detection easily toggleable from the settings.
 * [x] Turn alignment images into shapes.
 * [x] Implement a better reset.
 * [x] Get rid of loader.ps1 & SwatchBar\Loader.ini
 * [x] Move settings.ini inc files to @Resources
 * [x] Comment the code for once
 * [x] Revise instructions.inc
