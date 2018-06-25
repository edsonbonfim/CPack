# Install CPack From Git/Linux/Debian

Installing CPack from Git on Debian, and Debian like distros is fairly easy and straight forward.

## Dependencies

However this process has quite a few direct, and indirect dependencies, so you are going to have to install a few things before we procede.

* Build Essentials (build-essential) - things like GCC, make, binutils
* Git (git) - Can't get CPack from its Git repo without git
* CMake (cmake) - CPack Build system

## Installing Dependencies

Just run:
```sh
$ sudo apt-get update && sudo apt-get install build-essential git cmake
```

## Getting CPack

Now that we have all of the software we are going to need to build CPack, we fetch CPack from git:

```sh
$ git clone https://github.com/EdsonOnildoJR/CPack.git
```

Once that is all done, you now have a CPack directory containing CPack's latest source code! Navigate to that directory:

```sh
$ cd CPack
```

Now onward with building CPack. Create a "build" sub directory, and enter it:

```sh
$ mkdir build; cd build
```

## Running CMake

Now its time to get down to it. Time to run cmake.

```sh
$ cmake ..
```

## Compiling CPack

Run make:

```sh
$ make
```

## Installing CPack

Almost done. Time to install.

```sh
$ sudo make install
```

Congratulations, you now have CPack installed.