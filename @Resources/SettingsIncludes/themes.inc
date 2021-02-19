[ThemesTitle]
Meter=String
Text=Themes
MeterStyle=TextStyle
FontColor=255,255,255
X=(40 + (440/2))
Y=300
W=440
StringAlign=Center

[Theme1BackgroundClickZone]
Meter=Shape
Shape=Rectangle 0,0, 290, 90 | Fill Color 18213D | StrokeWidth 0
X=40
Y=450
LeftMouseUpAction=#ApplyTheme1#
ToolTipTitle=Themes
ToolTipText=Change to Sceleri's Sushi

[CeleryFace]
Meter=Image
ImageName=#@#Images\sush.png
X=50
Y=455
H=80

[ScelerisSushi]
Meter=String
Text=Sceleri's#CRLF#Sushi
MeterStyle=TextStyle
X=(140 + (290 - 100)/2)
Y=(440 + 20)
FontColor=FC3B4C
StringAlign=Center

[Theme2BackgroundClickZone]
Meter=Shape
Shape=Rectangle 0,0, 290, 90 | Fill Color 40769B | StrokeWidth 0
X=40
Y=350
LeftMouseUpAction=#ApplyTheme2#
ToolTipTitle=Themes
ToolTipText=Change to Cacto's Pastels

[CactoFace]
Meter=Image
ImageName=#@#Images\cacto.png
X=(40 + (290 - 100) + 5)
Y=360
H=70
DynamicVariables=1

[CactosPastels]
Meter=String
Text=Cacto's#CRLF#Pastels
MeterStyle=TextStyle
X=(40 + (290 - 100)/2)
Y=(340 + 40 / 2)
W=(290 - [CactoFace:W] - 20)
FontColor=F7DF95
StringAlign=Center
DynamicVariables=1

[CustomTheme]
Meter=String
Text=Custom#CRLF#Theme
MeterStyle=TextStyle
StringAlign=Center
Y=350
X=410
W=140
H=100
Padding=0,40,0,0
SolidColor=#GREEN#
LeftMouseUpAction=#ApplyCustomTheme#
ToolTipTitle=Themes
ToolTipText=Change to user theme
