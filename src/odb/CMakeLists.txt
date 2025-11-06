add_compile_options(
    -lstd-c++
)

set(ODB_SOURCES
    atomdatabinary.cxx 
    keyname.cxx 
    rope.cxx 
    transaction.cxx 
    stream.cxx 
    root.cxx 
    reason.cxx 
    object.cxx 
    class.cxx 
    atomdata.cxx 
    atom.cxx 
    atomdatastring.cxx 
    atomdatareal.cxx 
    atomdatainteger.cxx 
    atomdata3dpoint.cxx 
    atomdatafilelink.cxx 
    atomdatafile.cxx 
    odb.cxx
)

add_library(odb STATIC ${ODB_SOURCES})
target_include_directories(odb PUBLIC "${INCLUDE_DIR}")

install(TARGETS odb DESTINATION libs)