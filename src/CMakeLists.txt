add_subdirectory(odb)

bison_target(BibParser 
    bib.y                  # Parser source
    bib.tab.cxx            # Generated file
    DEFINES_FILE bib.tab.h # Definitions header
    COMPILE_FLAGS "-p bib -dv -Wno-other"
    )

flex_target(BibLexer 
    bib.l                  # Lexer source
    lex.yy.cxx             # Generated code
    COMPILE_FLAGS -Pbib
    )

# This adds the `bib.tab.h` as a dependency of `lex.yy.cxx`
# but it doesn't seem to handle subdirectories correctly
# add_flex_bison_dependency(BibLexer BibParser)

bison_target(TemplateParser 
    template.y                  # Parser source
    template.tab.cxx            # Generated file
    DEFINES_FILE template.tab.h # Definitions header
    COMPILE_FLAGS "-p template -dv -Wno-other"
    )

flex_target(TemplateLexer 
    template.l                  # Lexer source
    template.yy.cxx             # Generated code
    COMPILE_FLAGS -Ptemplate
    )

set(BIB2X_SOURCES
    main.cxx 
    template.cxx 
    entries.cxx 
    bib.cxx 
    output.cxx 
    outputhtml.cxx 
    latexconv.cxx 
    utfconv.cxx

    ${FLEX_BibLexer_OUTPUTS}
    ${BISON_BibParser_OUTPUTS}

    ${FLEX_TemplateLexer_OUTPUTS}
    ${BISON_TemplateParser_OUTPUTS}
)

add_executable(bib2x 
    ${BIB2X_SOURCES}
)

target_include_directories(bib2x PUBLIC "${INCLUDE_DIR}")
target_link_libraries(bib2x odb)

install(TARGETS bib2x DESTINATION bin)