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

[InstructionsButton]
Meter=String
Text=?
MeterStyle=TextStyle
StringAlign=Center
X=460
LeftMouseUpAction=#ShowInstructions#

; AutoFillToggle and AutoTile use an epic hack called
; a conditional, basically if the meter is not supposed
; to be displayed it yeets itself outside of the skin.
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

[WidthBackground]
Meter=Shape
Shape=Rectangle 0,0, 300, 40 | Fill Color #TEXTBACK# | StrokeWidth 0
Shape2=Rectangle 0,50, 300, 40 | Fill Color #TEXTBACK# | StrokeWidth 0
Shape3=Rectangle 0,100, 300, 40 | Fill Color #TEXTBACK# | StrokeWidth 0
Shape4=Rectangle 0,150, 250, 40 | Fill Color #SEMIGREEN# | StrokeWidth 0
Shape5=Rectangle 260,150, 40, 40 | Fill Color #NEUTRAL# | StrokeWidth 0
X=60
Y=100

[WidthAdjust]
Meter=String
Text=Width
MeterStyle=TextStyle
; X=(210 - (([WidthAdjust:W] + [WidthPlus:W] + 5 + [WidthMinus:W] + 5) / 2))
X=(210 - ([WidthAdjust:W] / 2))
Y=100
DynamicVariables=1

[WidthPlus]
Meter=String
Text=+
MeterStyle=TextStyle
FontColor=#GREEN#
X=(210 + ([WidthAdjust:W] / 2))
DynamicVariables=1
Y=0r
LeftMouseUpAction=#WidthPlusFive#

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

[HeightAdjust]
Meter=String
Text=Height
MeterStyle=TextStyle
;X=(210 - (([HeightAdjust:W] + [HeightPlus:W] + 5 + [HeightMinus:W] + 5) / 2))
X=(210 - ([HeightAdjust:W] / 2))
Y=150
DynamicVariables=1

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

[HeightPlus]
Meter=String
Text=+
MeterStyle=TextStyle
FontColor=#GREEN#
X=(210 + ([HeightAdjust:W] / 2))
Y=0r
DynamicVariables=1
LeftMouseUpAction=#HeightPlusFive#

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

; [ProgramDetectionFontColor]
; Measure=Calc
; IfCondition=#IgnoreProgramDetection# = 1
; IfTrueAction=!SetOption DisableProgramDetection FontColor "#FontColor#77"
; IfFalseAction=!SetOption DisableProgramDetection FontColor "#FontColor#"

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

[UnLockMeter]
Meter=String
MeterStyle=TextStyle
FontFace=FontAwesome
LeftMouseUpAction=#UnlockHeightWidth#
Text=[\xf023]
X=17
Y=55
Hidden=#Unlock#

[LockMeter]
Meter=String
MeterStyle=TextStyle
FontFace=FontAwesome
LeftMouseUpAction=#LockHeightWidth#
Text=[\xf09c]
X=17
Y=55
Hidden=#WidthIsLocked#

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
Padding=43,2,5,0
SolidColor=#GREEN#

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