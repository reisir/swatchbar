[UserThemeBackground]
Meter=Shape
Shape=Rectangle 0,0,300,40 | Fill Color #NEUTRAL# | StrokeWidth 0 
X=60
Y=(300 + 210)
ToolTipTitle=Themes
ToolTipText=Change to user theme

[Theme1BackgroundClickZone]
Meter=Shape
Shape=Rectangle 0,0, 145, 200 | Fill Color 18213D | StrokeWidth 0
X=60
Y=300
LeftMouseUpAction=#ApplyTheme1#
ToolTipTitle=Themes
ToolTipText=Change to Sceleri's Sushi

[Theme1AdClickZone]
Meter=Shape
Shape=Rectangle 0,0, 145, 95 | Fill Color 18213D | StrokeWidth 0
X=(60 + 155)
Y=300
LeftMouseUpAction=["https://zeppe.li/latest"]
ToolTipTitle=Sponsored
ToolTipText=Sceleri's newest video

[Theme2BackgroundClickZone]
Meter=Shape
Shape=Rectangle 0,0, 140, 200 | Fill Color 40769B | StrokeWidth 0
X=(60 + 310)
Y=300
LeftMouseUpAction=#ApplyTheme2#
ToolTipTitle=Themes
ToolTipText=Change to Cacto's Pastels

[Theme2AdClickZone]
Meter=Shape
Shape=Rectangle 0,0, 145, 95 | Fill Color 40769B | StrokeWidth 0
X=(60 + 155)
Y=(300 + 105)
LeftMouseUpAction=["https://twitter.com/justcacto"]
ToolTipTitle=Sponsored
ToolTipText=Cacto's newest tweet

[ScelerisSushi]
Meter=String
Text=Sceleri's#CRLF#Sushi
MeterStyle=TextStyle
X=(60 + (145/2))
Y=305
FontColor=FC3B4C
StringAlign=Center

[CeleryFace]
Meter=Image
ImageName=#@#Images\sush.png
X=70
Y=370
W=125

[CactosPastels]
Meter=String
Text=Cacto's#CRLF#Pastels
MeterStyle=TextStyle
X=(60 + ((145/2) + (145 * 2)) + 20)
Y=425
FontColor=F7DF95
StringAlign=Center

[CactoFace]
Meter=Image
ImageName=#@#Images\cacto.png
X=(60 + ((145/2) + (145 * 2)) + 20 - 125/2)
Y=310
W=125

[CustomTheme]
Meter=String
Text=User (boring) Theme
MeterStyle=TextStyle
StringAlign=Center
Y=510
X=210
LeftMouseUpAction=#ApplyCustomTheme#

[Advertisement1]
Meter=String
Text=more#CRLF#sceleri
MeterStyle=TextStyle
X=(60 + ((145/2) + (145)) + 10)
Y=312
FontColor=FC3B4C
StringAlign=Center

[Advertisement2]
Meter=String
Text=more#CRLF#cacto
MeterStyle=TextStyle
X=(60 + ((145/2) + (145)) + 10)
Y=417
FontColor=F7DF95
StringAlign=Center