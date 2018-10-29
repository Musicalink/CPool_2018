#!/bin/bash
blih -u maxence.carpentier@epitech.eu repository create $1
blih -u maxence.carpentier@epitech.eu repository setacl $1 ramassage-tek r
blih -u maxence.carpentier@epitech.eu repository getacl $1

