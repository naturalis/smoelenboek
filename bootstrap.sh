#!/bin/bash
cd /var/www/html
/bin/cp -r /opt/project/naturalis profiles/
/bin/cat /opt/project/smoelenboek.sql | /usr/local/bin/drush sql-cli
mkdir /var/www/html/sites/default/files
mkdir /var/www/html/sites/default/modules
/bin/cp -r /opt/project/drush_feeds_import /var/www/html/sites/default/modules/
/bin/cp /opt/project/apesmoel.png /var/www/html/sites/default/files/
/bin/cp -r /opt/project/sites-themes/* /var/www/html/sites/all/themes/
/usr/bin/yes | drush make --no-core /opt/project/smoelenboek.make
/usr/bin/yes | /usr/local/bin/drush cc all
/usr/bin/yes | /usr/local/bin/drush en naturalis_theme
/usr/bin/yes | /usr/local/bin/drush cc all
