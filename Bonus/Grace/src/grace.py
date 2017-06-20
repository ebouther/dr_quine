#!/usr/bin/python3
"""
   Hello
"""
def FT(x):
    fd = open('./Grace_kid.py', 'w');
    str="#!/usr/bin/python3%c%c%c%c%c   Hello%c%c%c%c%cdef FT(x):%c    fd = open('./Grace_kid.py', 'w');%c    str=%c%s%c;%c    fd.write(str %% (10, 34, 34, 34, 10, 10, 34, 34, 34, 10, 10, 10, 34, str, 34, 10, 10, 10, 10));%c%cFT(None);%c";
    fd.write(str % (10, 34, 34, 34, 10, 10, 34, 34, 34, 10, 10, 10, 34, str, 34, 10, 10, 10, 10));

FT(None);
