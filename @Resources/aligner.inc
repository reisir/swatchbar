[Aligner]
Measure=Calc
Disabled=(1 - #AutoAlign#)
IfCondition= (#AlignVer# = 1 ) && (#AlignHor# = 1 )
IfCondition2=(#AlignVer# = 1 ) && (#AlignHor# = 0 )
IfCondition3=(#AlignVer# = 1 ) && (#AlignHor# = -1)
IfCondition4=(#AlignVer# = 0 ) && (#AlignHor# = -1)
IfCondition5=(#AlignVer# = -1) && (#AlignHor# = -1)
IfCondition6=(#AlignVer# = -1) && (#AlignHor# = 0 )
IfCondition7=(#AlignVer# = -1) && (#AlignHor# = 1 )
IfCondition8=(#AlignVer# = 0 ) && (#AlignHor# = 1 )
IfCondition9=(#AlignVer# = 0 ) && (#AlignHor# = 0 )
IfTrueAction= #MoveTopRight#
IfTrueAction2=#MoveTopMiddle#
IfTrueAction3=#MoveTopLeft#
IfTrueAction4=#MoveMiddleLeft#
IfTrueAction5=#MoveBottomLeft#
IfTrueAction6=#MoveBottomMiddle#
IfTrueAction7=#MoveBottomRight#
IfTrueAction8=#MoveMiddleRight#
IfTrueAction9=#MoveMiddleCenter#
IfConditionMode=1
