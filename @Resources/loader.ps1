function Update {
	$RmAPI.Bang('!ActivateConfig SwatchBar')
	$RmAPI.Bang('!Refresh SwatchBar')
	$RmAPI.Bang('[!Delay 10][!CommandMeasure PSRM Construct SwatchBar]')
}
function Re-Load {
	$RmAPI.Bang('!DeactivateConfig SwatchBar')
	$RmAPI.Bang('!ActivateConfig SwatchBar')
	$RmAPI.Bang('!RefreshApp')
	$RmAPI.Bang('!DeactivateConfig SwatchBar\loader')
}