<?php
/**
 * @file
 * naturalislanguage_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function naturalislanguage_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-naturalis-language-menu.
  $menus['menu-naturalis-language-menu'] = array(
    'menu_name' => 'menu-naturalis-language-menu',
    'title' => 'Naturalis Language Menu',
    'description' => 'Provides a switch for quickly changing language',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Naturalis Language Menu');
  t('Provides a switch for quickly changing language');


  return $menus;
}
