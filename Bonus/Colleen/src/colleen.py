"""
   bonjour
"""
def funct():
    str="%c%c%c%c   bonjour%c%c%c%c%cdef funct():%c    str=%c%s%c;%c    print(str %% (34, 34, 34, 10, 10, 34, 34, 34, 10, 10, 34, str, 34, 10, 10, 10, 10, 34, 34, 34, 10, 10, 34, 34, 34, 10));%c%cif __name__ == '__main__':%c    %c%c%c%c       toto%c    %c%c%c%c    funct();";
    print(str % (34, 34, 34, 10, 10, 34, 34, 34, 10, 10, 34, str, 34, 10, 10, 10, 10, 34, 34, 34, 10, 10, 34, 34, 34, 10));

if __name__ == '__main__':
    """
       toto
    """
    funct();
