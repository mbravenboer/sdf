# Parser
# ============================================================================

libsglr_sources = files(
    'c-library/logging/logging.c',
    'c-library/statistics/rsrc-usage.c',
    'toolbuslib/src/atb-tool.c',
    'config-support/lib/Config.c',
    'config-support/lib/Config_dict.c',
    'config-support/lib/options.c',
    'error-support/lib/Error.c',
    'error-support/lib/Error_dict.c',
    'error-support/lib/ParsedError.c',
    'error-support/lib/ParsedError_dict.c',
    'error-support/lib/init.c',
    'error-support/lib/display.c',
    'error-support/lib/lift.c',
    'error-support/lib/lower.c',
    'error-support/lib/manager.c',
    'error-support/lib/Error-utils.c',
    'error-support/lib/Location.c',
    'error-support/lib/Location_dict.c',
    'error-support/lib/ParsedLocation.c',
    'error-support/lib/ParsedLocation_dict.c',
    'pt-support/libmept/MEPT.c',
    'pt-support/libmept/MEPT_dict.c',
    'pt-support/libmept/MEPT-ambtracker.c',
    'pt-support/libmept/MEPT-annotations.c',
    'pt-support/libmept/MEPT-apply.c',
    'pt-support/libmept/MEPT-args.c',
    'pt-support/libmept/MEPT-characters.c',
    'pt-support/libmept/MEPT-flatten.c',
    'pt-support/libmept/MEPT-implode.c',
    'pt-support/libmept/MEPT-layout.c',
    'pt-support/libmept/MEPT-length.c',
    'pt-support/libmept/MEPT-ordering.c',
    'pt-support/libmept/MEPT-origins.c',
    'pt-support/libmept/MEPT-posinfo.c',
    'pt-support/libmept/MEPT-productions.c',
    'pt-support/libmept/MEPT-renaming.c',
    'pt-support/libmept/MEPT-start.c',
    'pt-support/libmept/MEPT-symbols.c',
    'pt-support/libmept/MEPT-tree.c',
    'pt-support/libmept/MEPT-visitors.c',
    'pt-support/libmept/MEPT-yield.c',
    'pt-support/libmept/MEPT-yieldprod.c',
    'pt-support/libptmept/PTMEPT.c',
    'pt-support/libptmept/PTMEPT_dict.c',
    'pt-support/libptmept/lift.c',
    'pt-support/libptmept/lower.c',
    'ptable-support/lib/ptable.c',
    'ptable-support/lib/ptable_dict.c',
    'ptable-support/lib/ptable-utils.c',
    'sglr/src/sglrInterface.c',
    'sglr/src/mainOptions.c',
    'sglr/src/inputString.c',
    'sglr/src/inputStringBuilder.c',
    'sglr/src/sglr-termstore.c',
    'sglr/src/gss/gssNodeList.c',
    'sglr/src/gss/gssEdgeList.c',
    'sglr/src/gss/gssNode.c',
    'sglr/src/gss/gssEdge.c',
    'sglr/src/gss/gss.c',
    'sglr/src/gss/gssGarbageCollector.c',
    'sglr/src/gss/reductionPath.c',
    'sglr/src/gss/shiftQueue.c',
    'sglr/src/parseForest/filters.c',
    'sglr/src/parseForest/ambi-tables.c',
    'sglr/src/parseForest/filterOptions.c',
    'sglr/src/parseForest/levels.c',
    'sglr/src/parseTable/parseTable.c',
    'sglr/src/parseTable/parseTableBuilder.c',
    'sglr/src/parseTable/parseTableDB.c',
    'sglr/src/parser/parser.c',
    'sglr/src/parser/parserStatistics.c',
    'sglr/src/parser/parserOptions.c',
    'sglr/src/utils/bitmap.c',
    'sglr/src/utils/marking.c',
    'sglr/src/utils/posmap.c',
    'sglr/src/utils/list.c',
    'sglr/src/utils/statusBar.c')

sglr_library = library(
  'sglr',
  libsglr_sources,
  # TODO
  include_directories : [
    'pt-support/libmept',
    'ptable-support/lib',
    'config-support/lib',
    'toolbuslib/src',
    'error-support/lib',
    'c-library/statistics',
    'sglr/src'],
  link_args : ['-Wl,-no-undefined'],
  dependencies : [aterm],
  install: true)

sglr_exe = executable('sglr', [
    'sglr/src/main.c',
    'sglr/src/sglr.c',
    'sglr/src/toolbusInterface.c', 'sglr/src/commandLineInterface.c'],
  include_directories : [
    'pt-support/libmept',
    'ptable-support/lib',
    'config-support/lib',
    'toolbuslib/src',
    'error-support/lib',
    'c-library/statistics',
    'sglr/src'],
    dependencies : [aterm],
    link_with : [sglr_library],
    install: true,
    install_rpath : libdir)

# Parser generator
# ============================================================================

libsglr_pgen_sources = files(
	  'asf-support/lib/ASFME.c',
    'asf-support/lib/ASFME_dict.c',
    'asf-support/lib/ASFME-utils.c',
    'asf-support/lib/lift.c',
    'asf-support/lib/lower.c',
    'sdf-support/lib/SDFME.c',
    'sdf-support/lib/SDFME_dict.c',
    'sdf-support/lib/SDFME-utils.c',
    'sdf-support/lib/get-module-name.c',
    'sdf-support/lib/grammar.c',
    'sdf-support/lib/prio.c',
    'sdf-support/lib/prod.c',
    'sdf-support/lib/restrict.c',
    'sdf-support/lib/import-operations.c',
    'sdf-support/lib/sdf2pt.c',
    'sdf-support/lib/sort.c',
    'rstore-support/lib/RStore.c',
    'rstore-support/lib/RStore_dict.c',
    'rstore-support/lib/ParsedRStore.c',
    'rstore-support/lib/ParsedRStore_dict.c',
    'rstore-support/lib/lower.c',
    'rstore-support/lib/lift.c',
    'tide-support/lib/debug-adapter.c',
    'tide-support/lib/TA.c',
    'tide-support/lib/TA_dict.c',
    'tide-support/lib/tide-adapter.c',
    'tide-support/lib/debug-tool.c',
    'asc-support/lib/builtin-annos.c',
    'asc-support/lib/builtin-common.c',
    'asc-support/lib/builtin-implode.c',
    'asc-support/lib/builtin-io.c',
    'asc-support/lib/builtin-lifting.c',
    'asc-support/lib/builtin-tide.c',
    'asc-support/lib/builtin-term-compare.c',
    'asc-support/lib/builtin-unique.c',
    'asc-support/lib/asc-ambiguity.c',
    'asc-support/lib/asc-client.c',
    'asc-support/lib/asc-main.c',
    'asc-support/lib/asc-muasf2pt.c',
    'asc-support/lib/asc-nametable.c',
    'asc-support/lib/asc-options.c',
    'asc-support/lib/asc-parsetable.c',
    'asc-support/lib/asc-prod2str.c',
    'asc-support/lib/asc-support.c',
    'asc-support/lib/asc-tide.c',
    'asc-support/lib/asc-termstore.c',
    'asc-support/lib/asc-traversals.c',
    'asc-support/lib/builtin-forward.c',
    'asc-support/lib/Library.c',
    'asc-support/lib/Library_dict.c',
    'pgen/src/generate.c',
    'pgen/src/ksdf2table.c',
    'pgen/src/atsets.c',
    'pgen/src/flatten.c',
    'pgen/src/characters.c',
    'pgen/src/first.c',
    'pgen/src/follow.c',
    'pgen/src/goto.c',
    'pgen/src/predicted.c',
    'pgen/src/priorities.c',
    'pgen/src/intset.c',
    'pgen/src/item.c',
    'pgen/src/itemset.c',
    'pgen/src/pgen-symbol.c',
    'pgen/src/pgenOptions.c',
    'pgen/src/parseTable-data.c',
    'pgen/src/normalize.c',
    'pgen/src/Sdf2-Normalization.c',
    'pgen/src/parseTable-stats.c')

sglr_pgen_library = library(
  'sglr-generator',
  libsglr_pgen_sources,
  include_directories : [
    'pt-support/libmept',
    'pt-support/libptmept',
    'ptable-support/lib',
    'asc-support/lib',
    'asf-support/lib',
    'rstore-support/lib',
    'tide-support/lib',
    'config-support/lib',
    'toolbuslib/src',
    'error-support/lib',
    'c-library/logging',
    'c-library/statistics',
    'sdf-support/lib',
    'sglr/src',
    ],
  link_args : ['-Wl,-no-undefined'],
  dependencies : [aterm],
  link_with : [sglr_library],
  install: true)

sglr_pgen_include_dirs = include_directories(
    'asc-support/lib',
    'c-library/logging',
    'config-support/lib',
    'error-support/lib',
    'pt-support/libmept',
    'ptable-support/lib',
    'sdf-support/lib',
    'sglr/src',
    'toolbuslib/src')

sdf2table_exe = executable('sdf2table', [
    'pgen/src/parsetablegen.c',
    'pgen/src/load.c',
    'pgen/src/main.c',
    'pgen/src/Sdf2-Load.c'
  ],
  include_directories : sglr_pgen_include_dirs,
  dependencies : [aterm],
  link_with : [sglr_library, sglr_pgen_library],
  install: true,
  install_rpath : libdir)

# TODO test-chars pgen

# Utils
# ============================================================================

# TODO simplify this
flattenPT_exe = executable(
  'flattenPT',
  ['pt-support/utils/flattenPT-main.c'],
  include_directories : ['pt-support/libmept', 'toolbuslib/src'],
  dependencies : [aterm],
  link_with : [sglr_library])

comparePT_exe = executable(
  'comparePT',
  ['pt-support/utils/comparePT-main.c'],
  include_directories : ['pt-support/libmept', 'toolbuslib/src'],
  dependencies : [aterm],
  link_with : [sglr_library])

implodePT_exe = executable(
  'implodePT',
  ['pt-support/utils/implodePT/implodePT-main.c'],
  include_directories : ['pt-support/libmept', 'toolbuslib/src'],
  dependencies : [aterm],
  link_with : [sglr_library],
  install: true,
  install_rpath: libdir)

orderPT_exe = executable(
  'orderPT',
  ['pt-support/utils/orderPT-main.c'],
  include_directories : ['pt-support/libmept', 'toolbuslib/src'],
  dependencies : [aterm],
  link_with : [sglr_library])

error_diff_exe = executable(
  'error-diff',
  ['error-support/utils/error-diff/error-diff.c'],
  include_directories : ['pt-support/libmept', 'toolbuslib/src', 'error-support/lib'],
  dependencies : [aterm],
  link_with : [sglr_library])


aterm_bindir = aterm.get_pkgconfig_variable('prefix') + '/bin'
atdiff = aterm_bindir + '/atdiff'
dicttoc = aterm_bindir + '/dicttoc'
baffle = aterm_bindir + '/baffle'

# Tests for pt-support
# ============================================================================

terms_dict = custom_target(
  output : ['terms.dict'],
  command : ['pt-support/test/terms/genTermsDict.sh.src',
    meson.current_source_dir() + '/pt-support/test/terms'],
  env: ['BAFFLE=' + baffle],
  capture : true)

# TODO these paths seem to conflict with other generators. Move to subdir?
terms_dict_h = custom_target('terms_dict.h',
  input: terms_dict,
  output : ['terms_dict.h', 'terms_dict.c'],
  command : [dicttoc, '-dict', '@INPUT@', '-path-h', '@OUTPUT0@', '-path-c', '@OUTPUT1@'])

test('MEPT test',
  executable(
    'mept-test.c',
    ['pt-support/test/mept-test.c', terms_dict_h],
    include_directories : ['pt-support/libmept', 'toolbuslib/src'],
    dependencies : [aterm],
    link_with : [sglr_library]))

# Tests for SGLR
# ============================================================================

test_env = [
    'SGLR=' + sglr_exe.full_path(),
    'SDF2TABLE=' + sdf2table_exe.full_path(),
    'ATCOMPARE=' + atdiff,
    'COMPARE=' + comparePT_exe.full_path(),
    'ORDER=' + orderPT_exe.full_path(),
    'ERRORCOMPARE=' + error_diff_exe.full_path()]

test('SGLR regression tests',
  files('sglr/test/regressionTests.sh.src'),
  env : test_env + ['TESTDIR=' + meson.current_source_dir() + '/sglr/test'])


subdir('sdf-library')
subdir('pgen')
