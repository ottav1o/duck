# DUCK - cat but worse
## Warning: this isn't a serius project.
### This project is for educational purposes only.

# Compiling
First of at all, you need to clone or download the source code.

    git clone https://github.com/ottav1o/duck.git

Now, cd to the duck's source folder and create the build directory, then cd into it and generate the necessary build files with *cmake*.

    cd duck
    mkdir -p build
    cd build
    cmake -S .. -B .

Finally, run make to compile the source code.

    make
    ./duck

You can find the executable in **duck-source*/build/*
