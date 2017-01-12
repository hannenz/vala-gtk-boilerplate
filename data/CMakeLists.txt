### CMakeLists automatically created with AutoVala
### Do not edit

EXECUTE_PROCESS( COMMAND glib-compile-resources --sourcedir=${CMAKE_CURRENT_SOURCE_DIR} --generate-source --target=${CMAKE_CURRENT_BINARY_DIR}/boilerplate.gresource.xml.c ${CMAKE_CURRENT_SOURCE_DIR}/boilerplate.gresource.xml)
EXECUTE_PROCESS( COMMAND glib-compile-resources --sourcedir=${CMAKE_CURRENT_SOURCE_DIR} --generate-header --target=${CMAKE_CURRENT_BINARY_DIR}/boilerplate.gresource.xml.h ${CMAKE_CURRENT_SOURCE_DIR}/boilerplate.gresource.xml)
ADD_CUSTOM_COMMAND (
	OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/boilerplate.gresource.xml.c
	DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/boilerplate.gresource.xml ${CMAKE_CURRENT_SOURCE_DIR}/interface/boilerplate_window.ui
	COMMAND glib-compile-resources --sourcedir=${CMAKE_CURRENT_SOURCE_DIR} --generate-source --target=${CMAKE_CURRENT_BINARY_DIR}/boilerplate.gresource.xml.c ${CMAKE_CURRENT_SOURCE_DIR}/boilerplate.gresource.xml

	COMMAND glib-compile-resources --sourcedir=${CMAKE_CURRENT_SOURCE_DIR} --generate-header --target=${CMAKE_CURRENT_BINARY_DIR}/boilerplate.gresource.xml.h ${CMAKE_CURRENT_SOURCE_DIR}/boilerplate.gresource.xml
)

add_custom_target(boilerplate_gresource_xml DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/boilerplate.gresource.xml.c)
SET (boilerplate_gresource_xml_C_FILE ${CMAKE_CURRENT_BINARY_DIR}/boilerplate.gresource.xml.c PARENT_SCOPE)
SET (boilerplate_gresource_xml_H_FILE ${CMAKE_CURRENT_BINARY_DIR}/boilerplate.gresource.xml.h PARENT_SCOPE)
include(GSettings)
add_schema(de.hannenz.boilerplate.gschema.xml)
