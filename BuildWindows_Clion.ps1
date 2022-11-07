Write-Output("Starting setup...")
$ROOT = $PWD
$Folder = $PWD.Path + "\cmake-build-debug"
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
Write-Output("Done.")
Set-Location $ROOT