#/bin/bash

dzien=$(date +%u)
godzina=$(date +%H)
if [ ${dzien} -eq 5 -o ${godzina} -gt 16 ]
then
echo "Weekend!"
elseif [${dzien} -eq 6 -a ${dzien} -eg 7 ]
echo "Weekend! :)"
else
echo "To nie weekend! :("
fi
