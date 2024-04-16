#!/bin/bash

exp='.jpg'


for ((i=1; i<11; i++))
do
curl https://picsum.photos/800/400 -L > photos/$i$exp
done