; All of the texts in settings.ini.
; I hope the section names are descriptive enough.

[TitleBarText]
Meter=String
Text=SwatchBar Settings
MeterStyle=TextStyle
FontColor=255,255,255
X=5
Y=1

[CloseButtonX]
Meter=String
Text=X
MeterStyle=TextStyle
StringAlign=Center
X=500
LeftMouseUpAction=#Close#
ToolTipTitle=Close settings

[InstructionsButton]
Meter=String
Text=?
MeterStyle=TextStyle
StringAlign=Center
X=460
LeftMouseUpAction=#ShowInstructions#
ToolTipTitle=Instructions
ToolTipText=Show Instructions

[TooltipToggle]
Meter=String
Text=[\xf27a]
FontFace=FontAwesome
FontColor=#FontColorRGB#,(#HideTooltips# = 1 ? 125 : 255)
MeterStyle=TextStyle
StringAlign=Center
X=420
Y=2.5
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables HideTooltips "(#HideTooltips# = 1 ? 0 : 1)" "#@#settings.inc"][!Refresh][!Refresh "SwatchBar" "swatchbar.ini"]
ToolTipTitle=Tooltips
ToolTipText=Toggle tooltips on/off

[AutoFillToggle]
Meter=String
Text=Fill
MeterStyle=TextStyle
StringAlign=Center
Y=250
X=(#AutoScale# = 1 ? 440 : 9999)
W=140
LeftMouseUpAction=#AutoFillOff#
SolidColor=#TEXTBACK#
ToolTipTitle=Tiling mode
ToolTipText=Fill

[AutoTile]
Meter=String
Text=Tile
MeterStyle=TextStyle
StringAlign=Center
X=(#AutoScale# = 0 ? 440 : 9999)
Y=250
W=140
LeftMouseUpAction=#AutoFillOn#
SolidColor=#TEXTBACK#
ToolTipTitle=Tiling mode
ToolTipText=Tile

[WidthBackground]
Meter=Shape
Shape=Rectangle 0,0, 300, 40 | Fill Color #TEXTBACK# | StrokeWidth 0
X=60
Y=100
MouseScrollDownAction=#ScrollWidthDown#
MouseScrollUpAction=#ScrollWidthUp#

[HeightBackground]
Meter=Shape
Shape=Rectangle 0,0, 300, 40 | Fill Color #TEXTBACK# | StrokeWidth 0
X=60
Y=150
MouseScrollDownAction=#ScrollHeightDown#
MouseScrollUpAction=#ScrollHeightUp#

[OtherBackgrounds]
Meter=Shape
Shape=Rectangle 0,100, 300, 40 | Fill Color #TEXTBACK# | StrokeWidth 0
Shape2=Rectangle 0,150, 250, 40 | Fill Color #SEMIGREEN# | StrokeWidth 0
Shape3=Rectangle 260,150, 40, 40 | Fill Color #NEUTRAL# | StrokeWidth 0
X=60
Y=100

[WidthAdjust]
Meter=String
Text=Width
MeterStyle=TextStyle
X=(210 - ([WidthAdjust:W] / 2))
Y=100
DynamicVariables=1
ToolTipTitle=Size
ToolTipText=Scroll to change width

[WidthPlus]
Meter=String
Text=+
MeterStyle=TextStyle
FontColor=#GREEN#
X=(210 + ([WidthAdjust:W] / 2))
DynamicVariables=1
Y=0r
LeftMouseUpAction=#WidthPlusFive#
ToolTipTitle=Size
ToolTipText=Width +5

[WidthMinus]
Meter=String
Text=-
MeterStyle=TextStyle
FontColor=#RED#
Padding=0,2,2,0
X=(210 - ([WidthAdjust:W] / 2) - 27.5)
DynamicVariables=1
Y=0r
LeftMouseUpAction=#WidthMinusFive#
ToolTipTitle=Size
ToolTipText=Width -5

[HeightAdjust]
Meter=String
Text=Height
MeterStyle=TextStyle
X=(210 - ([HeightAdjust:W] / 2))
Y=150
DynamicVariables=1
ToolTipTitle=Size
ToolTipText=Scroll to change height

[HeightMinus]
Meter=String
Text=-
MeterStyle=TextStyle
FontColor=#RED#
X=(210 - ([HeightAdjust:W] / 2) - 27.5)
Y=0r
Padding=0,2,2,0
DynamicVariables=1
LeftMouseUpAction=#HeightMinusFive#
ToolTipTitle=Size
ToolTipText=Height -5

[HeightPlus]
Meter=String
Text=+
MeterStyle=TextStyle
FontColor=#GREEN#
X=(210 + ([HeightAdjust:W] / 2))
Y=0r
DynamicVariables=1
LeftMouseUpAction=#HeightPlusFive#
ToolTipTitle=Size
ToolTipText=Height +5

[Vertical]
Meter=String
Text=Orientation: V
MeterStyle=TextStyle
X=210
Y=200
StringAlign=Center
LeftMouseUpAction=#SetVertical#
Hidden=#Horizontal#
SolidColor=#TEXTBACK#
ToolTipTitle=Orientation
ToolTipText=Vertical

[Horizontal]
Meter=String
Text=Orientation: H
MeterStyle=TextStyle
X=210
Y=200
StringAlign=Center
LeftMouseUpAction=#SetHorizontal#
Hidden=#Vertical#
SolidColor=#TEXTBACK#
ToolTipTitle=Orientation
ToolTipText=Horizontal

[ProgramDetectionRegex]
Meter=String
Text=#TitleRegExp#
MeterStyle=TextStyle
X=180
Y=250
StringAlign=Center
LeftMouseUpAction=[!CommandMeasure "MeasureInput" "ExecuteBatch 1-2"]
SolidColor=#SEMIGREEN#
DynamicVariables=1
ToolTipTitle=Program detection
ToolTipText=Change regex pattern

[MeasureInput]
Measure=Plugin
Plugin=InputText
FontFace=Cubano
FontColor=#FontColor#
SolidColor=#SEMIGREEN#
FontSize=20
TopMost=1
X=50
Y=250
H=40
W=200
DefaultValue=#TitleRegExp#
DynamicVariables=1
Command1=[!WriteKeyValue Variables TitleRegExp "$UserInput$" "#@#settings.inc"]
Command2=[!Refresh "SwatchBar\Settings" "settings.ini"][!Refresh "SwatchBar" "swatchbar.ini"]

[DisableProgramDetection]
Meter=String
Text=[\xf05b]
FontFace=FontAwesome
FontColor=#FontColorRGB#,(#IgnoreProgramDetection# = 1 ? 125 : 255)
MeterStyle=TextStyle
StringAlign=Center
X=340
Y=255
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables IgnoreProgramDetection "(#IgnoreProgramDetection# = 1 ? 0 : 1)" "#@#settings.inc"]#Apply#
ToolTipTitle=Program detection
ToolTipText=Toggle program detection on/off

[UnLockMeter]
Meter=String
MeterStyle=TextStyle
FontFace=FontAwesome
LeftMouseUpAction=#UnlockHeightWidth#
Text=[\xf023]
X=17
Y=55
Hidden=#Unlock#
ToolTipTitle=Width and height link
ToolTipText=Linked

[LockMeter]
Meter=String
MeterStyle=TextStyle
FontFace=FontAwesome
LeftMouseUpAction=#LockHeightWidth#
Text=[\xf09c]
X=17
Y=55
Hidden=#WidthIsLocked#
ToolTipTitle=Width and height link
ToolTipText=Unlinked

[WidthMeasure]
Measure=String
String=w#width#
RegExpSubstitute=1
Substitute="(.)":'\1 '
[HeightMeasure]
Measure=String
String=h#height#
RegExpSubstitute=1
Substitute="(.)":'\1#CRLF#'

[Width]
Meter=String
MeasureName=WidthMeasure
MeterStyle=TextStyle
X=67
Y=50

[Height]
Meter=String
MeasureName=HeightMeasure
MeterStyle=TextStyle
StringAlign=Center
X=29
Y=105

[Apply]
Meter=String
Text=Apply!
MeterStyle=TextStyle
LeftMouseUpAction=#Apply#
StringAlign=Right
X=510
Y=510
Padding=5,2,5,0
SolidColor=#GREEN#
ToolTipTitle=Apply
ToolTipText=Apply all changes and rebuild SwatchBar

[Reset]
Meter=String
Text=R
MeterStyle=TextStyle
StringAlign=Left
X=370
Y=510
LeftMouseUpAction=#Reset#
SolidColor=#RED#
Padding=7,2,7,3
DynamicVariables=1
H=
; H= is a functional piece of code.
; Without it the reset button is too tall.
; I don't know why.
ToolTipTitle=Reset
ToolTipText=Reset ALL settings and themes