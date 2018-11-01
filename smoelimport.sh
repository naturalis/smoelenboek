#!/bin/bash
drush vset feeds_process_limit 2000
drush delete-all all --reset
drush feeds-im smoel_xml -y
yes | drush search-reindex --immediate
drush cc all
