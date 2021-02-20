
#!/usr/local/bin/python3

import os
from os import path
import glob

dlist = []
for name in glob.glob('[0-9]*-*'):
    dlist.append(name)

if dlist:
    # rewrite readme
    f = open("readme.md", "w")
    f.write("# List of exercises\n\n")
    
    for n in dlist:
        num, name = n.split('-', 1)
        f.write(' * [#{} : {}]({}) - ([leetcode](https://leetcode.com/problems/{}/)) \n'.format(num, name, n, name))

    f.write("\n")
    f.close()

