; All of the texts in settings.ini.
; I hope the section names are descriptive enough.

[TitleBarText]
Meter=String
Text=SwatchBar Settings
MeterStyle=TextStyle
FontColor=255,255,255
X=(40 + (440/2))
Y=50
W=440
StringAlign=Center

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

[UnLockMeter]
Meter=Shape
Shape=Rectangle 0,0,40,90 | Fill Color #SLIDERBACK# | StrokeWidth 0 | Stroke Color 0,0,0,0
Shape2=Path ChainPart | Offset 7.5,7.5 | Extend Attributes
Shape3=Path ChainPart | Rotate 180 | Offset 7.5,50 | Extend Attributes
Shape4=Line 12.5,15,12.5,60 | Offset 7.5,7.5 | Extend Attributes
ChainPart=5,30 | LineTo 5,10 | ArcTo 10,5,5,5 | LineTo 15,5 | ArcTo 20,10,5,5 | LineTo 20,30 
Attributes=StrokeWidth 4 | Stroke Color #FontColor# | StrokeStartCap Round | StrokeEndCap Round
LeftMouseUpAction=#UnlockHeightWidth#
X=40
Y=100
W=40
H=90
Hidden=#Unlock#
ToolTipTitle=Width and height link
ToolTipText=Linked

[LockMeter]
Meter=Shape
Shape=Rectangle 0,0,40,90 | Fill Color #SLIDERBACK# | StrokeWidth 0 | Stroke Color 0,0,0,0
Shape2=Path ChainPart | Offset 7.5,7.5 | Extend Attributes
Shape3=Path ChainPart | Rotate 180 | Offset 7.5,50 | Extend Attributes
ChainPart=5,30 | LineTo 5,10 | ArcTo 10,5,5,5 | LineTo 15,5 | ArcTo 20,10,5,5 | LineTo 20,30 
Attributes=StrokeWidth 4 | Stroke Color #FontColor# | StrokeStartCap Round | StrokeEndCap Round
SolidColor=#SLIDERBACK#
LeftMouseUpAction=#LockHeightWidth#
X=40
Y=100
W=40
H=90
Hidden=(#Unlock# - 1)
ToolTipTitle=Width and height link
ToolTipText=Unlinked

[WidthBackground]
Meter=Shape
Shape=Rectangle 0,0, 240, 40 | Fill Color #TEXTBACK# | StrokeWidth 0
X=90
Y=100
MouseScrollDownAction=#ScrollWidthDown#
MouseScrollUpAction=#ScrollWidthUp#

[WidthAdjust]
Meter=String
Text=Width
MeterStyle=TextStyle
X=(90 + (240/2) - ([WidthAdjust:W] / 2))
Y=100
DynamicVariables=1
ToolTipTitle=Size
ToolTipText=Scroll to change width

[WidthPlus]
Meter=String
Text=+
MeterStyle=TextStyle
FontColor=#GREEN#
X=(90 + (240/2) + ([WidthAdjust:W] / 2))
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
X=(90 + (240/2) - ([WidthAdjust:W] / 2) - 27.5)
DynamicVariables=1
Y=0r
LeftMouseUpAction=#WidthMinusFive#
ToolTipTitle=Size
ToolTipText=Width -5

[HeightBackground]
Meter=Shape
Shape=Rectangle 0,0, 240, 40 | Fill Color #TEXTBACK# | StrokeWidth 0
X=90
Y=150
MouseScrollDownAction=#ScrollHeightDown#
MouseScrollUpAction=#ScrollHeightUp#

[HeightAdjust]
Meter=String
Text=Height
MeterStyle=TextStyle
X=(90 + (240/2) - ([HeightAdjust:W] / 2))
Y=150
DynamicVariables=1
ToolTipTitle=Size
ToolTipText=Scroll to change height

[HeightMinus]
Meter=String
Text=-
MeterStyle=TextStyle
FontColor=#RED#
X=(90 + (240/2) - ([HeightAdjust:W] / 2) - 27.5)
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
X=(90 + (240/2) + ([HeightAdjust:W] / 2))
Y=0r
DynamicVariables=1
LeftMouseUpAction=#HeightPlusFive#
ToolTipTitle=Size
ToolTipText=Height +5

[Vertical]
Meter=String
Text=Vertical
MeterStyle=TextStyle
Y=200
X=140
W=200
StringAlign=Center
LeftMouseUpAction=#SetVertical#
Hidden=#Horizontal#
SolidColor=#TEXTBACK#
ToolTipTitle=Orientation
ToolTipText=Vertical

[Horizontal]
Meter=String
Text=Horizontal
MeterStyle=TextStyle
Y=200
X=140
W=200
StringAlign=Center
LeftMouseUpAction=#SetHorizontal#
Hidden=#Vertical#
SolidColor=#TEXTBACK#
ToolTipTitle=Orientation
ToolTipText=Horizontal

[AutoFillToggle]
Meter=String
Text=Fill
MeterStyle=TextStyle
StringAlign=Center
Y=200
X=(#AutoScale# = 1 ? 290 : 9999)
W=80
LeftMouseUpAction=#AutoFillOff#
SolidColor=#TEXTBACK#
ToolTipTitle=Tiling mode
ToolTipText=Fill

[AutoTile]
Meter=String
Text=Tile
MeterStyle=TextStyle
StringAlign=Center
Y=200
X=(#AutoScale# = 0 ? 290 : 9999)
W=80
LeftMouseUpAction=#AutoFillOn#
SolidColor=#TEXTBACK#
ToolTipTitle=Tiling mode
ToolTipText=Tile

[ProgramDetectionRegex]
Meter=String
Text=#TitleRegExp#
MeterStyle=TextStyle
Y=250
X=210
W=240
SolidColor=#SEMIGREEN#
StringAlign=Center
LeftMouseUpAction=[!CommandMeasure "MeasureInput" "ExecuteBatch 1-2"]
SolidColor=#SEMIGREEN#
DynamicVariables=1
ToolTipTitle=Program detection
ToolTipText=Change regex pattern used to detect active windows.

[MeasureInput]
Measure=Plugin
Plugin=InputText
FontFace=Cubano
FontColor=#FontColor#
SolidColor=#SEMIGREEN#
FontSize=20
TopMost=1
X=95
Y=255
H=30
W=190
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
X=60
Y=250
W=40
H=34
Padding=0,6,0,0
SolidColor=#NEUTRAL#
DynamicVariables=1
LeftMouseUpAction=[!WriteKeyValue Variables IgnoreProgramDetection "(#IgnoreProgramDetection# = 1 ? 0 : 1)" "#@#settings.inc"]#Apply#
ToolTipTitle=Program detection
ToolTipText=Toggle program detection on/off

[AutoAlignment]
Meter=String
Text=Auto
X=(#AutoAlign# = 1 ? 410 : 9999)
Y=250
W=140
MeterStyle=TextStyle
StringAlign=Center
SolidColor=#TEXTBACK#
ToolTipTitle=Alignment
ToolTipText=Automatically align SwatchBar when changes are made.
LeftMouseUpAction=#ToggleAutoAlignment#

[ManualAlignment]
Meter=String
Text=Manual
X=(#AutoAlign# = 0 ? 410 : 9999)
Y=250
W=140
MeterStyle=TextStyle
StringAlign=Center
SolidColor=#TEXTBACK#
ToolTipTitle=Alignment
ToolTipText=Manually position SwatchBar.
LeftMouseUpAction=#ToggleAutoAlignment#

[Reset]
Meter=String
Text=Reset
MeterStyle=TextStyle
StringAlign=Center
X=410
Y=500
W=140
SolidColor=#RED#
LeftMouseUpAction=#ResetThemes#
MiddleMouseUpAction=#Reset#
ToolTipTitle=Reset
ToolTipText=Left-Click: Resets all themes.#CRLF#Middle-Click: Reset all settings.
