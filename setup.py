from distutils.core import setup, Extension

bitmod = Extension('bitop',
                    sources = ['bitop.c'])

setup (name = 'bitop',
       version = '0.8',
       description = 'A simple bitwise operator handling module.',
       ext_modules = [bitmod])
