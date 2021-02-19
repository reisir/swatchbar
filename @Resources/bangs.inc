[Variables]
Close = [!DeactivateConfig]
; OpenSettings = ["#@#settings.inc"]
ShowInstructions = [!WriteKeyValue "Variables" "InstructionsDismissed" 0 "#@#settings.inc"][!ActivateConfig SwatchBar\Settings instructions.ini]

; Apply refreshes both skins, waits 0 ms and runs the Construct.ps1 script.
; It needs to wait 0 ms or Construct.ps1 reads the wrong values from SwatchBar.
; If you need to press the Apply button to see changes, you might want to increase the Delay amount.
Apply = [!Refresh][!Refresh SwatchBar][!Delay 0][!CommandMeasure PSRM Construct SwatchBar]

; Incement / decrement width by 5.
WidthPlusFive = [!WriteKeyValue Variables Width "(#Width# + 5)" "#@#settings.inc"][!WriteKeyValue WidthLocker Disabled 0]#Apply#
WidthMinusFive = [!WriteKeyValue Variables Width "(#Width# - 5)" "#@#settings.inc"][!WriteKeyValue WidthLocker Disabled 0]#Apply#

; Incement / decrement height by 5.
HeightPlusFive = [!WriteKeyValue Variables Height "(#Height# + 5)" "#@#settings.inc"][!WriteKeyValue HeightLocker Disabled 0]#Apply#
HeightMinusFive = [!WriteKeyValue Variables Height "(#Height# - 5)" "#@#settings.inc"][!WriteKeyValue HeightLocker Disabled 0]#Apply#

; Scroll width bangs
ScrollWidthUp =  [!WriteKeyValue Variables Width "(#Width# + 5)" "#@#settings.inc"][!WriteKeyValue ScrollTimer Disabled 0][!WriteKeyValue ScrollTimer IfTrueAction #*ScrollWidthFinish*#][!Refresh]
ScrollWidthDown = [!WriteKeyValue Variables Width "(#Width# - 5)" "#@#settings.inc"][!WriteKeyValue ScrollTimer Disabled 0][!WriteKeyValue ScrollTimer IfTrueAction #*ScrollWidthFinish*#][!Refresh]
ScrollWidthFinish = [!WriteKeyValue ScrollTimer Disabled 1][!WriteKeyValue ScrollTimer IfTrueAction ""][!WriteKeyValue WidthLocker Disabled 0]#Apply#

; Scroll height bangs
ScrollHeightUp =  [!WriteKeyValue Variables Height "(#Height# + 5)" "#@#settings.inc"][!WriteKeyValue ScrollTimer Disabled 0][!WriteKeyValue ScrollTimer IfTrueAction #*ScrollHeightFinish*#][!Refresh]
ScrollHeightDown = [!WriteKeyValue Variables Height "(#Height# - 5)" "#@#settings.inc"][!WriteKeyValue ScrollTimer Disabled 0][!WriteKeyValue ScrollTimer IfTrueAction #*ScrollHeightFinish*#][!Refresh]
ScrollHeightFinish = [!WriteKeyValue ScrollTimer Disabled 1][!WriteKeyValue ScrollTimer IfTrueAction ""][!WriteKeyValue HeightLocker Disabled 0]#Apply#

; Unlock the width and height sliders.
UnlockHeightWidth = [!WriteKeyValue Variables WidthIsLocked "0" "#@#settings.inc"][!WriteKeyValue Variables Unlock "1" "#@#settings.inc"][!Refresh]
LockHeightWidth = [!WriteKeyValue Variables WidthIsLocked "1" "#@#settings.inc"][!WriteKeyValue Variables Unlock "0" "#@#settings.inc"][!Refresh]

; Toggle Tile / Fill tiling modes.
AutoFillOff = [!WriteKeyValue Variables AutoScale "0" "#@#settings.inc"]#Apply#
AutoFillOn = [!WriteKeyValue Variables AutoScale "1" "#@#settings.inc"]#Apply#

; Toggle Vertical / Horizontal orientation
SetVertical = [!WriteKeyValue Variables Vertical "0" "#@#settings.inc"][!WriteKeyValue Variables Horizontal "1" "#@#settings.inc"][!WriteKeyValue Variables Height #Width# "#@#settings.inc"][!WriteKeyValue Variables Width #Height# "#@#settings.inc"]#Apply#
SetHorizontal = [!WriteKeyValue Variables Horizontal "0" "#@#settings.inc"][!WriteKeyValue Variables Vertical "1" "#@#settings.inc"][!WriteKeyValue Variables Height #Width# "#@#settings.inc"][!WriteKeyValue Variables Width #Height# "#@#settings.inc"]#Apply#

; Run reset script
Reset = [!CommandMeasure ResetScript Reset "SwatchBar\Settings" "settings.ini"]
ResetThemes = [!CommandMeasure ResetScript ResetThemes "SwatchBar\Settings" "settings.ini"]

; Toggle AutoAlignment
ToggleAutoAlignment=[!WriteKeyValue Variables AutoAlign "(1 - #AutoAlign#)" "#@#settings.inc"][!Refresh "SwatchBar\Settings"][!Refresh "SwatchBar"]

; Theme bangs
ApplyTheme1 = [!WriteKeyValue Variables CurrentTheme "Themes\Sushi.inc" "#@#settings.inc"]#Apply#
ApplyTheme2 = [!WriteKeyValue Variables CurrentTheme "Themes\Pastels.inc" "#@#settings.inc"]#Apply#
ApplyCustomTheme = [!WriteKeyValue Variables CurrentTheme "Themes\Custom.inc" "#@#settings.inc"]#Apply#

; Alignment bangs
WriteMiddleCenter = [!WriteKeyValue Variables AlignHor 0 "#@#settings.inc"][!WriteKeyValue Variables AlignVer 0 "#@#settings.inc"]
WriteMiddleLeft = [!WriteKeyValue Variables AlignHor -1 "#@#settings.inc"][!WriteKeyValue Variables AlignVer 0 "#@#settings.inc"]
WriteBottomLeft = [!WriteKeyValue Variables AlignHor -1 "#@#settings.inc"][!WriteKeyValue Variables AlignVer -1 "#@#settings.inc"]
WriteBottomMiddle = [!WriteKeyValue Variables AlignHor 0 "#@#settings.inc"][!WriteKeyValue Variables AlignVer -1 "#@#settings.inc"]
WriteBottomRight = [!WriteKeyValue Variables AlignHor 1 "#@#settings.inc"][!WriteKeyValue Variables AlignVer -1 "#@#settings.inc"]
WriteMiddleRight = [!WriteKeyValue Variables AlignHor 1 "#@#settings.inc"][!WriteKeyValue Variables AlignVer 0 "#@#settings.inc"]
WriteTopRight = [!WriteKeyValue Variables AlignHor 1 "#@#settings.inc"][!WriteKeyValue Variables AlignVer 1 "#@#settings.inc"]
WriteTopMiddle = [!WriteKeyValue Variables AlignHor 0 "#@#settings.inc"][!WriteKeyValue Variables AlignVer 1 "#@#settings.inc"]
WriteTopLeft = [!WriteKeyValue Variables AlignHor -1 "#@#settings.inc"][!WriteKeyValue Variables AlignVer 1 "#@#settings.inc"]

; Move bangs
MoveTopRight = [!Move "(#SCREENAREAWIDTH# - #TotalWidth#)" "0" SwatchBar]
MoveTopMiddle = [!Move "((#SCREENAREAWIDTH# / 2) - (#TotalWidth# / 2))" "0" SwatchBar]
MoveTopLeft = [!Move "0" "0" SwatchBar]
MoveMiddleLeft = [!Move "0" "((#SCREENAREAHEIGHT# / 2) - (#TotalHeight# / 2))" SwatchBar]
MoveBottomLeft = [!Move "0" "(#SCREENAREAHEIGHT# - #TotalHeight#)" SwatchBar]
MoveBottomMiddle = [!Move "((#SCREENAREAWIDTH# / 2) - (#TotalWidth# / 2))" "(#SCREENAREAHEIGHT# - #Height#)" SwatchBar]
MoveBottomRight = [!Move "(#SCREENAREAWIDTH# - #TotalWidth#)" "(#SCREENAREAHEIGHT# - #Height#)" SwatchBar]
MoveMiddleRight = [!Move "(#SCREENAREAWIDTH# - #TotalWidth#)" "((#SCREENAREAHEIGHT# / 2) - (#TotalHeight# / 2))" SwatchBar]
MoveMiddleCenter = [!Move "((#SCREENAREAWIDTH# / 2) - (#TotalWidth# / 2))" "((#SCREENAREAHEIGHT# / 2) - (#TotalHeight# / 2))" SwatchBar]
