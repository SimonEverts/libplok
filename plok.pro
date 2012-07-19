
TEMPLATE = subdirs

SUBDIRS +=      libplok \
                plugins \
    plokgui



plugins.depends = libplok
plokgui.depends = libplok plugins


