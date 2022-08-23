SUMMARY = "WebKitBrowser plugin"


PR = "r1"
PV = "1.0+git${SRCPV}"



SRC_URI = "git://github.com"

SRCREV = "${AUTOREV}"


S = "${WORKDIR}/git"

inherit cmake python3native

DEPENDS = "wpeframework wpeframework-tools-native"


EXTRA_OECMAKE += " \
    -DPYTHON_EXECUTABLE=${STAGING_BINDIR_NATIVE}/python3-native/python3 \
    -DCMAKE_SYSROOT=${STAGING_DIR_HOST} \
    -DBUILD_REFERENCE=${SRCREV} \
    -DBUILD_SHARED_LIBS=ON \
"


FILES_SOLIBSDEV = ""
FILES_${PN} += "${libdir}/wpeframework/plugins/*.so ${libdir}/*.so"



INSANE_SKIP_${PN} += "libdir staticdev dev-so"
INSANE_SKIP_${PN}-dbg += "libdir"
