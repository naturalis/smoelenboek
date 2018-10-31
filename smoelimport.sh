#!/bin/bash
drush vset feeds_process_limit 2000
drush delete-all smoel
drush feeds-im smoel_xml -y
yes | sudo drush search-reindex --immediate
drush cc all
