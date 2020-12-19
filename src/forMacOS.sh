gcc -I ../includes -c ./main/*.c
gcc -I ../includes -c ./modules/*.c
gcc -I ../includes -c ./utilities/*.c
mv *.o ../lib/macos/.
cd ../lib/macos
ar rcs libSMS.a *.o
