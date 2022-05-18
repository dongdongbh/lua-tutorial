## lua with cpp

If you want to use lua in your cpp projects, you should install the full lua package. That means you should install it from source code form [here](http://www.lua.org/download.html).
## make
```
g++ -o main main.cpp -Llib -llua -ldl
```

or you can use `Makefile`.
