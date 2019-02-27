// Copyright (c) 2018, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information

#pragma once

const std::string windowsAsciiArt =
      "_____             _  _  _         _ "        
     "|  _  |           (_)| || |       | |"        
     "| | | | ___   ___  _ | || |  __ _ | |_   ___ "
     "| | | |/ __| / __|| || || | / _` || __| / _ \"
     "\ \_/ /\__ \| (__ | || || || (_| || |_ |  __/"
     "\___/ |___/ \___||_||_||_| \__,_| \__| \___|";
                                             
                                             

const std::string nonWindowsAsciiArt = 
      "\n                                                                            \n"
          "_____             _  _  _         _ "        
         "|  _  |           (_)| || |       | |"        
         "| | | | ___   ___  _ | || |  __ _ | |_   ___ "
         "| | | |/ __| / __|| || || | / _` || __| / _ \"
         "\ \_/ /\__ \| (__ | || || || (_| || |_ |  __/"
          "\___/ |___/ \___||_||_||_| \__,_| \__| \___|";
/* Windows has some characters it won't display in a terminal. If your ascii
   art works fine on Windows and Linux terminals, just replace 'asciiArt' with
   the art itself, and remove these two #ifdefs and above ascii arts */
#ifdef _WIN32
const std::string asciiArt = windowsAsciiArt;
#else
const std::string asciiArt = nonWindowsAsciiArt;
#endif
