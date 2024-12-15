# Bootstrap the parse table for SDF itself
# ============================================================================

sdf2_asfix = custom_target(
  input : [files('grammar/Sdf2.def', 'grammar/Sdf2-bootstrap.tbl')],
  output : ['Sdf2.asfix'],
  command : [sglr_exe,
    '-p', '@INPUT1@',
    '-i', '@INPUT0@',
    '-o', '@OUTPUT@'])

sdf2_baf = custom_target(
  'Sdf2.baf',
  input : [sdf2_asfix],
  output : ['Sdf2.baf'],
  command : [sdf2table_exe],
  feed : true,
  capture : true,
  install: true,
  install_dir: 'share/pgen')


# Tests for SDF parser generator
# ============================================================================

test('SDF2TABLE regression tests',
  files('test/regressionTests.sh.src'),
  env : test_env + ['TESTDIR=' + meson.current_source_dir() + '/test'])

test('SDF2TABLE load tests',
  files('test/loadTests.sh.src'),
  env : test_env + ['TESTDIR=' + meson.current_source_dir() + '/test'])
