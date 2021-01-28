[Variables]
Close = [!DeactivateConfig]
OpenSettings = ["#@#settings.inc"]
ShowInstructions = [!WriteKeyValue "Variables" "InstructionsDismissed" 0 "#@#settings.inc"][!ActivateConfig SwatchBar\settings instructions.ini]

; Apply refreshes both skins, waits 0 ms and runs the Construct.ps1 script.
; It needs to wait 0 ms or Construct.ps1 reads the wrong values from SwatchBar.
; If you need to press Apply twice, you might want to increase the Delay amount.
Apply = [!Refresh][!Refresh SwatchBar][!Delay 0][!CommandMeasure PSRM Construct SwatchBar]

; Incement / decrement width by 5.
WidthPlusFive = [!WriteKeyValue Variables Width "(#Width# + 5)" "#@#settings.inc"][!WriteKeyValue WidthLocker Disabled 0]#Apply#
WidthMinusFive = [!WriteKeyValue Variables Width "(#Width# - 5)" "#@#settings.inc"][!WriteKeyValue WidthLocker Disabled 0]#Apply#

; Incement / decrement height by 5.
HeightPlusFive = [!WriteKeyValue Variables Height "(#Height# + 5)" "#@#settings.inc"][!WriteKeyValue HeightLocker Disabled 0]#Apply#
HeightMinusFive = [!WriteKeyValue Variables Height "(#Height# - 5)" "#@#settings.inc"][!WriteKeyValue HeightLocker Disabled 0]#Apply#

; Unlock the width and height sliders.
UnlockHeightWidth = [!WriteKeyValue Variables WidthIsLocked "0" "#@#settings.inc"][!WriteKeyValue Variables Unlock "1" "#@#settings.inc"][!Refresh]
LockHeightWidth = [!WriteKeyValue Variables WidthIsLocked "1" "#@#settings.inc"][!WriteKeyValue Variables Unlock "0" "#@#settings.inc"][!Refresh]

; Toggle Tile / Fill tiling modes.
AutoFillOff = [!WriteKeyValue Variables AutoScale "0" "#@#settings.inc"]#Apply#
AutoFillOn = [!WriteKeyValue Variables AutoScale "1" "#@#settings.inc"]#Apply#

; Toggle Vertical / Horizontal orientation
SetVertical = [!WriteKeyValue Variables Vertical "0" "#@#settings.inc"][!WriteKeyValue Variables Horizontal "1" "#@#settings.inc"][!WriteKeyValue Variables Height #Width# "#@#settings.inc"][!WriteKeyValue Variables Width #Height# "#@#settings.inc"]#Apply#
SetHorizontal = [!WriteKeyValue Variables Horizontal "0" "#@#settings.inc"][!WriteKeyValue Variables Vertical "1" "#@#settings.inc"][!WriteKeyValue Variables Height #Width# "#@#settings.inc"][!WriteKeyValue Variables Width #Height# "#@#settings.inc"]#Apply#

; Could probably use a better way of resetting than this.
Reset = [!WriteKeyValue Variables Vertical "0" "#@#settings.inc"][!WriteKeyValue Variables CurrentTheme "Themes\Custom.inc" "#@#settings.inc"][!WriteKeyValue Variables Horizontal "1" "#@#settings.inc"][!WriteKeyValue Variables Height "40" "#@#settings.inc"][!WriteKeyValue Variables Width "40" "#@#settings.inc"][!WriteKeyValue Variables Unlock "0" "#@#settings.inc"][!WriteKeyValue Variables WidthIsLocked "1" "#@#settings.inc"][!WriteKeyValue Variables AutoScale "0" "#@#settings.inc"]#Apply#

; Theme bangs
ApplyTheme1 = [!WriteKeyValue Variables CurrentTheme "Themes\Sushi.inc" "#@#settings.inc"]#Apply#
ApplyTheme2 = [!WriteKeyValue Variables CurrentTheme "Themes\Pastels.inc" "#@#settings.inc"]#Apply#
ApplyCustomTheme = [!WriteKeyValue Variables CurrentTheme "Themes\Custom.inc" "#@#settings.inc"]#Apply#