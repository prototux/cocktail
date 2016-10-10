#!/bin/sh
if [ "$TERM" = "linux" ]; then
  /bin/echo -e "
  \e]P0#353535
  \e]P1#e13232
  \e]P2#96cd20
  \e]P3#ddda25
  \e]P4#1e80cc
  \e]P5#d33577
  \e]P6#3ec1c5
  \e]P7#dfdfdf
  \e]P8#535e69
  \e]P9#ff3838
  \e]PA#afeb23
  \e]PB#efed51
  \e]PC#20a0e0
  \e]PD#e73a85
  \e]PE#44d7d9
  \e]PF#f5f5f5
  "
  # get rid of artifacts
  clear
fi
