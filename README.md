ecila
=======================================


introduction
----------
* Server Network Library using POSA2(Patterns for Concurrent and Networked Objects)
* writing on c++ for cross platform


Event Handling Pattern
----------
* Proactor : iocp (for windows)
* Reactor  : select(Windows/Linux/FreeBSD), epoll(Linux 2.6 higher), kqueue(FreeBSD 7.2 higher)


Example
----------
* web server

Build Env
----------
* Windows 7 : Microsoft Visual Studio 2010
* FreeBSD 7.2 32bit : gcc 4.6.2
* Linux (CentOS 6 64bit) : gcc 4.4.6
* OSX 64bit : gcc 4.4.6

Notice
----------
* currently supported build environment
 : using CLion on macOS Catalina
 
 ```
## clean
$ cmake --build cmake-build-debug --target clean -- -j 2


## build
$ cmake --build cmake-build-debug --target all -- -j 2
$ cp app/cfg.ini cmake-build-debug
$ mkdir cmake-build-debug/logs


## exec
$ cd cmake-build-debug
$ ./ecilaz


## run
## open browser, typing http://127.0.0.1:25251
```