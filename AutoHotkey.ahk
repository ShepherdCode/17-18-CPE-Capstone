; IMPORTANT INFO ABOUT GETTING STARTED: Lines that start with a
; semicolon, such as this one, are comments.  They are not executed.

; This script has a special filename and path because it is automatically
; launched when you run the program directly.  Also, any text file whose
; name ends in .ahk is associated with the program, which means that it
; can be launched simply by double-clicking it.  You can have as many .ahk
; files as you want, located in any folder.  You can also run more than
; one ahk file simultaneously and each will get its own tray icon.

; SAMPLE HOTKEYS: Below are two sample hotkeys.  The first is Win+Z and it
; launches a web site in the default browser.  The second is Control+Alt+N
; and it launches a new Notepad window (or activates an existing one).  To
; try out these hotkeys, run AutoHotkey again, which will load this file.

#z::Run www.autohotkey.com

^!n::
IfWinExist Untitled - Notepad
WinActivate
else
Run Notepad
return


; Note: From now on whenever you run AutoHotkey directly, this script
; will be loaded.  So feel free to customize it to suit your needs.

; Please read the QUICK-START TUTORIAL near the top of the help file.
; It explains how to perform common automation tasks such as sending
; keystrokes and mouse clicks.  It also explains more about hotkeys.

^!t::
WinWait, untitled.txt - Cube Explorer 5.13 QTM, 
IfWinNotActive, untitled.txt - Cube Explorer 5.13 QTM, , WinActivate, untitled.txt - Cube Explorer 5.13 QTM, 
WinWaitActive, untitled.txt - Cube Explorer 5.13 QTM, 
MouseClick, left,  876,  338
Sleep, 5000
MouseClick, left,  0,  0
Sleep, 50
MouseClick, left,  897,  340
Sleep, 5000
MouseClick, left,  0,  0
Sleep, 50
MouseClick, left,  896,  318
Sleep, 5000
MouseClick, left,  0,  0
Sleep, 50
MouseClick, left,  911,  319
Sleep, 5000
MouseClick, left,  0,  0
Sleep, 50
MouseClick, left,  915,  325
Sleep, 5000
MouseClick, left,  0,  0
Sleep, 50
MouseClick, left,  902,  310
Sleep, 5000
MouseClick, left,  0,  0
Sleep, 50
MouseClick, left,  708,  385
Sleep, 5000
MouseClick, left,  0,  0
Sleep, 50
WinWait, untitled.txt - Cube Explorer 5.13 QTM, 
IfWinNotActive, untitled.txt - Cube Explorer 5.13 QTM, , WinActivate, untitled.txt - Cube Explorer 5.13 QTM, 
WinWaitActive, untitled.txt - Cube Explorer 5.13 QTM, 
MouseClick, left,  24,  39
Sleep, 100
MouseClick, left,  43,  83
Sleep, 100
WinWait, Save As, 
IfWinNotActive, Save As, , WinActivate, Save As, 
WinWaitActive, Save As, 
MouseClick, left,  545,  370
Sleep, 100
WinWait, Confirm Save As, 
IfWinNotActive, Confirm Save As, , WinActivate, Confirm Save As, 
WinWaitActive, Confirm Save As, 
MouseClick, left,  241,  106
Sleep, 100














