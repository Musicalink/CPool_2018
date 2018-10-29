#!/bin/bash
if [ -z "$1" ];
then
cut -d';' -f 3 | wc -w
    else
cut -d';' -f 3 | grep -i $1 | wc -w
fi
