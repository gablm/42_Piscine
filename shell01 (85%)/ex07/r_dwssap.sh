cat /etc/passwd | cut -d: -f1 | awk 'NR % 2 == 0' | rev | sort -r | awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' ORS=', ' | sed 's/.\{2\}$//' | sed 's/$/./'
