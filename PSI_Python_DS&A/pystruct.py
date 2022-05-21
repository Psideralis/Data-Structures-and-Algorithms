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

# STATIC STRUCTURES
class Set:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass

class List:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass

class ArrayList:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass

class OrderedList:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass

class Stack:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass

class Queue:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass

class Dictionary:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass

class Multimap:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass

# DYNAMIC STRUCTURES
class LinkedList:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass

class DoubleLinkedList:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass

class GeneralizedLinkedList:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass

class DynamicTable:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass

class Heap:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass

class Stack:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass

class DynamicQueue:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass

class DynamicMultimap:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass

# TREES
class BinaryTree:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass

class BalancedTree:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass

# GRAPHS
class Graph:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass

class Digraph:
    def _init__(self):
        pass
    def randomSubstitution(self):
        pass
    def indexSubstitution(self):
        pass
    def generalSearch(self):
        pass
    def localSearch(self):
        pass