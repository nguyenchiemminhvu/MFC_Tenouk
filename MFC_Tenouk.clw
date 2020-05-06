; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=DialogNCMV
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MFC_Tenouk.h"
LastPage=0

ClassCount=6
Class1=MainApp
Class2=MainDoc
Class3=MainView
Class4=MainFrame

ResourceCount=3
Resource1=IDR_MAINFRAME
Resource2=IDD_ABOUTBOX
Class5=CAboutDlg
Class6=DialogNCMV
Resource3=IDD_DIALOG_NCMV

[CLS:MainApp]
Type=0
HeaderFile=MFC_Tenouk.h
ImplementationFile=MFC_Tenouk.cpp
Filter=N

[CLS:MainDoc]
Type=0
HeaderFile=MainDoc.h
ImplementationFile=MainDoc.cpp
Filter=N

[CLS:MainView]
Type=0
HeaderFile=MainView.h
ImplementationFile=MainView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=MainView


[CLS:MainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=MFC_Tenouk.cpp
ImplementationFile=MFC_Tenouk.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=MainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_MRU_FILE1
Command6=ID_APP_EXIT
Command7=ID_EDIT_UNDO
Command8=ID_EDIT_CUT
Command9=ID_EDIT_COPY
Command10=ID_EDIT_PASTE
Command11=ID_APP_ABOUT
CommandCount=11

[ACL:IDR_MAINFRAME]
Type=1
Class=MainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_UNDO
Command5=ID_EDIT_CUT
Command6=ID_EDIT_COPY
Command7=ID_EDIT_PASTE
Command8=ID_EDIT_UNDO
Command9=ID_EDIT_CUT
Command10=ID_EDIT_COPY
Command11=ID_EDIT_PASTE
Command12=ID_NEXT_PANE
Command13=ID_PREV_PANE
CommandCount=13

[DLG:IDD_DIALOG_NCMV]
Type=1
Class=DialogNCMV
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_RICHEDIT_1,RICHEDIT,1350631552

[CLS:DialogNCMV]
Type=0
HeaderFile=DialogNCMV.h
ImplementationFile=DialogNCMV.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=DialogNCMV

