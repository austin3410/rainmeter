[Variables]

Bands=108
BarGap=7
BarWidth=16
BarHeight=140
MinBarHeight=0
PaletteColor1=219,0,114

FFTSize=4096
FFTOverlap="(Round(#FFTSize#-(#FFTSize#/8))-14)"
FFTAttack=5
FFTDecay=30
FreqMin=16.352
FreqMax=16744.036
Sensitivity=45
; http://docs.rainmeter.net/manual-beta/plugins/audiolevel

AverageSize=4
; Average sound levels over time to provide continuity

ClipOffset=0
; Increase precision by narrowing (in dB) the range of displayed values

Colors=Wallpaper
; Single, Random, Custom, Individual, IndivRand, Wallpaper, Taskbar

ColorsPlugin=Chameleon
; None, Chameleon (Wallpaper), SysColor (Taskbar)

WallpaperColorSource=Avg
; Avg, FG1, BG1, FG2, BG2, Cycle

PaletteColor2=96,160,224
PaletteColor3=255,160,160
PaletteColor4=240,240,240

TransitionTime=12
hBlendingMultiplier=0.5
vBlendingMultiplier=1
OpacityLower=255
OpacityUpper=255
OpacityMultiplier=1

DecayEffect=1
DecayThreshold=55
DecaySustain=365
DecayDuration=635
DecayOpacityMin=3
DecayOpacityMax=255

ColorsExclude=
; Exclude ranges of random generated colors (in HSV)
; Format: "Min H - Max H, Min S - Max S, Min V - Max V|H,S,V|..."
; Example "52-74,15-100,15-100|74-84,15-80,15-95|0-52,15-80,15-95|330-360,0-0,15-95" roughly excludes yellow and brown

ModeKeyboard=0
; Requires DecayEffect=1

FirstBandIndex=1
; "0" band should be skipped for aesthetic purpose

; Environment variables for settings window/skin
SkinGroup=FountainOfColors
Config=Fountain of Colors
ConfigPath=D:\Users\Austin\Documents\Rainmeter\Skins\Fountain of Colors\Fountain of Colors.ini
WriteVariable=PaletteColor1
SetCloneColorState=[!CommandMeasure ScriptColorChanger """AddChild("[CurrentConfig]", 0)""" "Fountain of Colors"]

; Don't change these here, edit the skin file instead
Angle=180
Invert=0
Channel=Avg
Port=Output
ID=
