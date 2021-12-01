#! /bin/bash
command gcc -fPIC -shared puts_Nemo.c -o puts_Nemo.so
gcc -o hello hello.c ./puts_Nemo.so