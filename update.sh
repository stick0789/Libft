#!/bin/bash


DIR="./" 


for file in $DIR*.c $DIR*.h
do
  
    if [ -f "$file" ]; then

        sed -i '1,12d' "$file"

        vim -c ":Stdheader" -c ":wq" "$file"
        echo "Header actualizado en: $file"
    fi
done

