[Variables]
Close = [!DeactivateConfig]
OpenSettings = ["#@#settings.inc"]

Apply = [!Refresh][!Refresh SwatchBar][!Delay 0][!CommandMeasure PSRM Construct SwatchBar]

AutoFillOff = [!WriteKeyValue Variables AutoScale "0" "#@#settings.inc"]#Apply#
AutoFillOn = [!WriteKeyValue Variables AutoScale "1" "#@#settings.inc"]#Apply#

WidthPlusFive = [!WriteKeyValue Variables Width "(#Width# + 5)" "#@#settings.inc"][!WriteKeyValue WidthLocker Disabled 0]#Apply#
WidthMinusFive = [!WriteKeyValue Variables Width "(#Width# - 5)" "#@#settings.inc"][!WriteKeyValue WidthLocker Disabled 0]#Apply#

HeightPlusFive = [!WriteKeyValue Variables Height "(#Height# + 5)" "#@#settings.inc"][!WriteKeyValue HeightLocker Disabled 0]#Apply#
HeightMinusFive = [!WriteKeyValue Variables Height "(#Height# - 5)" "#@#settings.inc"][!WriteKeyValue HeightLocker Disabled 0]#Apply#

SetVertical = [!WriteKeyValue Variables Vertical "0" "#@#settings.inc"][!WriteKeyValue Variables Horizontal "1" "#@#settings.inc"][!WriteKeyValue Variables Height #Width# "#@#settings.inc"][!WriteKeyValue Variables Width #Height# "#@#settings.inc"]#Apply#
SetHorizontal = [!WriteKeyValue Variables Horizontal "0" "#@#settings.inc"][!WriteKeyValue Variables Vertical "1" "#@#settings.inc"][!WriteKeyValue Variables Height #Width# "#@#settings.inc"][!WriteKeyValue Variables Width #Height# "#@#settings.inc"]#Apply#

Reset = [!WriteKeyValue Variables Vertical "0" "#@#settings.inc"][!WriteKeyValue Variables CurrentTheme "Themes\Custom.inc" "#@#settings.inc"][!WriteKeyValue Variables Horizontal "1" "#@#settings.inc"][!WriteKeyValue Variables Height "40" "#@#settings.inc"][!WriteKeyValue Variables Width "40" "#@#settings.inc"][!WriteKeyValue Variables Unlock "0" "#@#settings.inc"][!WriteKeyValue Variables WidthIsLocked "1" "#@#settings.inc"][!WriteKeyValue Variables AutoScale "0" "#@#settings.inc"]#Apply#

UnlockHeightWidth = [!WriteKeyValue Variables WidthIsLocked "0" "#@#settings.inc"][!WriteKeyValue Variables Unlock "1" "#@#settings.inc"][!Refresh]
LockHeightWidth = [!WriteKeyValue Variables WidthIsLocked "1" "#@#settings.inc"][!WriteKeyValue Variables Unlock "0" "#@#settings.inc"][!Refresh]

MouseOverAlignment =  [!SetOption #CURRENTSECTION# ImageTint "2ec4b6"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAlignment = [!SetOption #CURRENTSECTION# ImageTint ""]      [!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseDownAlignment =  [!SetOption #CURRENTSECTION# ImageTint "3a86ff"][!UpdateMeter #CURRENTSECTION#][!Redraw]