flex lex.l
bison -d --verbose syn.y
gcc lex.yy.c syn.tab.c ts.c quad.c opt.c gc.c -lfl -ly -o pgm.exe
cd C:\Users\saleh\Desktop\study\compile courses\projet\v2
pgm
pause

