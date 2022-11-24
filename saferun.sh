#!/bin/sh
error_dialog() {
	## Try to use a graphical dialog of some kind, if we have an X11 display and we're not started from an interactive shell
	if [ -n "$DISPLAY" ] && [ ! -t 0 ]; then
		if [ -x "/usr/bin/gxmessage" ]; then	gxmessage --title "Launch Error" "$1" ; return
		elif [ -x "/usr/bin/xmessage" ]; then	xmessage "$1" ; return
		fi
	fi

	## If we get here, write the message to stderr
	echo "$1" >&2
}

EXEC=$1
shift 1
if [ ! -x "$EXEC" ]; then
	error_dialog "${EXEC} was not found or is not executable"
	return
fi

"${EXEC}" "$@"

## If the returncode was 127, then there was some failure to run the executable
## Report this graphically if there's a display and we're not on an interactive shell
if [ $? -eq 127 ]; then
	error_dialog "$(echo "${EXEC} failed to start due to the following dependancy problems:"; ldd "${EXEC}")"
fi

