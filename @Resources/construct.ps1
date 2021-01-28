#Construct.ps1 - Constructs swatch meters to #@#swatches.inc
function Update {

}
function Construct {

$RmAPI.Log('Constructing swatches.inc')

	$File=$RmAPI.VariableStr("@") + "swatches.inc"
	$ColorFile="$($RmAPI.VariableStr('@') + $RmAPI.VariableStr('CurrentTheme'))"
	$SettingsFile=$RmAPI.VariableStr("@") + "settings.inc"
	$Colors=@(Get-Content $ColorFile)
	
	$Height=$RmAPI.Variable("Height")
	$Width=$RmAPI.Variable("Width")
	$Vertical=$RmAPI.Variable("Vertical")
	$PlusScale=$RmAPI.Variable("PlusScale")
	
	if ($Width -gt $Height) {
		$FontSize=$Height * ($PlusScale / 100)
	} else {
		$FontSize=$Width * ($PlusScale / 100)
	}
	
	if ($RmAPI.Variable("Vertical") -eq 0) {
		if ($RmAPI.Variable("AutoScale") -eq 1) {
			$Width=($RmAPI.Variable("SCREENAREAWIDTH") / ($Colors.length - 1))
			$TotalWidth=($RmAPI.Variable("SCREENAREAWIDTH"))
			$PlusX=$Width/2
			$PlusY="($($Height / 2) - ([Plus:H] / 2))"
		} else {
			$PlusX=$Width/2
			$PlusY="($($Height / 2) - ([Plus:H] / 2))"
			$TotalWidth=(($Colors.length - 1) * $Width)
		}
		$TotalHeight=$Height
	} else {
		if ($RmAPI.Variable("AutoScale") -eq 1) {
			$Height=($RmAPI.Variable("SCREENAREAHEIGHT") / ($Colors.length - 1))
			$TotalHeight=($RmAPI.Variable("SCREENAREAHEIGHT"))
			$PlusX=$Width/2
			$PlusY="($($Height / 2) - ([Plus:H] / 2))"
		} else {
			$PlusX=$Width/2
			$PlusY="($($Height / 2) - ([Plus:H] / 2))"
			$TotalHeight=(($Colors.length - 1) * $Height)
		}
		$TotalWidth=$Width
	}

	$Index=0
	$Colors | ForEach-Object { 
	if($Index -eq 0) { $Content += @"
[Swatch$Index]
Meter=Shape
Shape=Rectangle 0,0,$Width,$Height | Fill Color $_ | Strokewidth 0
LeftMouseUpAction=[!CommandMeasure PSRM "Add"]

"@
	}
	if ($Index -eq 1) { $Content += @"
[Plus]
Meter=String
Text=+
AntiAlias=1
AccurateText=1
FontFace=Cubano
FontColor=$_
FontSize=$FontSize
Y=$PlusY
X=$PlusX
StringAlign=Center
DynamicVariables=1
RightMouseUpAction=[!CommandMeasure "PSRM" "Add($Index)"]
RightMouseDoubleClickAction=[!CommandMeasure "PSRM" "Add(0)"]
LeftMouseDoubleClickAction=[!ActivateConfig "SwatchBar\Settings"][!SetClip " "]
ToolTipText=Add a swatch from clipboard

"@
	}
if ($Index -gt 1) { $Content += @"
[Swatch$Index]
Meter=Shape
Shape=Rectangle 0,0,$Width,$Height | Fill Color $_ | Strokewidth 0
RightMouseUpAction=[!CommandMeasure "PSRM" "Add($Index)"]
MiddleMouseUpAction=[!CommandMeasure "PSRM" "Remove($Index)"]
LeftMouseUpAction=[!SetClip "$_"]
ToolTipText=$_

"@
	if ($Vertical -eq 0) { $Content += @"
X=($Width * ($Index - 1)) `n
"@
	} else { $Content += @"
Y=($Height * ($Index - 1)) `n
"@
	}
}
	$Index++
	}
	$Content | Out-File -FilePath $File
	$RmAPI.Bang("[!WriteKeyValue Variables TotalWidth $($TotalWidth) $($SettingsFile)][!WriteKeyValue Variables TotalHeight $($TotalHeight) $($SettingsFile)]")
	$RmAPI.Bang('!Refresh SwatchBar')
	$RmAPI.Bang('!Refresh SwatchBar\Settings')
}
function Add {
param(
[parameter(Mandatory=$false)]
[string] $i
)
	$RmAPI.Log("Adding at: $($i)")
	$ColorFile="$($RmAPI.VariableStr('@') + $RmAPI.VariableStr('CurrentTheme'))"
	$Colors=@(Get-Content $ColorFile)
	$ClipBoard = powershell Get-Clipboard
	$RegexPattern = '([0-9A-Fa-f]{6})'
	$ClipBoard -match '([0-9A-Fa-f]{6})'
	if ($Matches.count -gt 0) {	
		if ($i.length -eq 0) { $Colors += $Matches[0] }
		else {
			$Colors[$i] = $Matches[0]
		}
	}
	$Colors | Out-File -FilePath $ColorFile
	Construct
}
function Remove {
param([string] $i)
	$ColorFile="$($RmAPI.VariableStr('@') + $RmAPI.VariableStr('CurrentTheme'))"
	$Colors=@(Get-Content $ColorFile)
	$temp = @()
	$Index = 0
	$Colors | ForEach-Object {
		if($Index -ne $i) {
			$temp += $Colors[$Index]
		}
		$Index++
	}
	$Colors = $temp
	$Colors | Out-File -FilePath $ColorFile
	Construct
}