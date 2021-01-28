[UserThemeBackground]
Meter=Shape
Shape=Rectangle 0,210,300,40 | Fill Color #NEUTRAL# | StrokeWidth 0 
X=60
Y=300

[Theme1BackgroundClickZone]
Meter=Shape
Shape=Rectangle 0,0, 145, 200 | Fill Color 18213D | StrokeWidth 0
X=60
Y=300
LeftMouseUpAction=#ApplyTheme1#

[Theme1AdClickZone]
Meter=Shape
Shape=Rectangle 155,0, 145, 95 | Fill Color 18213D | StrokeWidth 0
X=60
Y=300
LeftMouseUpAction=["https://zeppe.li/latest"]

[Theme2BackgroundClickZone]
Meter=Shape
Shape=Rectangle 310,0, 140, 200 | Fill Color 40769B | StrokeWidth 0
X=60
Y=300
LeftMouseUpAction=#ApplyTheme2#

[Theme2AdClickZone]
Meter=Shape
Shape=Rectangle 155,105, 145, 95 | Fill Color 40769B | StrokeWidth 0
X=60
Y=300
LeftMouseUpAction=["https://twitter.com/justcacto"]

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