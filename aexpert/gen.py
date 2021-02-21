
#!/usr/local/bin/python3

import os
from os import path
import glob
import urllib

dlist = []
for name in glob.glob('[0-9]*-*'):
    dlist.append(name)

if dlist:
    # rewrite readme
    f = open("readme.md", "w")
    f.write("# List of exercises\n\n")
    
    for n in dlist:
        num, name = n.split('-', 1)
        url = urllib.quote( 'www.algoexpert.io/questions/{}'.format(name) ) 
        f.write(' * [#{} : {}](<{}>) - ([algoexpert](http://{})) \n'.format(num, name, n, url))

    f.write("\n")
    f.close()

