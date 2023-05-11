#!/bin/sh

nitrogen --restore &
sxhkd -c ~/.dwm/sxhkd/sxhkdrc &
picom &

dwmblocks &
