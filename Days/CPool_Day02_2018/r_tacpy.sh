#!/bin/bash
sed -n "2~2p" | cut -d':' -f 1 | rev | sort -r | sed "$MY_LINE1,$MY_LINE2!d" |  sed 's/$/,/' | tr '\n' ' ' | perl -p -e 's/, $/.\n/g'
