#!/bin/bash

exp='.jpg'
for ((i=1; i<21; i++))
do
curl https://picsum.photos/800/400 -L > images/$i$exp
done
