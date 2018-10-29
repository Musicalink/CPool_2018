#!/bin/bash
cut -d ':' -f 5 | cut -d ' ' -f2 | grep "^$1" | wc -l
