function Update {

}

function Reset { 

    $R = $RmAPI.VariableStr('@')
    $settings = $R + 'settings.inc'

    # Reset variables
    $RmAPI.Bang([string]::Format('!WriteKeyValue Variables Vertical "0" "{0}"', $settings) )
    $RmAPI.Bang([string]::Format('!WriteKeyValue Variables CurrentTheme "Themes\Custom.inc" "{0}"', $settings) )
    $RmAPI.Bang([string]::Format('!WriteKeyValue Variables Horizontal "1" "{0}"', $settings) )
    $RmAPI.Bang([string]::Format('!WriteKeyValue Variables Height "40" "{0}"', $settings) )
    $RmAPI.Bang([string]::Format('!WriteKeyValue Variables Width "40" "{0}"', $settings) )
    $RmAPI.Bang([string]::Format('!WriteKeyValue Variables Unlock "0" "{0}"', $settings) )
    $RmAPI.Bang([string]::Format('!WriteKeyValue Variables WidthIsLocked "1" "{0}"', $settings) )
    $RmAPI.Bang([string]::Format('!WriteKeyValue Variables AutoScale "0" "{0}"', $settings) )
    $RmAPI.Bang([string]::Format('!WriteKeyValue Variables HideTooltips "0" "{0}"', $settings) )
    $RmAPI.Bang([string]::Format('!WriteKeyValue Variables AutoAlign "1" "{0}"', $settings) )
    
    Refresh

}

function ResetThemes {

    $R = $RmAPI.VariableStr('@')
    $settings = $R + 'settings.inc'

    $RmAPI.Bang([string]::Format('!WriteKeyValue Variables CurrentTheme "Themes\Custom.inc" "{0}"', $settings) )

    # Apply default themes
    $themes = $R + "Themes\"
    $custom_b = $themes + "custom_backup.inc"
    $pastels_b = $themes + "pastels_backup.inc"
    $sushi_b = $themes + "sushi_backup.inc"
    $custom = $themes + "Custom.inc"
    $pastels = $themes + "Pastels.inc"
    $sushi = $themes + "Sushi.inc"

    Copy-Item "$($custom_b)" "$($custom)"
    Copy-Item "$($pastels_b)" "$($pastels)"
    Copy-Item "$($sushi_b)" "$($sushi)"

    Refresh

}

function Refresh {
    $RmAPI.Bang('[!Refresh "SwatchBar\Settings" "settings.ini"][!Refresh "SwatchBar" "swatchbar.ini"][!Delay 0][!CommandMeasure "PSRM" "Construct" "SwatchBar" "swatchbar.ini"]') 
}
