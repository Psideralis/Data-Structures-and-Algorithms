# *********************************************
#Author: Psideralis
#License: GNU GPL 3.0
#File name: pystruct.py
#Description:
#**********************************************

# *********************************************
#CLASSES:

#*********************************************  

#!/usr/bin/env python
# -*- coding: utf-8 -*-

__author__ = "Psideralis"
__copyright__ = "Copyright 2020, Psideralis"
__credits__ = ["Psideralis"]
__license__ = "GPL 3.0"
__version__ = " 00.00.000.001"
__maintainer__ = "Psideralis"
__email__ = "psideralis@gmail.com"
__status__ = "Development"

from ctypes import cdll
lib = cdll.LoadLibrary('./PsideralisDataStructures.dll')

import js2py
f = js2py.eval_js( "function $(name) {return name.length}" )
f = js2py.eval_js()
js2py.translate_file('example.js', 'example.py')
#from example import example
js = js2py.eval_js('d = {a:1, b:2}')