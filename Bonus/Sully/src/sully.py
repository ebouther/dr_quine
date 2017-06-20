#!/usr/bin/python3
import os;
if __name__ == '__main__':
    i = 5;
    if (os.environ.get('child') != None):
        i = i - 1;
    filename = 'Sully_%d.py' % (i);
    str="#!/usr/bin/python3%cimport os;%cif __name__ == '__main__':%c    i = %d;%c    if (os.environ.get('child') != None):%c        i = i - 1;%c    filename = 'Sully_%%d.py' %% (i);%c    str=%c%s%c;%c    with open(filename, 'w') as fd:%c        fd.write(str %% (10, 10, 10, i, 10, 10, 10, 10, 34, str, 34, 10, 10, 10, 10, 10));%c    if (i > 0):%c        os.system('env -i child=1 /usr/bin/python3 ./%%s' %% (filename));%c";
    with open(filename, 'w') as fd:
        fd.write(str % (10, 10, 10, i, 10, 10, 10, 10, 34, str, 34, 10, 10, 10, 10, 10));
    if (i > 0):
        os.system('env -i child=1 /usr/bin/python3 ./%s' % (filename));
