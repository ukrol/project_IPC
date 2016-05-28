#/bin/bash

dzien=$(date +%u)
if [ ${dzien} -eq 6 -o ${dzien} -eq 5 ]
then
./program2
elif [ ${dzien} -eq 7 ]
then
./program2
else
echo "To nie weekend!"
fi
