#NoTrayIcon
#Region ;**** Directives created by AutoIt3Wrapper_GUI ****
#AutoIt3Wrapper_Change2CUI=y
#EndRegion ;**** Directives created by AutoIt3Wrapper_GUI ****

Opt("WinTitleMatchMode", -2)

;1 = Window exists
;2 = Window is visible
;4 = Window is enabled
;8 = Window has focus
;16 = Window is minimized
;32 = Window is maximized

if $CmdLine[0] = 1 Then

	Local $hWnd = WinGetHandle("[REGEXPTITLE:(?i)" & $CmdLine[1] & "]")
	If Not $hWnd Then
		ConsoleWrite("0")
		Exit
	EndIf

	Local $iState = WinGetState($hWnd)

	ConsoleWrite($iState)
	Exit

Else

	ConsoleWrite("0")
	Exit

EndIf


