// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information
//Thanks to  arifyan for fixing it
#pragma once

const std::string windowsAsciiArt =
      
"   ____  _____ ____   ____ _________ \n"
"  |_   \\|_   _|_  _| |_  _|  _   _  |\n"
"    |   \\ | |   \\ \\   / / |_/ | | \\_|\n" 
"    | |\\ \\| |    \\ \\ / /      | |    \n" 
"   _| |_\\   |_    \\ ' /      _| |_   \n" 
"  |_____|\\____|    \\_/      |_____|  \n" 
"                                     \n"
;


const std::string nonWindowsAsciiArt =

"   ____  _____ ____   ____ _________ \n"
"  |_   \\|_   _|_  _| |_  _|  _   _  |\n"
"    |   \\ | |   \\ \\   / / |_/ | | \\_|\n" 
"    | |\\ \\| |    \\ \\ / /      | |    \n" 
"   _| |_\\   |_    \\ ' /      _| |_   \n" 
"  |_____|\\____|    \\_/      |_____|  \n" 
"                                     \n"
;
/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
