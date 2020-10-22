# Locate OpenThreads
# This module defines
# OPEN_THREADS_LIBRARY
# OPEN_THREADS_FOUND, if false, do not try to link to gimpact
# OPEN_THREADS_INCLUDE_DIR, where to find the headers
#
# $OPEN_THREADS_DIR is an environment variable that would
#

# First try to find OpenThreads inside OpenSceneGraph

FIND_PATH(OPEN_THREADS_INCLUDE_DIR OpenThreads/Mutex
	$ENV{OSG_DIR}/include
	$ENV{OPENTHREADS_DIR}/include
)

FIND_LIBRARY(OPEN_THREADS_LIBRARY NAMES OpenThreads OpenThreadsd
	PATHS
	$ENV{OSG_DIR}/lib
	$ENV{OPENTHREADS_DIR}/lib
    /usr/local/lib64
    /usr/local/lib
    /usr/lib64
    /usr/lib
)

SET(OPEN_THREADS_FOUND "NO")
IF(OPEN_THREADS_LIBRARY AND OPEN_THREADS_INCLUDE_DIR)
    SET(OPEN_THREADS_FOUND "YES")
	GET_FILENAME_COMPONENT(OPEN_THREADS_LIBRARY_DIR ${OPEN_THREADS_LIBRARY} PATH)
ENDIF(OPEN_THREADS_LIBRARY AND OPEN_THREADS_INCLUDE_DIR)


