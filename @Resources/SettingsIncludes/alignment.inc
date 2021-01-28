[Alignment]
Meter=Shape
Shape=Rectangle 370,100,140,140 | Fill Color #NEUTRAL# | StrokeWidth 0
[conditions]
Measure=Calc
Formula=0
IfCondition= (#AlignVer# = 1 ) && (#AlignHor# = 1 )
IfCondition2=(#AlignVer# = 1 ) && (#AlignHor# = 0 )
IfCondition3=(#AlignVer# = 1 ) && (#AlignHor# = -1)
IfCondition4=(#AlignVer# = 0 ) && (#AlignHor# = -1)
IfCondition5=(#AlignVer# = -1) && (#AlignHor# = -1)
IfCondition6=(#AlignVer# = -1) && (#AlignHor# = 0 )
IfCondition7=(#AlignVer# = -1) && (#AlignHor# = 1 )
IfCondition8=(#AlignVer# = 0 ) && (#AlignHor# = 1 )
IfTrueAction= [!SetOption TopRight MeterStyle Selected][!UpdateMeter TopRight][!Redraw]
IfTrueAction2=[!SetOption TopMiddle MeterStyle Selected][!UpdateMeter TopMiddle][!Redraw]
IfTrueAction3=[!SetOption TopLeft MeterStyle Selected][!UpdateMeter TopLeft][!Redraw]
IfTrueAction4=[!SetOption MidLeft MeterStyle Selected][!UpdateMeter MidLeft][!Redraw]
IfTrueAction5=[!SetOption BotLeft MeterStyle Selected][!UpdateMeter BotLeft][!Redraw]
IfTrueAction6=[!SetOption BotMiddle MeterStyle Selected][!UpdateMeter BotMiddle][!Redraw]
IfTrueAction7=[!SetOption BotRight MeterStyle Selected][!UpdateMeter BotRight][!Redraw]
IfTrueAction8=[!SetOption MidRight MeterStyle Selected][!UpdateMeter MidRight][!Redraw]
[White]
ImageTint=ffffff
[Selected]
ImageTint=3a86ff
[Hover]
ImageTint=2ec4b6
[MouseActions]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageTint "2ec4b6"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageTint ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!SetOption #CURRENTSECTION# ImageTint "3a86ff"][!UpdateMeter #CURRENTSECTION#][!Redraw]
[TopRight]
Meter=Image
ImageName=#@#Images\diag.png
ImageFlip=Vertical
ImageRotate=0
W=40
H=40
x=460
y=110
MeterStyle=MouseActions
LeftMouseUpAction=[!WriteKeyValue Variables AlignHor 1 "#@#settings.inc"][!WriteKeyValue Variables AlignVer 1 "#@#settings.inc"][!Move "(#SCREENAREAWIDTH# - #TotalWidth#)" "0" SwatchBar][!Refresh]
[TopMiddle]
Meter=Image
ImageName=#@#Images\hori.png
ImageFlip=Vertical
ImageRotate=0
W=40
H=40
x=-40r
y=0r
MeterStyle=MouseActions
LeftMouseUpAction=[!WriteKeyValue Variables AlignHor 0 "#@#settings.inc"][!WriteKeyValue Variables AlignVer 1 "#@#settings.inc"][!Move "((#SCREENAREAWIDTH# / 2) - (#TotalWidth# / 2))" "0" SwatchBar][!Refresh]
[TopLeft]
Meter=Image
ImageName=#@#Images\diag.png
ImageFlip=Both
ImageRotate=0
W=40
H=40
x=-40r
y=0r
MeterStyle=MouseActions
LeftMouseUpAction=[!WriteKeyValue Variables AlignHor -1 "#@#settings.inc"][!WriteKeyValue Variables AlignVer 1 "#@#settings.inc"][!Move "0" "0" SwatchBar][!Refresh]
[MidLeft]
Meter=Image
ImageName=#@#Images\hori.png
ImageFlip=None
ImageRotate=90
W=40
H=40
x=0r
y=40r
MeterStyle=MouseActions
LeftMouseUpAction=[!WriteKeyValue Variables AlignHor -1 "#@#settings.inc"][!WriteKeyValue Variables AlignVer 0 "#@#settings.inc"][!Move "0" "((#SCREENAREAHEIGHT# / 2) - (#TotalHeight# / 2))" SwatchBar][!Refresh]
[BotLeft]
Meter=Image
ImageName=#@#Images\diag.png
ImageFlip=None
ImageRotate=90
W=40
H=40
x=0r
y=40r
MeterStyle=MouseActions
LeftMouseUpAction=[!WriteKeyValue Variables AlignHor -1 "#@#settings.inc"][!WriteKeyValue Variables AlignVer -1 "#@#settings.inc"][!Move "0" "(#SCREENAREAHEIGHT# - #TotalHeight#)" SwatchBar][!Refresh]
[BotMiddle]
Meter=Image
ImageName=#@#Images\hori.png
ImageFlip=None
ImageRotate=0
W=40
H=40
x=40r
y=0r
MeterStyle=MouseActions
LeftMouseUpAction=[!WriteKeyValue Variables AlignHor 0 "#@#settings.inc"][!WriteKeyValue Variables AlignVer -1 "#@#settings.inc"][!Move "((#SCREENAREAWIDTH# / 2) - (#TotalWidth# / 2))" "(#SCREENAREAHEIGHT# - #Height#)" SwatchBar][!Refresh]
[BotRight]
Meter=Image
ImageName=#@#Images\diag.png
ImageFlip=None
ImageRotate=0
W=40
H=40
x=40r
y=0r
MeterStyle=MouseActions
LeftMouseUpAction=[!WriteKeyValue Variables AlignHor 1 "#@#settings.inc"][!WriteKeyValue Variables AlignVer -1 "#@#settings.inc"][!Move "(#SCREENAREAWIDTH# - #TotalWidth#)" "(#SCREENAREAHEIGHT# - #Height#)" SwatchBar][!Refresh]
[MidRight]
Meter=Image
ImageName=#@#Images\hori.png
ImageFlip=None
ImageRotate=-90
W=40
H=40
x=0r
y=-40r
MeterStyle=MouseActions
LeftMouseUpAction=[!WriteKeyValue Variables AlignHor 1 "#@#settings.inc"][!WriteKeyValue Variables AlignVer 0 "#@#settings.inc"][!Move "(#SCREENAREAWIDTH# - #TotalWidth#)" "((#SCREENAREAHEIGHT# / 2) - (#TotalHeight# / 2))" SwatchBar][!Refresh]