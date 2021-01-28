[Variables]
TitleRegExp=.*Adobe.*
CosmeticName=Adobe
Exists=0x1
Visible=0x2
Enabled=0x4
Focus=0x8
Minimized=0x10
Maximized=0x20

[MeasureUpdate]
Measure=Calc
Formula=1
UpdateDivider=1
OnUpdateAction=[!CommandMeasure MeasureWindow "Run"]

[MeasureWindow]
;JSmorley rules
Measure=Plugin
Plugin=RunCommand
Program="#@#Addons\WindowState.exe"
Parameter=""#TitleRegExp#""
OutputType=ANSI
UpdateDivider=1
FinishAction=[!EnableMeasureGroup States]

[MeasureExists]
Measure=Calc
Group=States
Formula=[MeasureWindow] & #Exists# = #Exists# ? 1 : -1
Disabled=1
UpdateDivider=1
DynamicVariables=1

[MeasureVisible]
Measure=Calc
Group=States
Formula=[MeasureWindow] & #Visible# = #Visible# ? 1 : -1
Disabled=1
UpdateDivider=1
DynamicVariables=1

[HideSwatchBar]
Measure=Calc
Formula=MeasureExists + MeasureVisible
IfCondition=HideSwatchBar = 2
IfTrueAction=!ShowFade
IfFalseAction=!HideFade
UpdateDivider=1