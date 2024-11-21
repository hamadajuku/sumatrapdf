/* Copyright 2022 the SumatraPDF project authors (see AUTHORS file).
   License: GPLv3 */

/* styling for About/Properties windows */

struct MainWindow;

// begin{hamadajuku}
//constexpr const char* kLeftTextFont = "Arial";
constexpr const char* kLeftTextFont = "Meiryo UI";
// end{hamadajuku}
constexpr int kLeftTextFontSize = 14;

// begin{hamadajuku}
//constexpr const char* kRightTextFont = "Arial Black";
constexpr const char* kRightTextFont = "Meiryo UI";
// end{hamadajuku}
constexpr int kRightTextFontSize = 14;

void ShowAboutWindow(MainWindow*);

void DrawAboutPage(MainWindow* win, HDC hdc);

char* GetStaticLinkTemp(Vec<StaticLinkInfo*>& linkInfo, int x, int y, StaticLinkInfo** info);

constexpr const char* kLinkOpenFile = "<File,Open>";
constexpr const char* kLinkShowList = "<View,ShowList>";
constexpr const char* kLinkHideList = "<View,HideList>";

void DrawHomePage(MainWindow* win, HDC hdc);
