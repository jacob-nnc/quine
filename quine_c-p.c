#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
const char *c ="#include<stdio.h>%cint main(int argc,char* argv[]){%cconst char*s=%c%s%c;%cconst char* py=%c%s%c}";
const char *py = "import sys%cpy=%cimport sys{}py={}{}{}{}c={}{}{}{}py=py.format(chr(10),chr(34),py,chr(34),chr(10),chr(34)*3,c,chr(34)*3,chr(10),chr(10)){}print(py)if len(sys.argv)==1 else print(c.replace(chr(65)*3,py.replace(chr(10),chr(37)+chr(99)).replace(chr(34),chr(37)+chr(99))))%c%cc=%c%C%C%s%c%C%C%cpy=py.format(chr(10),chr(34),py,chr(34),chr(10),chr(34)*3,c,chr(34)*3,chr(10),chr(10))%cprint(py)if len(sys.argv)==1 else print(c.replace(chr(65)*3,py.replace(chr(10),chr(37)+chr(99)).replace(chr(34),chr(37)+chr(99))))";
if (argc == 1)printf(c, 10, 10, 34, c, 34, 10,34,py,34);else printf(py,10,34,34,10,34,34,34,c,34,34,34,10,10);
}
