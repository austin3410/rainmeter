[Rainmeter]
Update=0
DefaultUpdateDivider=-1
Group=FountainOfColors

ContextTitle="Options..."
ContextAction=[!ActivateConfig "Fountain of Colors\SettingsWindowTest"]

OnRefreshAction=[!WriteKeyValue Variables Angle #Angle# "#@#Variables.inc"][!WriteKeyValue Variables Invert #Invert# "#@#Variables.inc"][!WriteKeyValue Variables Channel #Channel# "#@#Variables.inc"][!WriteKeyValue Variables Port #Port# "#@#Variables.inc"][!WriteKeyValue Variables ID "#ID#" "#@#Variables.inc"][!WriteKeyValue Variables Config "#CURRENTCONFIG#" "#@#Variables.inc"][!WriteKeyValue Variables ConfigPath "#CURRENTPATH##CURRENTFILE#" "#@#Variables.inc"][!ActivateConfig "#ROOTCONFIG#\Initialize"]

[MeasureAudio]
Measure=Plugin
Plugin=AudioLevel
Port=Output
ID=
FFTSize=4096
FFTOverlap=3570
FFTAttack=5
FFTDecay=30
Bands=108
FreqMin=16.352
FreqMax=16744.036 
Sensitivity=45
UpdateDivider=1

[Include]
@Include=#@#Bands.inc

@Include2=#@#SkinRotation.inc
@Include3=
@Include4=#@#ColorChanger.inc
@Include5=
