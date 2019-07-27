#!/bin/sh
cat /etc/passwd | cut -d : -f 1 | grep -v "^#" | sed -n "n;p" | rev | sort -r | sed -n "$FT_LINE1 , $FT_LINE2"p | tr "\n" "," | sed "s/,/, /g" | sed -E "s/, $/./"
echo ""
