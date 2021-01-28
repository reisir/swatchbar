[Title]
Meter=String
Text=SwatchBar Settings
MeterStyle=TextStyle
FontColor=255,255,255
X=5
Y=1
[x]
Meter=String
Text=X
MeterStyle=TextStyle
StringAlign=Center
X=500
LeftMouseUpAction=!DeactivateConfig
[AutoFill]
Meter=String
Text=Fill
MeterStyle=TextStyle
StringAlign=Center
Y=250
X=(#AutoScale# = 1 ? 440 : 9999)
W=140
LeftMouseUpAction=[!WriteKeyValue Variables AutoScale "0" "#@#settings.inc"]
SolidColor=#TEXTBACK#
[AutoTile]
Meter=String
Text=Tile
MeterStyle=TextStyle
StringAlign=Center
X=(#AutoScale# = 0 ? 440 : 9999)
Y=250
W=140
LeftMouseUpAction=[!WriteKeyValue Variables AutoScale "1" "#@#settings.inc"]
SolidColor=#TEXTBACK#
[WidthBackground]
Meter=Shape
Shape=Rectangle 0,0, 300, 40 | Fill Color #TEXTBACK# | StrokeWidth 0
Shape2=Rectangle 0,50, 300, 40 | Fill Color #TEXTBACK# | StrokeWidth 0
Shape3=Rectangle 0,100, 300, 40 | Fill Color #TEXTBACK# | StrokeWidth 0
Shape4=Rectangle 0,150, 300, 40 | Fill Color #SEMIGREEN## | StrokeWidth 0
X=60
Y=100
[WidthAdjust]
Meter=String
Text=Width
MeterStyle=TextStyle
X=(210 - (([WidthAdjust:W] + [WidthPlus:W] + 5 + [WidthMinus:W] + 5) / 2))
Y=100
DynamicVariables=1
[WidthPlus]
Meter=String
Text=+
MeterStyle=TextStyle
FontColor=#GREEN#
X=5R
Y=0r
LeftMouseUpAction=[!WriteKeyValue Variables Width "(#Width# + 5)" "#@#settings.inc"][!WriteKeyValue WidthLocker Disabled 0][!Refresh]
[WidthMinus]
Meter=String
Text=-
MeterStyle=TextStyle
FontColor=#RED#
Padding=0,2,2,0
X=5R
Y=0r
LeftMouseUpAction=[!WriteKeyValue Variables Width "(#Width# - 5)" "#@#settings.inc"][!WriteKeyValue WidthLocker Disabled 0][!Refresh]
[HeightAdjust]
Meter=String
Text=Height
MeterStyle=TextStyle
X=(210 - (([HeightAdjust:W] + [HeightPlus:W] + 5 + [HeightMinus:W] + 5) / 2))
Y=150
DynamicVariables=1
[HeightPlus]
Meter=String
Text=+
MeterStyle=TextStyle
FontColor=#GREEN#
X=5R
Y=0r
LeftMouseUpAction=[!WriteKeyValue Variables Height "(#Height# + 5)" "#@#settings.inc"][!WriteKeyValue HeightLocker Disabled 0][!Refresh]
[HeightMinus]
Meter=String
Text=-
MeterStyle=TextStyle
FontColor=#RED#
X=5R
Y=0r
Padding=0,2,2,0
LeftMouseUpAction=[!WriteKeyValue Variables Height "(#Height# - 5)" "#@#settings.inc"][!WriteKeyValue HeightLocker Disabled 0][!Refresh]
[Vertical]
Meter=String
Text=Orientation: V
MeterStyle=TextStyle
X=210
Y=200
StringAlign=Center
LeftMouseUpAction=[!WriteKeyValue Variables Vertical "0" "#@#settings.inc"][!WriteKeyValue Variables Horizontal "1" "#@#settings.inc"][!WriteKeyValue Variables Height #Width# "#@#settings.inc"][!WriteKeyValue Variables Width #Height# "#@#settings.inc"]
Hidden=#Horizontal#
SolidColor=#TEXTBACK#
[Horizontal]
Meter=String
Text=Orientation: H
MeterStyle=TextStyle
X=210
Y=200
StringAlign=Center
LeftMouseUpAction=[!WriteKeyValue Variables Horizontal "0" "#@#settings.inc"][!WriteKeyValue Variables Vertical "1" "#@#settings.inc"][!WriteKeyValue Variables Height #Width# "#@#settings.inc"][!WriteKeyValue Variables Width #Height# "#@#settings.inc"]
Hidden=#Vertical#
SolidColor=#TEXTBACK#
[OpenSettingsFile]
Meter=String
Text=Settings.inc
MeterStyle=TextStyle
X=210
Y=250
StringAlign=Center
LeftMouseUpAction=["#@#settings.inc"]
SolidColor=#SEMIGREEN#
[UnLockMeter]
Meter=String
MeterStyle=TextStyle
FontFace=FontAwesome
LeftMouseUpAction=[!WriteKeyValue Variables WidthIsLocked "0" "#@#settings.inc"][!WriteKeyValue Variables Unlock "1" "#@#settings.inc"][!Refresh]
Text=[\xf023]
X=17
Y=55
Hidden=#Unlock#
[LockMeter]
Meter=String
MeterStyle=TextStyle
FontFace=FontAwesome
LeftMouseUpAction=[!WriteKeyValue Variables WidthIsLocked "1" "#@#settings.inc"][!WriteKeyValue Variables Unlock "0" "#@#settings.inc"][!Refresh]
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
LeftMouseUpAction=[!Refresh SwatchBar][!Delay 10][!CommandMeasure PSRM Construct SwatchBar]
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
LeftMouseUpAction=[!WriteKeyValue Variables Vertical "0" "#@#settings.inc"][!WriteKeyValue Variables CurrentTheme "Themes\Custom.inc" "#@#settings.inc"][!WriteKeyValue Variables Horizontal "1" "#@#settings.inc"][!WriteKeyValue Variables Height "40" "#@#settings.inc"][!WriteKeyValue Variables Width "40" "#@#settings.inc"][!WriteKeyValue Variables Unlock "0" "#@#settings.inc"][!WriteKeyValue Variables WidthIsLocked "1" "#@#settings.inc"][!WriteKeyValue Variables AutoScale "0" "#@#settings.inc"]
SolidColor=#RED#
Padding=7,2,7,3
DynamicVariables=1
H=