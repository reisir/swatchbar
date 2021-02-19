[Variables]
AlignmentXOffset=(340 - (#AlignmentTotal# - 140) / 2)
AlignmentYOffset=(100 - (#AlignmentTotal# - 140) / 2)
AlignmentPadding=5
AlignmentTotal=120
AlignmentBlock=((#AlignmentTotal# - (#AlignmentPadding# * 4)) / 3 )
AlignmentItem=(#AlignmentBlock# * 0.75)
AlignmentColumn1=(#AlignmentXOffset# + (#AlignmentBlock# * 0) + (#AlignmentPadding# * 1) + ((#AlignmentBlock# - #AlignmentItem#) / 2))
AlignmentColumn2=(#AlignmentXOffset# + (#AlignmentBlock# * 1) + (#AlignmentPadding# * 2) + ((#AlignmentBlock# - #AlignmentItem#) / 2))
AlignmentColumn3=(#AlignmentXOffset# + (#AlignmentBlock# * 2) + (#AlignmentPadding# * 3) + ((#AlignmentBlock# - #AlignmentItem#) / 2))
AlignmentRow1=   (#AlignmentYOffset# + (#AlignmentBlock# * 0) + (#AlignmentPadding# * 1) + ((#AlignmentBlock# - #AlignmentItem#) / 2))
AlignmentRow2=   (#AlignmentYOffset# + (#AlignmentBlock# * 1) + (#AlignmentPadding# * 2) + ((#AlignmentBlock# - #AlignmentItem#) / 2))
AlignmentRow3=   (#AlignmentYOffset# + (#AlignmentBlock# * 2) + (#AlignmentPadding# * 3) + ((#AlignmentBlock# - #AlignmentItem#) / 2))

[Alignment]
Meter=Shape
Shape=Rectangle 340,100,140,140 | Fill Color #NEUTRAL# | StrokeWidth 0

[SetSelected]
Measure=Calc
Formula=0
IfCondition= (#AlignVer# = 1 ) && (#AlignHor# = 1 ) && (#AutoAlign# = 1)
IfCondition2=(#AlignVer# = 1 ) && (#AlignHor# = 0 ) && (#AutoAlign# = 1)
IfCondition3=(#AlignVer# = 1 ) && (#AlignHor# = -1) && (#AutoAlign# = 1)
IfCondition4=(#AlignVer# = 0 ) && (#AlignHor# = -1) && (#AutoAlign# = 1)
IfCondition5=(#AlignVer# = -1) && (#AlignHor# = -1) && (#AutoAlign# = 1)
IfCondition6=(#AlignVer# = -1) && (#AlignHor# = 0 ) && (#AutoAlign# = 1)
IfCondition7=(#AlignVer# = -1) && (#AlignHor# = 1 ) && (#AutoAlign# = 1)
IfCondition8=(#AlignVer# = 0 ) && (#AlignHor# = 1 ) && (#AutoAlign# = 1)
IfCondition9=(#AlignVer# = 0 ) && (#AlignHor# = 0 ) && (#AutoAlign# = 1)
IfTrueAction= [!SetOption TopRightShape     MeterStyle "ShapeStyle | MouseActions | Selected"][!UpdateMeter TopRightShape]     [!Redraw]
IfTrueAction2=[!SetOption TopMiddleShape    MeterStyle "ShapeStyle | MouseActions | Selected"][!UpdateMeter TopMiddleShape]    [!Redraw]
IfTrueAction3=[!SetOption TopLeftShape      MeterStyle "ShapeStyle | MouseActions | Selected"][!UpdateMeter TopLeftShape]      [!Redraw]
IfTrueAction4=[!SetOption MiddleLeftShape   MeterStyle "ShapeStyle | MouseActions | Selected"][!UpdateMeter MiddleLeftShape]   [!Redraw]
IfTrueAction5=[!SetOption BottomLeftShape   MeterStyle "ShapeStyle | MouseActions | Selected"][!UpdateMeter BottomLeftShape]   [!Redraw]
IfTrueAction6=[!SetOption BottomMiddleShape MeterStyle "ShapeStyle | MouseActions | Selected"][!UpdateMeter BottomMiddleShape] [!Redraw]
IfTrueAction7=[!SetOption BottomRightShape  MeterStyle "ShapeStyle | MouseActions | Selected"][!UpdateMeter BottomRightShape]  [!Redraw]
IfTrueAction8=[!SetOption MiddleRightShape  MeterStyle "ShapeStyle | MouseActions | Selected"][!UpdateMeter MiddleRightShape]  [!Redraw]
IfTrueAction9=[!SetOption MiddleMiddleShape MeterStyle "ShapeStyle | MouseActions | Selected"][!UpdateMeter MiddleRightShape]  [!Redraw]
IfConditionMode=1
UpdateDivider=-1

[Selected]
Color=Fill Color 3a86ff | Stroke Color 3a86ff

[Hover]
Color=Fill Color #SLIDERBACK# | Stroke Color #SLIDERBACK#

[MouseActions]
MouseOverAction=[!SetOption #CURRENTSECTION# MeterStyle "ShapeStyle | MouseActions | Hover"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# MeterStyle "ShapeStyle | MouseActions"][!UpdateMeasure SetSelected][!Delay 0][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!SetOption #CURRENTSECTION# MeterStyle "ShapeStyle | MouseActions | Selected"][!UpdateMeter #CURRENTSECTION#][!Redraw]
ToolTipTitle=Alignment

[ShapeStyle]
Triangle=0,0 | LineTo (#AlignmentItem#),(#AlignmentItem# / 10) | LineTo (#AlignmentItem# / 10),(#AlignmentItem#) | ClosePath 1
Shape=Path Triangle | StrokeWidth 0 | Fill Color ffffff | Extend Overrides, Color

[TopLeftShape]
Meter=Shape
MeterStyle=ShapeStyle | MouseActions
Overrides=Rotate 0
x=#AlignmentColumn1#
y=#AlignmentRow1#
LeftMouseUpAction=#WriteTopLeft##MoveTopLeft#[!Refresh]
ToolTipText=Top-Left

[TopMiddleShape]
Meter=Shape
MeterStyle=ShapeStyle | MouseActions
Overrides=Rotate 45
x=#AlignmentColumn2#
y=#AlignmentRow1#
LeftMouseUpAction=#WriteTopMiddle##MoveTopMiddle#[!Refresh]
ToolTipText=Top-Center

[TopRightShape]
Meter=Shape
MeterStyle=ShapeStyle | MouseActions
Overrides=Rotate 90
x=#AlignmentColumn3#
y=#AlignmentRow1#
LeftMouseUpAction=#WriteTopRight##MoveTopRight#[!Refresh]
ToolTipText=Top-Right

[MiddleRightShape]
Meter=Shape
MeterStyle=ShapeStyle | MouseActions
Overrides=Rotate 135
x=#AlignmentColumn3#
y=#AlignmentRow2#
LeftMouseUpAction=#WriteMiddleRight##MoveMiddleRight#[!Refresh]
ToolTipText=Middle-Right

[BottomRightShape]
Meter=Shape
MeterStyle=ShapeStyle | MouseActions
Overrides=Rotate 180
x=#AlignmentColumn3#
y=#AlignmentRow3#
LeftMouseUpAction=#WriteBottomRight##MoveBottomRight#[!Refresh]
ToolTipText=Bottom-Right

[BottomMiddleShape]
Meter=Shape
MeterStyle=ShapeStyle | MouseActions
Overrides=Rotate 225
x=#AlignmentColumn2#
y=#AlignmentRow3#
LeftMouseUpAction=#WriteBottomMiddle##MoveBottomMiddle#[!Refresh]
ToolTipText=Bottom-Center

[BottomLeftShape]
Meter=Shape
MeterStyle=ShapeStyle | MouseActions
Overrides=Rotate 270
x=#AlignmentColumn1#
y=#AlignmentRow3#
LeftMouseUpAction=#WriteBottomLeft##MoveBottomLeft#[!Refresh]
ToolTipText=Bottom-Left

[MiddleLeftShape]
Meter=Shape
MeterStyle=ShapeStyle | MouseActions
Overrides=Rotate 315
x=#AlignmentColumn1#
y=#AlignmentRow2#
LeftMouseUpAction=#WriteMiddleLeft##MoveMiddleLeft#[!Refresh]
ToolTipText=Middle-Left

[MiddleMiddleShape]
Meter=Shape
MeterStyle=ShapeStyle | MouseActions
Shape=Rectangle 0,0,#AlignmentItem#,#AlignmentItem# | StrokeWidth 0 | Fill Color ffffff | Extend Color, Overrides
Overrides=Rotate 0
x=#AlignmentColumn2#
y=#AlignmentRow2#
LeftMouseUpAction=#WriteMiddleCenter##MoveMiddleCenter#[!Refresh]
ToolTipText=Middle-Center
