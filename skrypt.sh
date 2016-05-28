#!/bin/bash

./program1
./weekend.sh

wyraz=`cat wyraz.data | head -1`
w=`echo "${wyraz}" | aspell --master=pl`
gw=$(echo "$w" | grep '^*')
if [[ `echo ${gw}` == "*" ]]
then
echo "Wyraz poprawny!"
else
echo "Wyraz niepoprawny!"
fi
