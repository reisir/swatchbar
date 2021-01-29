; Use the settings skin to change settings thanks :)
[Variables]

; Regular expression used for program detection
TitleRegExp=.*Adobe.*
CosmeticName=Adobe

; SETTINGS UI COLOURS
BACKGROUND = 4d4d4d
SLIDERBACK = 79b7e2
SLIDER = ffd075
LOCKBACK = ffbc45
TEXTBACK = ffd075
FontColor = ffffff
GREEN = 9ab788
SEMIGREEN = 64827d
NEUTRAL = ccb1a6
RED = ea625c

; Current Height and Width of swatches.
; Overridden if AutoScale is true.
Height=40
Width=40

; If true user has seen and dismissed instructions.
InstructionsDismissed=1

; Unlock && !WidthIsLocked == width and height can be adjusted independently.
; Setting both to false or true will result in undocumented behaviour.
Unlock=0
WidthIsLocked=1

; Vertical && !Horizontal == SwatchBar is displayed Vertically.
; Setting both to false or true will result in undocumented behaviour.
Horizontal=1
Vertical=0

; AlignVer and AlignHor indicate the current alignment of SwatchBar.
AlignVer=-1
; 1 = Top, 0 = Middle, -1 = Bottom
AlignHor=0
; 1 = Right, 0 = Middle, -1 = Left

; TotalWidth and -Height keep track of the total width and height
; of SwatchBar for alignment purposes.
TotalWidth=720
TotalHeight=40

; Deprecated. Hopefully.
Refreshed=1

; If true, SwatchBar will scale to screen width or height.
; (Depending on orientation)
AutoScale=0

; Current theme.
CurrentTheme=Themes\Sushi.inc

; The scale of the Plus sign in %,
; you know, out of 100%
PlusScale=70
