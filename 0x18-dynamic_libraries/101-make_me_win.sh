#!/bin/bash
wget -p .. https://raw.githubusercontent.comgithub.com/Charles130-Anderson/alx-low_level_programming/master/0x18-dynamic_libraries/libtst.so
export LD_PRELOAD="$PWD/../libtst.so"
