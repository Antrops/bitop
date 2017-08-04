from distutils.core import setup

bitmod = Extension('bitop',
                    sources = ['bitop.c'])

setup(
  name = 'bitop',
  packages = ['bitop'],
  version = '0.5',
  description = 'A simple bitwise operator handling module.',
  ext_modules = [bitmod],
  author = 'Antrops',
  author_email = 'officialantrops@gmail.com',
  url = 'https://github.com/Antrops/bitop', 
  keywords = ['bits', 'operators', 'bitwise', 'python', 'logic', 'binary'],
  classifiers = [],
)
