#!/bin/bash
make -C ..
cp ../rush2 .
clear
echo "Expected : German"
./rush2 "Wie herrlich leuchtet Mir die Natur Wie glänzt die Sonne Wie 
lacht die Flur"


echo -e "\n\nExpected : Spanish"
./rush2 "En trenes o en gacelas me llegaban agudas sones de violines 
esperanzas delgadas de bocas 
virginales O veloces y grandes como buques de lejos como 
ballenas desde mares distantes inmensas esperanzas de un amor sin final"

echo -e "\n\nExpected : English"
./rush2 "This morning dad gave me a gun He told me I was his rising sun 
This morning my dad gave me a gun He said that time for love was gone"
 
echo -e "\n\nExpected: French"
./rush2 "Je la pris près de la rivière Car je la croyais sans mari Tandis qu'elle était adultère Ce fut la Saint-Jacques la nuit Par rendez-vous et compromis Quand s'éteignirent les lumières Et s'allumèrent les cri-cri"
