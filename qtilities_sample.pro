TEMPLATE = subdirs
CONFIG += ordered

SUBDIRS = qtilities \
          src

qtilities.file = thirdparty/qtilities/src/Qtilities.pro
src.depends = qtilities
