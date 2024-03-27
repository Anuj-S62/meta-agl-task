SUMMARY = "GSoC 2024 AGL Task"
DESCRIPTION = "AGL Task for GSoC 2024"
LICENSE = "CLOSED"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    qtquickcontrols2 \
    libqtappfw \
"
SRC_URI = "file://agltask.cpp \
	file://agltask.pro \
	file://agltask.desktop \
	file://img.png \
	file://resources.qrc \
	"

S = "${WORKDIR}"

do_install:append() {
	install -d ${D}${bindir} 
	install -m 0775 agltask ${D}${bindir}
	install -d ${D}${datadir}/applications
	install -m 0644 ${WORKDIR}/agltask.desktop ${D}${datadir}/applications
}

FILES_${PN} += "${bindir}/agltask \
	        ${datadir}/applications/agltask.desktop"

inherit qmake5 pkgconfig  agl-app

AGL_APP_NAME = "agltask"


RDEPENDS:${PN} += " \
    qtwayland \
    qtbase-qmlplugins \
    qtgraphicaleffects-qmlplugins \
    qtquickcontrols2-agl-style \
    libqtappfw \
"
