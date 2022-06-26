# FINDINF

## Find Text in a File

Find a specific word or phrase in a text file. It outputs only the lines in which the given text was found.

# Installing

## For Users

Install findinf by running these commands:

```
git clone https://github.com/Potato-git13/findinf.git
cd findinf/
make compile install
```

## For Developers

```
git clone https://github.com/Potato-git13/findinf.git
cd findinf/
```

Source files are located in the ```src/``` subdirectory. 

For more information when debugging compile with ```make compile-debug```

# Usage

Findinf is used like the following example: ```findinf testfile text```. This will find the word text in the file testfile and output it to the terminal. For more inforamtion run ```findinf -h```.