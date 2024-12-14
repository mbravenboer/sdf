project('sglr', 'c',
  version : '25.01',
  license : 'BSD',
  default_options : ['default_library=both'])

aterm = dependency('aterm')

libdir = join_paths(
  get_option('prefix'),
  get_option('libdir'))

subdir('src')

pkg_mod = import('pkgconfig')

pkg_mod.generate(libraries : sglr_library,
                 version : '25.01',
                 name : 'libsglr',
                 filebase : 'sglr',
                 description : 'SGLR Library')
