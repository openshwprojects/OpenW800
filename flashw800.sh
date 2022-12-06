#!/bin/bash
cp bin/w800/w800_ota.img /var/www/
tools/w800/wm_tool -c ttyUSB0 -rs rts -dl bin/w800/w800.fls

