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
    
    # Apply default themes
    $themes = $R + "Themes\"
    $custom_b = $themes + "custom_backup.inc"
    $pastels_b = $themes + "pastels_backup.inc"
    $sushi_b = $themes + "sushi_backup.inc"
    $custom = $themes + "Custom.inc"
    $pastels = $themes + "Pastels.inc"
    $sushi = $themes + "Sushi.inc"

     $RmAPI.Log($custom_b +  "==>" +  $custom)
    Copy-Item "$($custom_b)" "$($custom)"
     $RmAPI.Log($pastels_b + "==>" + $pastels)
    Copy-Item "$($pastels_b)" "$($pastels)"
     $RmAPI.Log($sushi_b +  "==>" +  $sushi)
    Copy-Item "$($sushi_b)" "$($sushi)"

    # Load the construct script into current scope
    Set-ExecutionPolicy -Scope Process -ExecutionPolicy Bypass
    $construct = $R + "construct.ps1"
    . "$($construct)"

    # Refresh and rebuild
    $RmAPI.Bang('!Refresh') 
    $RmAPI.Bang('!Refresh "SwatchBar" "swatchbar.ini"') 
    Start-Sleep -milliseconds 10
    Construct

}