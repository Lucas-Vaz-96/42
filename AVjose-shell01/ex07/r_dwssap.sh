#!/bin/bash

cat /etc/passwd | grep -e '^[^:]*:' -o | tr -d ':' | sed -n '2~2p' | rev | sort -nr | sed -n "$FT_LINE1,$FT_LINE2~p" | perl -pe 's/\n/, /g' | rev | cut -b 3- | rev | tr '\n' '. '
