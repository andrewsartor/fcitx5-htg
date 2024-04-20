add_library(htg SHARED htg.cpp)
target_link_libraries(htg PRIVATE Fcitx5::Core)
set_target_properties(htg PROPERTIES PREFIX "")
install(TARGETS htg DESTINATION "${FCITX_INSTALL_LIBDIR}/fcitx5")

configure_file(htg-addon.conf.in htg-addon.conf)
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/htg-addon.conf" RENAME htg.conf DESTINATION "${FCITX_INSTALL_PKGDATADIR}/addon")

install(FILES "htg.conf" DESTINATION "${FCITX_INSTALL_PKGDATADIR}/inputmethod")
