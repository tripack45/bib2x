cmake_minimum_required(VERSION 3.20)

project(bib2x VERSION 0.9.1)

set(CMAKE_CXX_STANDARD 98)

set(ODB_SOURCES
    src/atomdatabinary.cxx 
    src/keyname.cxx 
    src/rope.cxx 
    src/transaction.cxx 
    src/stream.cxx 
    src/root.cxx 
    src/reason.cxx 
    src/object.cxx 
    src/class.cxx 
    src/atomdata.cxx 
    src/atom.cxx 
    src/atomdatastring.cxx 
    src/atomdatareal.cxx 
    src/atomdatainteger.cxx 
    src/atomdata3dpoint.cxx 
    src/atomdatafilelink.cxx 
    src/atomdatafile.cxx 
    src/odb.cxx
)

set(BIB2X_SOURCES
    src/main.cxx 
    src/template.yy.cxx 
    src/template.tab.cxx 
    src/template.cxx 
    src/entries.cxx 
    src/bib.tab.cxx 
    src/lex.yy.cxx 
    src/bib.cxx 
    src/output.cxx 
    src/outputhtml.cxx 
    src/latexconv.cxx 
    src/utfconv.cxx
)

add_library(odb STATIC ${ODB_SOURCES})
target_include_directories(odb PUBLIC "include/")

add_executable(bib2x ${BIB2X_SOURCES})
target_include_directories(bib2x PUBLIC "include/")
target_link_libraries(bib2x odb)
