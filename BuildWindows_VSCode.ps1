Write-Output("Starting setup...")
$ROOT = $PWD
$Folder = $PWD.Path + "\build-vs-proj"
if (Test-Path -Path $Folder) {
    Write-Output("Build exists!")
    Remove-Item -LiteralPath "$Folder" -Force -Recurse
} else {
    Write-Output("Build does not exist!")
}
New-Item -ItemType Directory -Force -Path $Folder
Write-Output("In:" + $Folder)
Set-Location $Folder
Write-Output("Starting conan install")
conan install .. --build=missing
Write-Output("Cmake build")
#Write-Output("In:" + $ROOT)
#Set-Location $ROOT
cmake .. -G "Visual Studio 17 2022"
cmake --build .. --config Release
Set-Location $ROOT