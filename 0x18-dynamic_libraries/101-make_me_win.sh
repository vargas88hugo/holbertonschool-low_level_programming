#!/bin/bash
wget -P /tmp/ wget https://raw.githubusercontent.com/vargas88hugo/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/hack.so
export LD_PRELOAD=/tmp/hack.so
