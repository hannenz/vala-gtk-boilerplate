### CMakeLists automatically created with AutoVala
### Do not edit

set (DATADIR "${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_DATAROOTDIR}")
set (PKGDATADIR "${DATADIR}/boilerplate")
set (GETTEXT_PACKAGE "boilerplate")
set (RELEASE_NAME "boilerplate")
set (CMAKE_C_FLAGS "")
set (PREFIX ${CMAKE_INSTALL_PREFIX})
set (VERSION "1.0.0")
set (TESTSRCDIR "${CMAKE_SOURCE_DIR}")
set (DOLLAR "$")

configure_file (${CMAKE_SOURCE_DIR}/src/Config.vala.cmake ${CMAKE_BINARY_DIR}/src/Config.vala)
add_definitions(-DGETTEXT_PACKAGE=\"${GETTEXT_PACKAGE}\")
set (VERSION "1.0.0")
add_definitions (${DEPS_CFLAGS})
link_libraries ( ${DEPS_LIBRARIES} )
link_directories ( ${DEPS_LIBRARY_DIRS} )
find_package (Vala REQUIRED)
include (ValaVersion)
ensure_vala_version ("0.34" MINIMUM)
include (ValaPrecompile)

set (VALA_PACKAGES ${VALA_PACKAGES} atk)
set (VALA_PACKAGES ${VALA_PACKAGES} cairo)
set (VALA_PACKAGES ${VALA_PACKAGES} gdk-3.0)
set (VALA_PACKAGES ${VALA_PACKAGES} gdk-pixbuf-2.0)
set (VALA_PACKAGES ${VALA_PACKAGES} gee-0.8)
set (VALA_PACKAGES ${VALA_PACKAGES} gio-2.0)
set (VALA_PACKAGES ${VALA_PACKAGES} gio-unix-2.0)
set (VALA_PACKAGES ${VALA_PACKAGES} glib-2.0)
set (VALA_PACKAGES ${VALA_PACKAGES} gobject-2.0)
set (VALA_PACKAGES ${VALA_PACKAGES} granite)
set (VALA_PACKAGES ${VALA_PACKAGES} gtk+-3.0)
set (VALA_PACKAGES ${VALA_PACKAGES} pango)
set (VALA_PACKAGES ${VALA_PACKAGES} x11)

set (APP_SOURCES ${APP_SOURCES} ${CMAKE_CURRENT_BINARY_DIR}/Config.vala)
set (APP_SOURCES ${APP_SOURCES} ApplicationWindow.vala)
set (APP_SOURCES ${APP_SOURCES} Boilerplate.vala)
set (APP_SOURCES ${APP_SOURCES} Overlay.vala)


if ((${CMAKE_BUILD_TYPE} STREQUAL "Debug") OR (${CMAKE_BUILD_TYPE} STREQUAL "RelWithDebInfo"))
	set(COMPILE_OPTIONS ${COMPILE_OPTIONS} "-g")
endif()

set (COMPILE_OPTIONS ${COMPILE_OPTIONS} --target-glib=2.48 )
set (COMPILE_OPTIONS ${COMPILE_OPTIONS} --gresources=${CMAKE_SOURCE_DIR}/data/boilerplate.gresource.xml )

vala_precompile(VALA_C boilerplate
	${APP_SOURCES}
PACKAGES
	${VALA_PACKAGES}
OPTIONS
	${COMPILE_OPTIONS}
)

SET (VALA_C ${VALA_C} ${boilerplate_gresource_xml_C_FILE})
add_executable(boilerplate ${VALA_C})
add_dependencies (boilerplate boilerplate_gresource_xml)


install(TARGETS
	boilerplate
RUNTIME DESTINATION
	${CMAKE_INSTALL_BINDIR}
)
if(HAVE_VALADOC)
	valadoc(boilerplate
		${CMAKE_BINARY_DIR}/valadoc/boilerplate
		${APP_SOURCES}
	PACKAGES
		${VALA_PACKAGES}
	CUSTOM_VAPIS
		${CUSTOM_VAPIS_LIST}
	)
	install(DIRECTORY
		${CMAKE_BINARY_DIR}/valadoc
	DESTINATION
		${CMAKE_INSTALL_DATAROOTDIR}/doc/boilerplate
	)
endif()
