
sglr_sources = files(
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
    )

sglr_library = library(
  'sglr',
  sglr_sources,
  link_args : ['-Wl,-no-undefined'],
  dependencies : [aterm],
  install: true)
