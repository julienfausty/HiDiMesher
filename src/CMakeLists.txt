file (GLOB_RECURSE
      src_files
      *.h
      *.cpp
      )

add_library (src ${src_files})
